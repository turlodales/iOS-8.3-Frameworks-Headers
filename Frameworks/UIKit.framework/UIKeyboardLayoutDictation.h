//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (float)portraitHeight;
+ (float)landscapeHeight;
+ (id)activeInstance;
- (struct CGSize)splitLeftSize;
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;
- (BOOL)visible;
- (BOOL)usesAutoShift;
- (BOOL)shouldFadeToLayout;
- (BOOL)shouldFadeFromLayout;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (id)currentKeyplane;
- (struct CGSize)dragGestureSize;
- (int)_clipCornersOfView:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

