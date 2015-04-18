//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATSessionTask.h"

#import "ATAssetLinkControllerObserver.h"

@class ATAssetLinkController, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSPredicate, NSString;

@interface ATAssetSessionTask : ATSessionTask <ATAssetLinkControllerObserver>
{
    NSMutableOrderedSet *_remainingAssets;
    NSString *_dataClass;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelAtStart;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _waitingForRetry;
    BOOL _retryUntilFinished;
    NSPredicate *_filterPredicate;
    CDUnknownBlockType _shouldRetryAssetBlock;
    ATAssetLinkController *_assetLinkController;
    unsigned int _failedAssetsCount;
}

@property(copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) unsigned int failedAssetsCount; // @synthesize failedAssetsCount=_failedAssetsCount;
@property(nonatomic) BOOL retryUntilFinished; // @synthesize retryUntilFinished=_retryUntilFinished;
@property(retain, nonatomic) ATAssetLinkController *assetLinkController; // @synthesize assetLinkController=_assetLinkController;
@property(copy, nonatomic) CDUnknownBlockType shouldRetryAssetBlock; // @synthesize shouldRetryAssetBlock=_shouldRetryAssetBlock;
- (id)remainingAssets;
- (void)cancelAllAssets;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (id)initWithDataClass:(id)arg1;
@property(readonly, copy, nonatomic) NSString *dataClass; // @synthesize dataClass=_dataClass;
- (id)sessionGroupingKey;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void).cxx_destruct;
- (void)resume;
- (void)start;
- (void)suspend;
@property(readonly, copy) NSString *debugDescription;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

