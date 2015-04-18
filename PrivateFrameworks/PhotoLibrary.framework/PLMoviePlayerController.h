//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, NSString, PLMoviePlayerView, PLTVOutWindow, UIAlertView;

@interface PLMoviePlayerController : NSObject
{
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    PLMoviePlayerView *_view;
    UIAlertView *_alertView;
    PLTVOutWindow *_tvOutWindow;
    BOOL _hasPendingTime;
    double _pendingTime;
    unsigned int _pendingTimeSnapOption;
    BOOL _forceUpdateCurrentTime;
    BOOL _isExternalPlayback;
    BOOL _exited;
    double _lastSetCurrentTimeTime;
    BOOL _isSeeking;
    unsigned int _backgroundTaskId;
    BOOL _audioSessionActive;
    NSString *_originalAudioCategory;
    BOOL _TVOutEnabled;
    BOOL _forceDisableTVOut;
    BOOL _isPreparedForPlayback;
    BOOL _isActiveController;
    id <PLMoviePlayerControllerDelegate> _delegate;
    unsigned int _bufferingState;
    unsigned int _playbackState;
}

+ (BOOL)_isNetworkSupportedPath:(id)arg1;
+ (BOOL)_isStreamableAsset:(id)arg1;
+ (id)AVAssetURLWithPath:(id)arg1;
- (int)externalPlaybackType;
@property(readonly, retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) double currentTime;
@property(nonatomic, setter=_setForceDisableTVOut:) BOOL forceDisableTVOut; // @synthesize forceDisableTVOut=_forceDisableTVOut;
- (void)pauseDueToInsufficientData;
- (void)_playbackFailedWithError:(id)arg1;
@property(nonatomic) BOOL isActiveController; // @synthesize isActiveController=_isActiveController;
- (void)_displayVideoView;
- (void)_pausePlaybackForNotification;
- (void)_restoreTVOutVideoIfNecessary;
- (void)_setPlayerAudioSessionActive:(BOOL)arg1;
- (void)_delayedUpdateFromPendingTime;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2 forceUpdate:(BOOL)arg3;
- (void)_playerRateDidChange:(id)arg1;
- (void)_dispatchOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)_streamUnlikelyToKeepUp;
- (void)_streamLikelyToKeepUp;
- (void)_streamBufferFull;
- (void)_streamRanDry;
- (void)_playerItemFailedToPlayToEnd:(id)arg1;
- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;
- (void)_updateFromPendingTime;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)_loadAsset:(id)arg1;
- (void)_setPlaybackState:(unsigned int)arg1;
- (void)_updateAudioSession;
- (void)_tearDownPlayer;
- (void)_setPlayerItem:(id)arg1;
- (void)_setupPlayer;
- (BOOL)isExternalPlayback;
- (void)playDueToEnoughData;
- (void)resetPlayer;
- (void)setPlayerItem:(id)arg1 startTime:(double)arg2;
- (void)requestToResignAsActiveController;
- (void)requestToBecomeActiveController;
- (void)didBecomeActiveController;
- (void)willResignAsActiveController;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(readonly, nonatomic) double duration;
@property(readonly, retain, nonatomic) PLMoviePlayerView *view; // @synthesize view=_view;
@property(nonatomic) id <PLMoviePlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)_tearDownTVOutWindow;
- (void)_updateTVOutEnabled;
- (void)_setupTVOutWindow;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateBackgroundViewInformation;
- (void)playFromBeginning;
- (void)tearDownTVOutWindow;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (id)_playerKeysToObserve;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setBufferingState:(unsigned int)arg1;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) BOOL isPreparedForPlayback; // @synthesize isPreparedForPlayback=_isPreparedForPlayback;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_registerForNotifications;
- (void)_exitPlayer:(int)arg1;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2;
- (BOOL)videoOutActive;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
@property(nonatomic) BOOL TVOutEnabled; // @synthesize TVOutEnabled=_TVOutEnabled;
@property(readonly, nonatomic) unsigned int bufferingState; // @synthesize bufferingState=_bufferingState;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)play;
@property(readonly, nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
- (void)_unregisterForNotifications;
- (BOOL)_allowsExternalPlayback;
- (id)_asset;

@end

