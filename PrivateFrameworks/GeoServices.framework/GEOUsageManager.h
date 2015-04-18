//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBRequesterDelegate.h"

@class GEORequester, GEOUsageCollectionRequest, NSLock, NSMapTable, NSMutableDictionary, NSString, NSTimer;

@interface GEOUsageManager : NSObject <PBRequesterDelegate>
{
    GEORequester *_requester;
    GEOUsageCollectionRequest *_request;
    NSLock *_requestLock;
    NSTimer *_updateTimer;
    CDUnknownBlockType _backgroundTaskStart;
    CDUnknownBlockType _backgroundTaskEnd;
    NSMapTable *_requesterToBackgroundTask;
    NSMutableDictionary *_stateData;
    NSMutableDictionary *_stateTimingData;
}

+ (id)sharedManager;
- (void)captureTileStateForGridCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)captureTileStateForLoadCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)clearStateTimingData;
- (void)captureStateTransition:(id)arg1 force:(BOOL)arg2;
@property(copy, nonatomic) CDUnknownBlockType backgroundTaskEnd; // @synthesize backgroundTaskEnd=_backgroundTaskEnd;
@property(copy, nonatomic) CDUnknownBlockType backgroundTaskStart; // @synthesize backgroundTaskStart=_backgroundTaskStart;
- (void)captureLeaveNowFeedbackCollection:(id)arg1;
- (void)captureStateTimingFeedbackCollection:(id)arg1;
- (void)captureMapsUsageFeedbackCollection:(id)arg1;
- (void)captureTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)captureMapsLaunchURLScheme:(id)arg1 sourceApplication:(id)arg2;
- (void)_endBackgroundTaskForRequester:(id)arg1;
- (void)_startBackgroundTaskForRequester:(id)arg1;
- (void)_sendUsageToServer;
- (id)createTileSetStateForType:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (void)_prepareRequest;
- (BOOL)shouldIgnoreCollectionForCountry;
- (void)captureUsageDataForRequest:(id)arg1 service:(int)arg2 requestType:(int)arg3;
- (void)_scheduleUpdateTimer;
- (void)_cleanupTimer;
- (void)_cleanupRequester;
- (void)_applicationDeactivating;
- (void)captureDirectionsFeedbackCollection:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (void)captureTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (void)captureTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)_usageURL;
- (void)captureRequestsForPlaceDataCache:(id)arg1 appIdentifier:(id)arg2;
- (void)captureSuggestionsFeedbackCollection:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)captureUsageDataForRequest:(id)arg1 service:(int)arg2;
- (void)captureUsageDataForTiles:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

