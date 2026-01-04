/*
============================================================================
 Name        : GeminiEngine.h
 Author      : Lev Gorodetskii
 Version     : 1.0
 Copyright   : 
 Description : CGeminiEngine declaration
============================================================================
*/

#ifndef GEMINIENGINE_H
#define GEMINIENGINE_H

#include <e32base.h>
#include <e32debug.h>
#include <es_sock.h>
#include <in_sock.h>
#include <securesocket.h>

#include "GeminiObserver.h"

class CGeminiEngine : public CActive
	{
public:
	static CGeminiEngine* NewL(MGeminiObserver& aObserver);
	~CGeminiEngine();

	void FetchL(const TDesC8& aUrl);

private:
	CGeminiEngine(MGeminiObserver& aObserver);
	void ConstructL();

	// From CActive
	void RunL();
	void DoCancel();
	TInt RunError(TInt aError);

	// State machine helpers
	void ResolveHostL(const TDesC8& aHost);
	void ConnectL();
	void StartHandshakeL();
	void SendRequestL();
	void ReceiveResponseL();
	void ParseResponse();

private:
	enum TEngineState
		{
		EIdle,
		EResolvingHost,
		EConnecting,
		EHandshaking,
		ESending,
		EReceiving
		};

private:
	MGeminiObserver& iObserver;
	TEngineState iState;

	// Networking
	RSocketServ iSocketServ;
	RSocket iSocket;
	RHostResolver iResolver;
	CSecureSocket* iSecureSocket;
	TNameEntry iNameEntry;

	// Request data
	HBufC8* iUrl;
	HBufC8* iHost;
	TUint iPort;
	HBufC8* iSendBuffer;

	// Response data
	HBufC8* iRecvBuffer;      // Accumulated full response
	TBuf8<4096> iTempRecvBuf; // Temporary buffer for each recv
	TSockXfrLength iRecvLen;
	};

#endif // GEMINIENGINE_H
