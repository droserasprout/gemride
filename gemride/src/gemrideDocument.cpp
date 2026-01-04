/*
========================================================================
 Name        : gemrideDocument.cpp
 Author      : Lev Gorodetskii
 Copyright   : 
 Description : 
========================================================================
*/
// [[[ begin generated region: do not modify [Generated User Includes]
#include "gemrideDocument.h"
#include "gemrideAppUi.h"
// ]]] end generated region [Generated User Includes]

/**
 * @brief Constructs the document class for the application.
 * @param anApplication the application instance
 */
CgemrideDocument::CgemrideDocument( CEikApplication& anApplication )
	: CAknDocument( anApplication )
	{
	}

/**
 * @brief Completes the second phase of Symbian object construction. 
 * Put initialization code that could leave here.  
 */ 
void CgemrideDocument::ConstructL()
	{
	}
	
/**
 * Symbian OS two-phase constructor.
 *
 * Creates an instance of CgemrideDocument, constructs it, and
 * returns it.
 *
 * @param aApp the application instance
 * @return the new CgemrideDocument
 */
CgemrideDocument* CgemrideDocument::NewL( CEikApplication& aApp )
	{
	CgemrideDocument* self = new ( ELeave ) CgemrideDocument( aApp );
	CleanupStack::PushL( self );
	self->ConstructL();
	CleanupStack::Pop( self );
	return self;
	}

/**
 * @brief Creates the application UI object for this document.
 * @return the new instance
 */	
CEikAppUi* CgemrideDocument::CreateAppUiL()
	{
	return new ( ELeave ) CgemrideAppUi;
	}
				
