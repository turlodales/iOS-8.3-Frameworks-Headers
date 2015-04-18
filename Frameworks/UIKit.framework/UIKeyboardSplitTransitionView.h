//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, UIKeyboardSliceSet;

@interface UIKeyboardSplitTransitionView : UIView
{
    float _currentProgress;
    float _liftOffProgress;
    float _finishProgress;
    float _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completionBlock;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    id <UIKeyboardSplitTransitionDataSource> _transitionDataSource;
    BOOL _centerFilled;
    BOOL _isRebuilding;
    BOOL _isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}

@property(nonatomic) id <UIKeyboardSplitTransitionDataSource> splitTransitionDataSource; // @synthesize splitTransitionDataSource=_transitionDataSource;
- (BOOL)showDictationKey;
- (BOOL)showIntlKey;
- (struct CGImage *)keyImageWithToken:(id)arg1;
- (BOOL)canDisplayTransition;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(int)arg3 orientation:(int)arg4;
- (struct CGRect)rectEnclosingKeyplane:(id)arg1;
- (struct CGSize)sizeForShadowLayer:(int)arg1;
- (void)initializeLayers;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (void)transformForProgress:(float)arg1;
- (BOOL)transitionIsVisible;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate; // @synthesize splitTransitionDelegate=_transitionDelegate;
- (BOOL)shouldAllowRubberiness;
- (id)colorsForBackgroundLayer:(int)arg1;
- (id)outerCenterDropShadow;
- (id)bottomDropShadow;
- (id)centerDropShadow;
- (id)topDropShadow;
@property(readonly) NSArray *shadowLayers;
@property(readonly) NSArray *backgroundLayers;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)finishWithProgress:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(float)arg1;
- (void)finalizeTransition;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)dealloc;

@end

