//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFLANContinuationContext;

@interface MFLANContinuationAgent : NSObject
{
    BOOL _serverRunning;
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_serverRunLoopSource;
    CDUnknownBlockType _connectCallbackBlock;
    MFLANContinuationContext *_continuationContext;
}

- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) BOOL serverRunning; // @synthesize serverRunning=_serverRunning;
- (void)connectToServerWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_socketListenerRunLoop;
- (id)_getDeviceHostname;
- (void)_cleanupSocket;
- (void)_cleanupRunLoopSource;
- (void)stopServer;
@property(readonly, nonatomic) MFLANContinuationContext *continuationContext; // @synthesize continuationContext=_continuationContext;
- (id)startServerWithCompletion:(CDUnknownBlockType)arg1;

@end
