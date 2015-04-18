//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject
{
    AVPlayerItemTrackInternal *_playerItemTrack;
}

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (void)finalize;
- (int)trackID;
@property(readonly, nonatomic) AVAssetTrack *assetTrack;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setLoudnessInfo:(id)arg1;
@property(readonly, nonatomic) float currentVideoFrameRate;
- (id)fallbackTrack;
- (void)_transferCachedValuesToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferEnabledToFig;
- (id)_weakReferenceToPlayerItem;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (id)loudnessInfo;

@end

