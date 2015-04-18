//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDaemonConnection.h"

@class HMMessageDispatcher, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface HMDConnectionProxy : NSObject <HMDaemonConnection>
{
    BOOL _entitledForAPIAccess;
    BOOL _entitledForSPIAccess;
    BOOL _entitledForBackgroundMode;
    BOOL _ready;
    BOOL _activated;
    NSXPCConnection *_xpcConnection;
    NSString *_clientName;
    HMMessageDispatcher *_recvDispatcher;
    NSMutableSet *_pendingRequests;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    unsigned int _activeMessageCount;
}

@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) BOOL ready; // @synthesize ready=_ready;
@property(retain, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(nonatomic) unsigned int activeMessageCount; // @synthesize activeMessageCount=_activeMessageCount;
@property(retain, nonatomic) HMMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *activeMessageTracker; // @synthesize activeMessageTracker=_activeMessageTracker;
- (BOOL)shouldSendResponseForMessageIdentifier:(id)arg1;
@property(readonly, nonatomic) id remoteProxy;
@property(readonly, nonatomic) int clientPid;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)recheckinWithName:(id)arg1;
- (void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess; // @synthesize entitledForSPIAccess=_entitledForSPIAccess;
- (void).cxx_destruct;
@property(nonatomic) BOOL activated; // @synthesize activated=_activated;
- (void)activate;
- (void)deactivate;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

