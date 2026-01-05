
#ifndef GEMRIDE_PAN_H
#define GEMRIDE_PAN_H

/** gemride application panic codes */
enum TgemridePanics
	{
	EgemrideUi = 1
	// add further panics here
	};

inline void Panic(TgemridePanics aReason)
	{
	_LIT(applicationName,"gemride");
	User::Panic(applicationName, aReason);
	}

#endif // GEMRIDE_PAN_H
