#include "GemtextParser.h"

// === CGemLine ===

CGemLine::CGemLine()
    : iType(EGemText), iText(NULL), iUrl(NULL)
    {
    }

CGemLine::~CGemLine()
    {
    delete iText;
    delete iUrl;
    }

CGemLine* CGemLine::NewL(TGemLineType aType, const TDesC& aText)
    {
    CGemLine* self = new (ELeave) CGemLine();
    CleanupStack::PushL(self);
    self->ConstructL(aType, aText);
    CleanupStack::Pop(self);
    return self;
    }

CGemLine* CGemLine::NewLinkL(const TDesC& aUrl, const TDesC& aLabel)
    {
    CGemLine* self = new (ELeave) CGemLine();
    CleanupStack::PushL(self);
    self->ConstructLinkL(aUrl, aLabel);
    CleanupStack::Pop(self);
    return self;
    }

void CGemLine::ConstructL(TGemLineType aType, const TDesC& aText)
    {
    iType = aType;
    iText = aText.AllocL();
    }

void CGemLine::ConstructLinkL(const TDesC& aUrl, const TDesC& aLabel)
    {
    iType = EGemLink;
    iUrl = aUrl.AllocL();
    if (aLabel.Length() > 0)
        {
        iText = aLabel.AllocL();
        }
    else
        {
        iText = aUrl.AllocL();
        }
    }

// === CGemtextParser ===

CGemtextParser::CGemtextParser()
    {
    }

CGemtextParser::~CGemtextParser()
    {
    iLines.ResetAndDestroy();
    }

CGemtextParser* CGemtextParser::NewL()
    {
    CGemtextParser* self = new (ELeave) CGemtextParser();
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop(self);
    return self;
    }

void CGemtextParser::ConstructL()
    {
    }

void CGemtextParser::ParseL(const TDesC& aContent)
    {
    iLines.ResetAndDestroy();

    TBool preformatted = EFalse;
    TPtrC remaining(aContent);

    while (remaining.Length() > 0)
        {
        TInt newlinePos = remaining.Locate('\n');

        TPtrC currentLine;
        if (newlinePos != KErrNotFound)
            {
            currentLine.Set(remaining.Left(newlinePos));
            remaining.Set(remaining.Mid(newlinePos + 1));
            }
        else
            {
            currentLine.Set(remaining);
            remaining.Set(KNullDesC);
            }

        // Strip trailing \r
        if (currentLine.Length() > 0 && 
            currentLine[currentLine.Length() - 1] == '\r')
            {
            currentLine.Set(currentLine.Left(currentLine.Length() - 1));
            }

        // Check for preformatted toggle
        if (currentLine.Length() >= 3 &&
            currentLine[0] == '`' &&
            currentLine[1] == '`' &&
            currentLine[2] == '`')
            {
            preformatted = !preformatted;
            continue;  // Don't render the ``` line itself
            }

        ParseLineL(currentLine, preformatted);
        }
    }

void CGemtextParser::ParseLineL(const TDesC& aLine, TBool aPreformatted)
    {
    CGemLine* line = NULL;

    if (aPreformatted)
        {
        line = CGemLine::NewL(EGemPreformatted, aLine);
        }
    else if (aLine.Length() == 0)
        {
        line = CGemLine::NewL(EGemText, KNullDesC);
        }
    else if (aLine.Length() >= 2 && 
             aLine[0] == '=' && aLine[1] == '>')
        {
        TPtrC rest = aLine.Mid(2);

        TInt start = 0;
        while (start < rest.Length() && 
               (rest[start] == ' ' || rest[start] == '\t'))
            {
            start++;
            }
        rest.Set(rest.Mid(start));

        TInt urlEnd = 0;
        while (urlEnd < rest.Length() && 
               rest[urlEnd] != ' ' && rest[urlEnd] != '\t')
            {
            urlEnd++;
            }

        TPtrC url = rest.Left(urlEnd);
        TPtrC label;

        if (urlEnd < rest.Length())
            {
            TInt labelStart = urlEnd;
            while (labelStart < rest.Length() &&
                   (rest[labelStart] == ' ' || rest[labelStart] == '\t'))
                {
                labelStart++;
                }
            if (labelStart < rest.Length())
                {
                label.Set(rest.Mid(labelStart));
                }
            }

        line = CGemLine::NewLinkL(url, label);
        }
    else if (aLine[0] == '#')
        {
        TInt level = 1;
        TInt textStart = 1;

        if (aLine.Length() > 1 && aLine[1] == '#')
            {
            level = 2;
            textStart = 2;
            if (aLine.Length() > 2 && aLine[2] == '#')
                {
                level = 3;
                textStart = 3;
                }
            }

        while (textStart < aLine.Length() &&
               (aLine[textStart] == ' ' || aLine[textStart] == '\t'))
            {
            textStart++;
            }

        TPtrC text = aLine.Mid(textStart);
        TGemLineType type = (level == 1) ? EGemHeading1 :
                            (level == 2) ? EGemHeading2 : EGemHeading3;
        line = CGemLine::NewL(type, text);
        }
    else if (aLine[0] == '*')
        {
        TInt textStart = 1;
        while (textStart < aLine.Length() &&
               (aLine[textStart] == ' ' || aLine[textStart] == '\t'))
            {
            textStart++;
            }
        TPtrC text = aLine.Mid(textStart);
        line = CGemLine::NewL(EGemListItem, text);
        }
    else if (aLine[0] == '>')
        {
        TInt textStart = 1;
        while (textStart < aLine.Length() &&
               (aLine[textStart] == ' ' || aLine[textStart] == '\t'))
            {
            textStart++;
            }
        TPtrC text = aLine.Mid(textStart);
        line = CGemLine::NewL(EGemQuote, text);
        }
    else
        {
        line = CGemLine::NewL(EGemText, aLine);
        }

    CleanupStack::PushL(line);
    iLines.AppendL(line);
    CleanupStack::Pop(line);
    }
