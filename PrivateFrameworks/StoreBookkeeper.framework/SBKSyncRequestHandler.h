//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreBookkeeper/SBKRequestHandler.h>

#import "SBKSyncTransactionProcessing.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SBKSyncResponseData, SBKTransactionController;

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_overrideResponseDomainVersion;
    SBKSyncResponseData *_responseData;
    NSMutableArray *_responseUpdatedKeys;
    NSMutableArray *_responseDeletedKeys;
    NSMutableArray *_responseConflictedKeys;
    NSMutableDictionary *_responseDataByKey;
    SBKTransactionController *_transactionController;
}

+ (int)conflictDetectionType;
- (id)initWithBagContext:(id)arg1;
- (id)responseDataForResponseKey:(id)arg1;
@property(readonly) NSArray *responseConflictedKeys; // @synthesize responseConflictedKeys=_responseConflictedKeys;
@property(readonly) NSArray *responseDeletedKeys; // @synthesize responseDeletedKeys=_responseDeletedKeys;
@property(copy) NSString *responseDomainVersion;
- (void)_onQueue_clearTransactionResponseData;
- (void)startTransactionWithSyncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 finishedBlock:(CDUnknownBlockType)arg4;
@property(readonly) NSArray *responseUpdatedKeys; // @synthesize responseUpdatedKeys=_responseUpdatedKeys;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(char *)arg3;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(char *)arg5;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)clearTransactionResponseData;
@property(readonly) SBKTransactionController *transactionController; // @synthesize transactionController=_transactionController;
@property(readonly) SBKSyncResponseData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

