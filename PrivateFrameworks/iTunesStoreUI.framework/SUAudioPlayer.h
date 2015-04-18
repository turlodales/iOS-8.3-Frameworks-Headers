//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"

@class AVPlayer, AVPlayerItem, AVURLAsset, NSMutableDictionary, NSString, NSURL, SUPlayerStatus;

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate>
{
    AVURLAsset *_asset;
    NSURL *_certificateUrl;
    BOOL _didPostForPreviewHistory;
    NSURL *_keyUrl;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    long long _storeItemIdentifier;
    SUPlayerStatus *_status;
    id _timeObserver;
    NSURL *_url;
}

- (id)valueForNowPlayingKey:(id)arg1;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)_postStatusChangeNotification;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (void)_applyNowPlayingInfo;
- (void)_setPlayerState:(int)arg1;
- (void)_handleAssetValuesDidLoad;
- (void)_destroyPlayerItem;
- (void)_destroyPlayer;
@property(retain, nonatomic) NSURL *keyURL; // @synthesize keyURL=_keyUrl;
@property(retain, nonatomic) NSURL *certificateURL; // @synthesize certificateURL=_certificateUrl;
- (void)seekToTime:(double)arg1;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
@property(readonly, nonatomic) SUPlayerStatus *playerStatus;
@property(nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
- (void)_failWithError:(id)arg1;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (id)initWithURL:(id)arg1;
- (void)stop;
- (void)dealloc;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

