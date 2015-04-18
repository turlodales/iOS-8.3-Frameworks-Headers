//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityView;

@interface UIStatusBarItemView : UIView
{
    float _currentOverlap;
    struct CGContext *_imageContext;
    float _imageContextScale;
    _UILegibilityView *_legibilityView;
    BOOL _visible;
    BOOL _allowsUpdates;
    UIStatusBarItem *_item;
    UIStatusBarLayoutManager *_layoutManager;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;
- (void)beginDisablingRasterization;
- (id)imageWithText:(id)arg1;
- (void)performPendedActions;
- (BOOL)animatesDataChange;
- (float)maximumOverlap;
- (float)addContentOverlap:(float)arg1;
- (float)resetContentOverlap;
- (float)extraRightPadding;
- (float)extraLeftPadding;
- (id)textFont;
- (float)setStatusBarData:(id)arg1 actions:(int)arg2;
- (float)currentRightOverlap;
- (float)currentLeftOverlap;
- (float)currentOverlap;
- (void)setCurrentOverlap:(float)arg1;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (void)endDisablingRasterization;
- (float)shadowPadding;
- (float)standardPadding;
- (int)textStyle;
- (void)setLayerContentsImage:(id)arg1;
- (float)adjustFrameToNewSize:(float)arg1;
- (float)legibilityStrength;
@property(nonatomic) BOOL allowsUpdates; // @synthesize allowsUpdates=_allowsUpdates;
- (float)updateContentsAndWidth;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (int)legibilityStyle;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) UIStatusBarLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (id)contentsImage;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)endImageContext;
- (id)imageFromImageContextClippedToWidth:(float)arg1;
- (void)beginImageContextWithMinimumWidth:(float)arg1;
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
- (id)imageWithShadowNamed:(id)arg1;
- (int)textAlignment;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
@property(readonly, nonatomic) UIStatusBarItem *item; // @synthesize item=_item;
- (void)setContentMode:(int)arg1;
- (id)description;
- (void)dealloc;

@end

