//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SiriUISiriStatusViewProtocol.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISiriWaveyViewDelegate.h"

@class NSString, UIButton, UIImageView, UILongPressGestureRecognizer, UIScreen, _UISiriWaveyView;

@interface SiriUISiriStatusView : UIView <_UISiriWaveyViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol>
{
    UIButton *_button;
    UIView *_micOutlineLineView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _UISiriWaveyView *_waveyView;
    UIImageView *_siriMicGlyphView;
    int _imageSet;
    double _lastStateChangeTime;
    UIScreen *_screen;
    int _mode;
    float _disabledMicOpacity;
    id <SiriUISiriStatusViewDelegate> _delegate;
    float _waveyViewWidth;
    id <SiriUISiriStatusViewAnimationDelegate> _animationDelegate;
}

+ (float)statusViewHeightForWidthSizeClass:(BOOL)arg1;
@property(nonatomic) __weak id <SiriUISiriStatusViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (id)_animationForCGImages:(id)arg1;
- (id)_transitionFromListeningToIdleAnimation;
- (void)_zoomInMicGlyphForAnimationDuration:(double)arg1;
- (id)_transitionToThinkingCompleteAnimation;
- (void)_hideWaveform;
- (id)_thinkingSpinningAnimation;
- (void)_setMicOutlineLayerContents:(struct CGImage *)arg1;
- (id)_lastToThinkingCGImage;
- (id)_transitionToThinkingAnimation;
- (void)_showWaveform;
- (void)_zoomOutMicGlyph;
- (id)_transitionToListeningAnimation;
@property(nonatomic) float disabledMicOpacity; // @synthesize disabledMicOpacity=_disabledMicOpacity;
- (void)_startThinkingFromListening;
- (void)_stopThinking;
- (void)_cancelWhileListening;
@property(nonatomic) float waveyViewWidth; // @synthesize waveyViewWidth=_waveyViewWidth;
- (float)_micGlyphYAdjustment;
- (struct CGRect)_waveyViewFrame;
- (void)_micButtonHeld:(id)arg1;
- (void)_micButtonTapped:(id)arg1;
- (void)_setPressedImageEnabled:(BOOL)arg1;
- (id)_defaultMicImage;
- (id)initWithFrame:(struct CGRect)arg1 forImageSet:(int)arg2;
- (void)_startListening;
- (float)audioLevelForWaveyView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <SiriUISiriStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

