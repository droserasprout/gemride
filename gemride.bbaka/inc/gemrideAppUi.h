/*
========================================================================
 Name        : gemrideAppUi.h
 Author      : Lev Gorodetskii
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef GEMRIDEAPPUI_H
#define GEMRIDEAPPUI_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknviewappui.h>
// ]]] end generated region [Generated Includes]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class CgemrideContainerView;
// ]]] end generated region [Generated Forward Declarations]

/**
 * @class	CgemrideAppUi gemrideAppUi.h
 * @brief The AppUi class handles application-wide aspects of the user interface, including
 *        view management and the default menu, control pane, and status pane.
 */
class CgemrideAppUi : public CAknViewAppUi
		{
public: 
	// constructor and destructor
	CgemrideAppUi();
	virtual ~CgemrideAppUi();
	void ConstructL();
    void NavigateToL(const TDesC& aUrl);

public:
	// from CCoeAppUi
	TKeyResponse HandleKeyEventL(
				const TKeyEvent& aKeyEvent,
				TEventCode aType );

	// from CEikAppUi
	void HandleCommandL( TInt aCommand );
	void HandleResourceChangeL( TInt aType );

	// from CAknAppUi
	void HandleViewDeactivation( 
			const TVwsViewId& aViewIdToBeDeactivated, 
			const TVwsViewId& aNewlyActivatedViewId );

private:
	void InitializeContainersL();
	// [[[ begin generated region: do not modify [Generated Methods]
public: 
	// ]]] end generated region [Generated Methods]
	
	// [[[ begin generated region: do not modify [Generated Instance Variables]
private: 
	CgemrideContainerView* iGemrideContainerView;
	// ]]] end generated region [Generated Instance Variables]
	
	
	// [[[ begin [User Handlers]
protected: 
	// ]]] end [User Handlers]
	
	};

#endif // GEMRIDEAPPUI_H			
