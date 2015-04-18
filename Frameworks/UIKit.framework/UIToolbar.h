//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIBarPositioning.h"
#import "_UIBackdropViewGraphicsQualityChangeDelegate.h"
#import "_UIBarPositioningInternal.h"
#import "_UIShadowedView.h"

@class NSArray, NSString, UIColor, UIImageView, _UIBackdropView;

@interface UIToolbar : UIView <_UIShadowedView, _UIBackdropViewGraphicsQualityChangeDelegate, _UIBarPositioningInternal, UIBarPositioning>
{
    id _delegate;
    NSArray *_items;
    UIColor *_barTintColor;
    struct {
        unsigned int barStyle:3;
        unsigned int mode:2;
        unsigned int wasEnabled:1;
        unsigned int downButtonSentAction:1;
        unsigned int barTranslucence:3;
        unsigned int isLocked:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int hasCustomBackgroundView:1;
    } _toolbarFlags;
    struct __CFDictionary *_groups;
    NSArray *_buttonItems;
    int _currentButtonGroup;
    int _pressedTag;
    float _extraEdgeInsets;
    id _appearanceStorage;
    _UIBackdropView *_adaptiveBackdrop;
    UIImageView *_backgroundView;
    UIView *_shadowView;
    BOOL _isAdaptiveToolbarDisabled;
    BOOL _wantsLetterpressContent;
    BOOL _centerTextButtons;
    BOOL _collapsed;
    int _barPosition;
    NSString *_backdropViewLayerGroupName;
}

+ (float)defaultSelectionModeHeight;
+ (float)_buttonGap;
+ (id)defaultButtonFont;
+ (Class)defaultTextButtonClass;
+ (Class)defaultButtonClass;
+ (float)defaultHeightForBarSize:(int)arg1;
+ (float)defaultHeight;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (id)_buttonName:(id)arg1 withType:(int)arg2;
- (void)_updateScriptingInfo:(id)arg1 view:(id)arg2;
- (id)_descriptionForTag:(int)arg1;
- (id)_buttonWithDescription:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_adjustButtonPressed:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (id)_customToolbarAppearance;
@property(nonatomic, getter=_isLocked, setter=_setLocked:) BOOL _locked;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id *)arg2 withHitRects:(id *)arg3 buttonIndexes:(id *)arg4 textButtonIndexes:(id *)arg5;
- (void)_cleanupAdaptiveBackdrop;
- (void)_layoutBackgroundViewConsideringStatusBar;
- (struct CGRect)_frameOfBarButtonItem:(id)arg1;
- (void)_setForceTopBarAppearance:(BOOL)arg1;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)setOnStateForButton:(BOOL)arg1 forButton:(int)arg2;
- (BOOL)onStateForButton:(int)arg1;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)getVisibleButtonTags:(int *)arg1 count:(unsigned int *)arg2 maxItems:(unsigned int)arg3;
- (int)currentButtonGroup;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)registerButtonGroup:(int)arg1 withButtons:(int *)arg2 withCount:(int)arg3;
- (void)showButtons:(int *)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (void)_buttonBarFinishedAnimating;
- (void)positionButtons:(id)arg1 tags:(int *)arg2 count:(int)arg3 group:(int)arg4;
- (id)createButtonWithDescription:(id)arg1;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (void)_frameOrCenterChanged;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(BOOL)arg1 wasMinibar:(BOOL)arg2;
- (id)_currentButtons;
- (void)_showButtons:(int *)arg1 withCount:(int)arg2 group:(int)arg3 withDuration:(double)arg4 adjustPositions:(BOOL)arg5 skipTag:(int)arg6;
- (float)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItemList:(id)arg3;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) BOOL centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property(nonatomic, getter=_isAdaptiveToolbarDisabled, setter=_setAdaptiveToolbarDisabled:) BOOL _adaptiveToolbarDisabled; // @synthesize _adaptiveToolbarDisabled=_isAdaptiveToolbarDisabled;
- (id)shadowImageForToolbarPosition:(int)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)animateToolbarItemIndex:(unsigned int)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (int)mode;
- (void)setMode:(int)arg1;
- (float)extraEdgeInsets;
- (void)setExtraEdgeInsets:(float)arg1;
- (unsigned int)_subviewIndexAboveBackgroundView;
- (BOOL)_supportsAdaptiveBackground;
- (BOOL)_isTopBar_legacy;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_setBarTintColor:(id)arg1 force:(BOOL)arg2;
- (void)setBarStyle:(int)arg1 force:(BOOL)arg2;
- (BOOL)_isInNavigationBar;
- (void)_finishButtonAnimation:(int)arg1 forButton:(int)arg2;
- (id)backgroundImageForToolbarPosition:(int)arg1 barMetrics:(int)arg2;
- (id)_adaptiveBackdrop;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2;
@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName; // @synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_setHidesShadow:(BOOL)arg1;
- (BOOL)_hidesShadow;
@property(nonatomic, setter=_setWantsLetterpressContent:) BOOL _wantsLetterpressContent; // @synthesize _wantsLetterpressContent;
@property(readonly, nonatomic) int barPosition; // @synthesize barPosition=_barPosition;
- (int)_barPosition;
- (id)_currentCustomBackgroundRespectOversize_legacy:(char *)arg1;
- (id)_currentCustomBackground;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
@property(nonatomic) int barStyle;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)_setBarPosition:(int)arg1;
@property(copy, nonatomic) NSArray *items;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)_updateOpacity;
- (struct CGSize)defaultSizeForOrientation:(int)arg1;
- (void)_updateBackgroundImage;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (id)_effectiveBarTintColor;
- (void)_updateBackgroundColor;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (BOOL)isMinibar;
- (BOOL)_subclassImplementsDrawRect;
- (struct CGSize)intrinsicContentSize;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)invalidateIntrinsicContentSize;
- (void)setCenter:(struct CGPoint)arg1;
- (id)scriptingInfoWithChildren;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(float)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (id)_backgroundView;
@property(nonatomic) id <UIToolbarDelegate> delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

