//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAMNebulaDaemonClientProtocol.h"
#import "CAMNebulaDaemonProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol>
{
    NSObject<OS_dispatch_queue> *__queue;
    NSXPCConnection *__connection;
    int __connectionCount;
}

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
+ (id)sharedInstance;
@property(readonly, nonatomic) int _connectionCount; // @synthesize _connectionCount=__connectionCount;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (void)_getProxyForExecutingBlock:(CDUnknownBlockType)arg1;
- (void)forceStopCaptureWithReasons:(int)arg1;
- (void)_closeConnectionToDaemon;
- (void)_ensureConnectionToDaemon;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)stopNebulaWithUUID:(id)arg1;
- (void)finishCaptureForNebulaWithUUID:(id)arg1;
- (void)updateNebulaWithUUID:(id)arg1;
- (void)resumeNebulaWithUUID:(id)arg1;
- (void)startNebulaWithUUID:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

