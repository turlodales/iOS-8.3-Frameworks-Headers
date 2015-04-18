//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "AVVideoLayer.h"

@interface WebAVVideoLayer : CALayer <AVVideoLayer>
{
    struct RetainPtr<WebAVPlayerController> _avPlayerController;
    struct RetainPtr<AVPlayerViewController> _avPlayerViewController;
    struct RetainPtr<CALayer> _videoSublayer;
    int _videoLayerGravity;
    BOOL _readyForDisplay;
    struct CGRect _videoRect;
}

+ (id)videoLayer;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(retain, nonatomic) CALayer *videoSublayer;
- (void)setPlayerViewController:(id)arg1;
@property(nonatomic) int videoLayerGravity;
- (void)setPlayerController:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;

@end

