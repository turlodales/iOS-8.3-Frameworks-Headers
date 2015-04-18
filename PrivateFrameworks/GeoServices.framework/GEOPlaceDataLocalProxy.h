//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOPlaceDataProxy.h"

@class GEOPhoneNumberMUIDMapper, GEOPlaceDataCacheRegister, NSLock, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSString;

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy>
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
    GEOPlaceDataCacheRegister *_cacheRegister;
    GEOPhoneNumberMUIDMapper *_phoneNumberMapper;
    NSMutableSet *_requestsInProgress;
    NSMutableOrderedSet *_placeHashes;
}

- (void)_resetPhoneNumberMapper;
- (void)_trackPlaceData:(id)arg1 forGeocodingParameters:(id)arg2;
- (id)_cachedPlaceForForwardGeocodeRequest:(id)arg1;
- (void)_cachePlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2 shouldOptimizeWritesToDisk:(BOOL)arg3;
- (void)_requestMUIDsFromNetwork:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 finished:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 finished:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (int)_invalidationStateForPlace:(id)arg1;
- (void)_privacyAndLocationSettingsResetObserver:(id)arg1;
- (void)_callHistoryRecentsClearedObserver:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 networkActivity:(CDUnknownBlockType)arg4 requesterHandler:(CDUnknownBlockType)arg5;
- (void)trackPlaceData:(id)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 requesterHandler:(CDUnknownBlockType)arg4;
- (void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 requesterHandler:(CDUnknownBlockType)arg5;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

