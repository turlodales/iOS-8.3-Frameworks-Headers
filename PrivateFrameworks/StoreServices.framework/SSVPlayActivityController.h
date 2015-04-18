//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SSVPlayActivityTable, SSXPCConnection;

@interface SSVPlayActivityController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSXPCConnection *_connection;
    NSMutableDictionary *_endpointIdentifierToEndpointRevisionInformation;
    int _endpointRevisionInformationDidChangeNotifyToken;
    BOOL _hasAttemptedTableCreation;
    BOOL _hasLoadedEndpointRevisionInformation;
    BOOL _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
    BOOL _hasValidEndpointRevisionInformationDidChangeNotifyToken;
    NSMutableArray *_pendingFlushingSessions;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSVPlayActivityTable *_table;
    unsigned int _writingStyle;
}

+ (id)_requiredEndpointIdentifiers;
@property(readonly, nonatomic) unsigned int writingStyle; // @synthesize writingStyle=_writingStyle;
- (void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removeFlushedPlayActivityEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupNotifyTokenIfNeeded;
- (void)getRevisionInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1;
- (id)_sessionInformationForSessionToken:(unsigned long long)arg1;
- (BOOL)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2;
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_loadEndpointIdentifierInformationIfNeeded;
- (id)_table;
- (void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(BOOL)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(BOOL)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithWritingStyle:(unsigned int)arg1;
- (id)_connection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

