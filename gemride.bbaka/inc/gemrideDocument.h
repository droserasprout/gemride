/*
========================================================================
 Name        : gemrideDocument.h
 Author      : Lev Gorodetskii
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef GEMRIDEDOCUMENT_H
#define GEMRIDEDOCUMENT_H

#include <akndoc.h>
		
class CEikAppUi;

/**
* @class	CgemrideDocument gemrideDocument.h
* @brief	A CAknDocument-derived class is required by the S60 application 
*           framework. It is responsible for creating the AppUi object. 
*/
class CgemrideDocument : public CAknDocument
	{
public: 
	// constructor
	static CgemrideDocument* NewL( CEikApplication& aApp );

private: 
	// constructors
	CgemrideDocument( CEikApplication& aApp );
	void ConstructL();
	
public: 
	// from base class CEikDocument
	CEikAppUi* CreateAppUiL();
	};
#endif // GEMRIDEDOCUMENT_H
