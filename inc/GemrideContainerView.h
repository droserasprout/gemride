/*
========================================================================
 Name        : GemrideContainerView.h
 Author      : Lev Gorodetskii
 Copyright   : 
 Description : 
========================================================================
*/

#ifndef GEMRIDECONTAINERVIEW_H
#define GEMRIDECONTAINERVIEW_H

#include <aknview.h>

#include "GeminiObserver.h"
#include "GeminiEngine.h"
#include "MFullscreenToggler.h"

class CGemrideContainer;
class CEikMenuPane;

/**
 * Avkon view class for gemrideContainerView. It is register with the view server
 * by the AppUi. It owns the container control.
 * @class	CgemrideContainerView gemrideContainerView.h
 */
class CgemrideContainerView : public CAknView, public MGeminiObserver, public MFullscreenToggler
	{
public:
	// from MGeminiObserver
	void OnConnecting();
	void OnBytesReceived(TInt aBytes);
	void OnResponseReceived(const TDesC8& aStatus,
	    const TDesC8& aMeta, const TDesC8& aBody);
	void OnError(TInt aError, const TDesC& aMessage);

	// from MFullscreenToggler
	void ToggleFullscreenL();

	CGemrideContainer* CreateContainerL();
	void NavigateToL(const TDesC& aUrl);
	void GoBackL();
	TBool CanGoBack() const;

private:
	CGeminiEngine* iEngine;
	HBufC8* iCurrentUrl;
	RPointerArray<HBufC8> iHistoryStack;

	// [[[ begin [Public Section]
public:
	// constructors and destructor
	CgemrideContainerView();
	static CgemrideContainerView* NewL();
	static CgemrideContainerView* NewLC();        
	void ConstructL();
	virtual ~CgemrideContainerView();

	// from base class CAknView
	TUid Id() const;
	void HandleCommandL( TInt aCommand );
	void DynInitMenuPaneL( TInt aResourceId, CEikMenuPane* aMenuPane );

	// [[[ begin generated region: do not modify [Generated Methods]
	// ]]] end generated region [Generated Methods]

	// ]]] end [Public Section]


	// [[[ begin [Protected Section]
protected:
	// from base class CAknView
	void DoActivateL(
		const TVwsViewId& aPrevViewId,
		TUid aCustomMessageId,
		const TDesC8& aCustomMessage );
	void DoDeactivate();
	void HandleStatusPaneSizeChange();

	// [[[ begin generated region: do not modify [Overridden Methods]
	// ]]] end generated region [Overridden Methods]


	// [[[ begin [User Handlers]
	// ]]] end [User Handlers]

	// ]]] end [Protected Section]


	// [[[ begin [Private Section]
private:
	void SetupStatusPaneL();
	void CleanupStatusPane();
	void UpdateCbaL();
	void PushCurrentUrlL();
	HBufC* ResolveUrlLC(const TDesC& aUrl);

	// [[[ begin generated region: do not modify [Generated Instance Variables]
	CGemrideContainer* iGemrideContainer;
	// ]]] end generated region [Generated Instance Variables]

	TBool iFullscreen;

	// [[[ begin generated region: do not modify [Generated Methods]
	// ]]] end generated region [Generated Methods]

	// ]]] end [Private Section]

	};

#endif // GEMRIDECONTAINERVIEW_H
// [[[ begin generated region: do not modify [Generated Includes]
// ]]] end generated region [Generated Includes]


// [[[ begin [Event Handler Includes]
// ]]] end [Event Handler Includes]

// [[[ begin generated region: do not modify [Generated Constants]
// ]]] end generated region [Generated Constants]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class CGemrideContainer;
// ]]] end generated region [Generated Forward Declarations]
