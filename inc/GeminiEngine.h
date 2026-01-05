/*
============================================================================
 Name        : GeminiEngine.h
 Author      : Lev Gorodetskii
 Description : Gemini protocol engine with automatic retry
============================================================================
*/

#ifndef GEMINIENGINE_H
#define GEMINIENGINE_H

#include <e32base.h>
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

    // State machine
    void ResolveHostL(const TDesC8& aHost);
    void ConnectL();
    void StartHandshakeL();
    void SendRequestL();
    void ReceiveResponseL();
    void ParseResponse();

    // Retry logic
    void CleanupConnection();
    void ScheduleRetryL();
    void RetryFetchL();
    static TInt RetryTimerCallback(TAny* aPtr);

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

    static const TInt KMaxRetries = 5;
    static const TInt KRetryDelayMicros = 1000000;

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
    HBufC8* iRecvBuffer;
    TBuf8<4096> iTempRecvBuf;
    TSockXfrLength iRecvLen;

    // Retry state
    TInt iRetryCount;
    CPeriodic* iRetryTimer;
    };

#endif // GEMINIENGINE_H
