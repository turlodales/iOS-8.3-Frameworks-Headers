//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer;

@interface CKVideoPreviewViewController : UIViewController
{
    BOOL _redisplayStatusBar;
    BOOL _reachedEnd;
    id <CKVideoPreviewViewControllerDelegate> _videoPreviewDelegate;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property(readonly, nonatomic, getter=isPlaying) BOOL playing; // @dynamic playing;
@property(nonatomic) BOOL redisplayStatusBar; // @synthesize redisplayStatusBar=_redisplayStatusBar;
@property(nonatomic) id <CKVideoPreviewViewControllerDelegate> videoPreviewDelegate; // @synthesize videoPreviewDelegate=_videoPreviewDelegate;
@property(nonatomic) BOOL reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(retain, nonatomic) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
- (BOOL)togglePlayPause;
- (void)setVideoFileURL:(id)arg1;
- (void)videoDidReachEnd:(id)arg1;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void)dealloc;
- (void)play;

@end

