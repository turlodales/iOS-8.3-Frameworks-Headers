//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, SSURLConnectionRequest;

@interface RadioSyncRequest : RadioRequest
{
    NSObject<OS_dispatch_queue> *_artworkQueue;
    unsigned long long _globalVersion;
    SSURLConnectionRequest *_request;
    NSDictionary *_responseDictionary;
    BOOL _disableArtworkLoading;
    BOOL _includeCleanTracksOnly;
    BOOL _isAutomaticUpdate;
    NSString *_referer;
    NSDictionary *_resultingOverrideBagDictionary;
}

@property(nonatomic) BOOL isAutomaticUpdate; // @synthesize isAutomaticUpdate=_isAutomaticUpdate;
@property(readonly, copy, nonatomic) NSDictionary *resultingOverrideBagDictionary; // @synthesize resultingOverrideBagDictionary=_resultingOverrideBagDictionary;
@property(copy, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(nonatomic) BOOL includeCleanTracksOnly; // @synthesize includeCleanTracksOnly=_includeCleanTracksOnly;
@property(nonatomic) BOOL disableArtworkLoading; // @synthesize disableArtworkLoading=_disableArtworkLoading;
- (id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(int *)arg3 loadArtworkSynchronously:(BOOL)arg4;
- (id)_stationSortOrderForChanges:(id)arg1;
- (id)_sortedChangesByType:(id)arg1;
- (id)matchDictionary;
- (id)changeList;
- (id)initWithGlobalVersion:(unsigned long long)arg1;
- (id)responseDictionary;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end

