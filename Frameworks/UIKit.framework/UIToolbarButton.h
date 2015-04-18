//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UILabel, UIToolbarButtonBadge, UIView, _UIPressedIndicatorView;

@interface UIToolbarButton : UIControl
{
    struct CGRect _hitRect;
    UIView *_info;
    UILabel *_label;
    UIToolbarButtonBadge *_badge;
    _UIPressedIndicatorView *_pressedIndicator;
    int _barStyle;
    int _style;
    struct UIEdgeInsets _glowAdjust;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    BOOL _bezel;
    float _minimumWidth;
    float _maximumWidth;
    float _labelHeight;
    struct UIEdgeInsets _infoInsets;
    UIColor *_toolbarTintColor;
    BOOL _isAnimatedTrashButton;
    id _appearanceStorage;
    BOOL _isInTopBar;
    Class _appearanceGuideClass;
    struct UIEdgeInsets __additionalSelectionInsets;
}

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;
@property(nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton; // @synthesize animatedTrashButton=_isAnimatedTrashButton;
- (void)setToolbarTintColor:(id)arg1;
- (BOOL)_useBarHeight;
- (void)_setBarHeight:(float)arg1;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2;
- (BOOL)_isOn;
- (void)_setOn:(BOOL)arg1;
- (float)_paddingForLeft:(BOOL)arg1;
- (BOOL)_canGetPadding;
- (void)_setInfoFlexibleWidth:(BOOL)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(BOOL)arg2;
- (void)_setInfoWidth:(float)arg1;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)setUseSelectedImage:(BOOL)arg1;
- (void)_showPressedIndicator:(BOOL)arg1;
- (struct CGRect)_buttonBarHitRect;
- (void)_setButtonBarHitRect:(struct CGRect)arg1;
- (void)setSizesToFitImage:(BOOL)arg1;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(float)arg4 withBarStyle:(int)arg5 withStyle:(int)arg6 withInsets:(struct UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(struct UIEdgeInsets)arg12 glowInsets:(struct UIEdgeInsets)arg13 landscape:(BOOL)arg14;
- (void)_setInTopBar:(BOOL)arg1;
- (void)_updateInfoTextColorsForState:(unsigned int)arg1;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg1;
- (BOOL)_useSilverLook;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (BOOL)_shouldApplyPadding;
- (BOOL)_isBorderedOtherThanAccessibility;
- (void)_adjustToolbarButtonInfo;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_positionBadge;
- (BOOL)_infoIsButton;
- (void)_setPressed:(BOOL)arg1;
- (BOOL)_isBordered;
- (void)_adjustPushButtonForMiniBar:(BOOL)arg1 isChangingBarHeight:(BOOL)arg2;
- (id)_newButton;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
- (id)_info;
- (void)_setTouchHasHighlighted:(BOOL)arg1;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setLastHighlightSuccessful:(BOOL)arg1;
@property(nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets=__additionalSelectionInsets;
@property(nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setCreatedByBarButtonItem:) BOOL _createdByBarButtonItem;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (id)_backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setWantsLetterpressContent;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)_defaultTitleShadowColorForState:(unsigned int)arg1;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned int)arg1;
- (id)_defaultTitleColorForState:(unsigned int)arg1;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1;
- (BOOL)_showsAccessibilityBackgroundWhenEnabled;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)_wantsAccessibilityButtonShapes;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;

@end

