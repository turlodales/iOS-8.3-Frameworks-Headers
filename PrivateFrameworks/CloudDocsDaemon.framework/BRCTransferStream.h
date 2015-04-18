//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCLifeCycle.h"

@class BRCAccountSession, BRCDeadlineToken, BRCSyncContext, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BRCTransferStream : NSObject <BRCLifeCycle>
{
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    long long _nextFire;
    NSMutableDictionary *_inFlightOpByID;
    BRCDeadlineToken *_schedulingToken;
    NSObject<OS_dispatch_queue> *_transferQueue;
    BOOL _hasReachedCap;
    BOOL _isCancelled;
    CDUnknownBlockType _getNextJob;
}

@property(copy, nonatomic) CDUnknownBlockType getNextJob; // @synthesize getNextJob=_getNextJob;
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3;
- (void)_addOperation:(id)arg1;
- (void)_evaluateCap;
- (void)_setReachedCap:(BOOL)arg1;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;
- (void)wakeUpForNextWorkAt:(long long)arg1;
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;
- (void)_schedule;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)_close;
@property(readonly) NSArray *operations;
- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)addOperation:(id)arg1;
- (void)suspend;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

