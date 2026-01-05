#ifndef GEMTEXTPARSER_H
#define GEMTEXTPARSER_H

#include <e32base.h>

enum TGemLineType
    {
    EGemText = 0,
    EGemHeading1,
    EGemHeading2,
    EGemHeading3,
    EGemListItem,
    EGemQuote,
    EGemLink,
    EGemPreformatted
    };

class CGemLine : public CBase
    {
public:
    static CGemLine* NewL(TGemLineType aType, const TDesC& aText);
    static CGemLine* NewLinkL(const TDesC& aUrl, const TDesC& aLabel);
    ~CGemLine();

    TGemLineType Type() const { return iType; }
    const TDesC& Text() const { return *iText; }
    const TDesC& Url() const { return iUrl ? *iUrl : KNullDesC(); }

private:
    CGemLine();
    void ConstructL(TGemLineType aType, const TDesC& aText);
    void ConstructLinkL(const TDesC& aUrl, const TDesC& aLabel);

private:
    TGemLineType iType;
    HBufC* iText;  // Display text (or preformatted content)
    HBufC* iUrl;   // Only for links
    };

class CGemtextParser : public CBase
    {
public:
    static CGemtextParser* NewL();
    ~CGemtextParser();

    void ParseL(const TDesC& aContent);
    TInt LineCount() const { return iLines.Count(); }
    const CGemLine& Line(TInt aIndex) const { return *iLines[aIndex]; }

private:
    CGemtextParser();
    void ConstructL();
    void ParseLineL(const TDesC& aLine, TBool aPreformatted);

private:
    RPointerArray<CGemLine> iLines;
    };

#endif // GEMTEXTPARSER_H
