//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardSplitTransitionView.h>

@class CALayer, NSMutableDictionary, UIKBCacheToken;

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView
{
    CALayer *_container;
    CALayer *_frontFace;
    CALayer *_backFace;
    CALayer *_frontDarkening;
    CALayer *_backDarkening;
    CALayer *_backDarkeningLeft;
    CALayer *_backDarkeningRight;
    BOOL _showingFrontFace;
    UIKBCacheToken *_startKeyplaneToken;
    UIKBCacheToken *_endKeyplaneToken;
    NSMutableDictionary *_controlKeys;
    struct {
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;
}

@property(nonatomic, getter=isShowingFrontFace) BOOL showingFrontFace; // @synthesize showingFrontFace=_showingFrontFace;
- (void)_delayedUpdateTransition;
- (void)rebuildBackgroundTransition;
- (void)updateTransition;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildMoreIntlKeys;
- (void)rebuildTransition;
- (void)updateMoreIntlKey:(id)arg1 asStart:(BOOL)arg2 withRect:(struct CGRect)arg3 showIntl:(BOOL)arg4 showDictKey:(BOOL)arg5;
- (void)rebuildControlSlicesForKeyName:(id)arg1;
- (void)_flipToFront:(BOOL)arg1 animated:(BOOL)arg2;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(int)arg3 orientation:(int)arg4;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (BOOL)transitionIsVisible;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

