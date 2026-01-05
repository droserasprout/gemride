/*
========================================================================
 Name        : gemrideApplication.h
 Author      : Lev Gorodetskii
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef GEMRIDEAPPLICATION_H
#define GEMRIDEAPPLICATION_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknapp.h>
// ]]] end generated region [Generated Includes]

// [[[ begin generated region: do not modify [Generated Constants]
const TUid KUidgemrideApplication = { 0xEED04A3E };
// ]]] end generated region [Generated Constants]

/**
 *
 * @class	CgemrideApplication gemrideApplication.h
 * @brief	A CAknApplication-derived class is required by the S60 application 
 *          framework. It is subclassed to create the application's document 
 *          object.
 */
class CgemrideApplication : public CAknApplication
	{
private:
	TUid AppDllUid() const;
	CApaDocument* CreateDocumentL();
	
	};
			
#endif // GEMRIDEAPPLICATION_H		
