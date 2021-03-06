//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UIImageView, UINavigationBar, UIView;

@interface UINavigationItem : NSObject <NSCoding>
{
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    NSString *_prompt;
    int _tag;
    id _context;
    UINavigationBar *_navigationBar;
    UIView *_defaultTitleView;
    UIView *_titleView;
    UIView *_backButtonView;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_customLeftViews;
    NSArray *_customRightViews;
    BOOL _hidesBackButton;
    BOOL _leftItemsSupplementBackButton;
    UIImageView *_frozenTitleView;
    BOOL _barStyleIndependent;
    float _fontScaleAdjustment;
    NSString *_pendingTitle;
    NSArray *_abbreviatedBackButtonTitles;
    int _independentBarStyle;
    NSArray *_leftItemSpaceList;
    NSArray *_rightItemSpaceList;
    unsigned int _leftFlexibleSpaceCount;
    unsigned int _rightFlexibleSpaceCount;
    NSMutableDictionary *_backgroundImages;
    float __titleViewWidthForAnimations;
    float __idealCustomTitleWidth;
    UINavigationBar *__owningNavigationBar;
}

+ (id)defaultFont;
@property(nonatomic, getter=_owningNavigationBar, setter=_setOwningNavigationBar:) UINavigationBar *_owningNavigationBar; // @synthesize _owningNavigationBar=__owningNavigationBar;
@property(nonatomic, setter=_setIdealCustomTitleWidth:) float _idealCustomTitleWidth; // @synthesize _idealCustomTitleWidth=__idealCustomTitleWidth;
@property(nonatomic) float _titleViewWidthForAnimations; // @synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations;
@property(nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned int _rightFlexibleSpaceCount; // @synthesize _rightFlexibleSpaceCount;
@property(nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned int _leftFlexibleSpaceCount; // @synthesize _leftFlexibleSpaceCount;
@property(copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList; // @synthesize _rightItemSpaceList;
@property(copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList; // @synthesize _leftItemSpaceList;
@property(nonatomic, setter=_setIndependentBarStyle:) int _independentBarStyle; // @synthesize _independentBarStyle;
@property(nonatomic, getter=_isBarStyleIndependent, setter=_setBarStyleIndependent:) BOOL _barStyleIndependent; // @synthesize _barStyleIndependent;
@property(copy, nonatomic, setter=_setAbbreviatedBackButtonTitles:) NSArray *_abbreviatedBackButtonTitles; // @synthesize _abbreviatedBackButtonTitles;
@property(copy, nonatomic, setter=_setPendingTitle:) NSString *_pendingTitle; // @synthesize _pendingTitle;
@property(nonatomic, setter=_setFontScaleAdjustment:) float _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
- (id)_independentShadowImage;
- (id)_independentBackgroundImageForBarMetrics:(int)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(int)arg3;
- (id)_firstNonSpaceRightItem;
- (id)_firstNonSpaceLeftItem;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (id)customRightItem;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (id)customLeftItem;
- (void)setCustomLeftItem:(id)arg1;
- (id)customTitleView;
- (void)setCustomTitleView:(id)arg1;
- (id)_titleView;
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1;
@property(nonatomic) BOOL leftItemsSupplementBackButton;
- (id)_leftBarButtonItems;
- (id)_rightBarButtonItems;
@property(copy, nonatomic) NSArray *rightBarButtonItems;
@property(copy, nonatomic) NSArray *leftBarButtonItems;
- (void)setCustomRightView:(id)arg1;
- (id)customRightView;
- (void)setCustomLeftView:(id)arg1;
- (id)customLeftView;
- (void)set_customRightViews:(id)arg1;
- (void)set_customLeftViews:(id)arg1;
- (void)set_leftBarButtonItems:(id)arg1;
- (void)set_rightBarButtonItems:(id)arg1;
- (void)set_customLeftView:(id)arg1;
- (void)set_customRightView:(id)arg1;
- (void)set_rightBarButtonItem:(id)arg1;
- (void)set_leftBarButtonItem:(id)arg1;
- (id)_buttonForBackButtonIndicator;
- (BOOL)_wantsBackButtonIndicator;
- (BOOL)_leftItemsWantBackButton;
@property(nonatomic) BOOL hidesBackButton;
- (void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
@property(copy, nonatomic) NSString *prompt;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned int)arg1 withView:(id)arg2 left:(BOOL)arg3;
- (void)_removeBarButtonItemViews;
- (void)setContext:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;
- (id)currentBackButtonTitle;
- (void)setBackButtonTitle:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setNavigationBar:(id)arg1;
- (void)_setBackButtonPressed:(BOOL)arg1;
@property(readonly, nonatomic) NSMutableDictionary *_backgroundImages; // @synthesize _backgroundImages;
- (id)_firstNonSpaceItemInList:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (id)_customRightView;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (id)_customLeftView;
- (void)_setCustomLeftRightView:(id)arg1 left:(BOOL)arg2;
- (id)_customRightViewsCreating:(BOOL)arg1;
- (id)_customRightViewCreating:(BOOL)arg1;
- (id)_customLeftViewCreating:(BOOL)arg1;
- (id)_customLeftViewsCreating:(BOOL)arg1;
- (BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)_rightBarButtonItem;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)_leftBarButtonItem;
- (void)updateNavigationBarButtonsAnimated:(BOOL)arg1;
- (void)_updateBarItemOwnersTo:(id)arg1;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomRightView:(id)arg1;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)_setLeftBarButtonItem:(id)arg1;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_customRightViews;
- (id)_customLeftViews;
- (id)backButtonTitle;
- (void)_removeBackButtonView;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(int)arg2;
- (id)backButtonView;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2 matchBarButtonItemAnimationDuration:(BOOL)arg3;
- (void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_addDefaultTitleViewToNavigationBarIfNecessary;
- (void)_freezeCurrentTitleView;
- (void)_cleanupFrozenTitleView;
- (id)_defaultTitleView;
- (void)_setRightBarButtonItems:(id)arg1;
- (void)_setLeftBarButtonItems:(id)arg1;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)_removeTitleAndButtonViews;
- (id)initWithTitle:(id)arg1;
- (id)existingBackButtonView;
- (void)setTag:(int)arg1;
- (int)tag;
- (id)context;
- (id)_automationID;
@property(copy, nonatomic) NSString *title;
- (id)navigationBar;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

