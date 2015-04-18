//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDataObserver.h"
#import "HDDatabaseProtectedDataObserver.h"
#import "HKQueryServer.h"

@class HKSampleType, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HKFilter;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServer, HDDataObserver>
{
    BOOL _didEndActivationTransaction;
    int _shouldDeactivate;
    NSUUID *_queryUUID;
    HKSampleType *_sampleType;
    _HKFilter *_filter;
    id <NSXPCProxyCreating> _clientProxy;
    id <HDHealthDaemon> _daemon;
    id <HDQueryServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queryQueue;
    int _queryState;
}

@property(readonly, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
- (id)_predicateString;
@property(nonatomic) int queryState; // @synthesize queryState=_queryState;
- (BOOL)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2;
- (CDUnknownBlockType)sampleAuthorizationFilter;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6;
- (void)resumeServer;
- (void)pauseServerValidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseServer;
- (void)deactivateServer;
- (id)_queryStateString;
- (void)_queue_stop;
- (void)_queue_transitionToDisabledState:(int)arg1;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (void)activateServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_transitionToPaused;
- (void)_pauseServerValidate:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deactivateServerWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSUUID *queryUUID; // @synthesize queryUUID=_queryUUID;
@property(readonly, nonatomic) id <NSXPCProxyCreating> clientProxy; // @synthesize clientProxy=_clientProxy;
- (void)_queue_transitionToStarted;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldStopProcessingQuery;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_queue_startQueryIfNecessary;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)_queue_transitionToStopped;
- (void)_scheduleStartQuery;
- (BOOL)_queue_validateConfiguration:(id *)arg1;
- (id)_activationTransactionString;
@property(readonly, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
- (void)samplesOfTypeWereRemoved:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (id)diagnosticDescription;
@property(readonly, nonatomic) __weak id <HDHealthDaemon> daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(readonly, nonatomic) __weak id <HDQueryServerDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

