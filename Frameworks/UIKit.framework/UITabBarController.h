//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITabBarDelegate.h"

@class NSArray, NSMutableArray, NSString, UIMoreNavigationController, UINavigationController, UITabBar, UITapGestureRecognizer, UIView;

@interface UITabBarController : UIViewController <UIGestureRecognizerDelegate, UITabBarDelegate, NSCoding>
{
    UITabBar *_tabBar;
    UIView *_containerView;
    UIView *_viewControllerTransitionView;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UIMoreNavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    id <UITabBarControllerDelegate><UITabBarControllerDelegate_Private> _delegate;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    unsigned int _customMaxItems;
    unsigned int _defaultMaxItems;
    int _tabBarPosition;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    struct {
        unsigned int isShowingMoreItem:1;
        unsigned int needsToRebuildItems:1;
        unsigned int isBarHidden:1;
        unsigned int editButtonOnLeft:1;
        unsigned int barLayoutIsValid:1;
        unsigned int reselectTab:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int preferTabBarFocused:1;
    } _tabBarControllerFlags;
    NSMutableArray *_moreChildViewControllers;
    UIView *_accessoryView;
    id <UIViewControllerAnimatedTransitioning> __animator;
    id <UIViewControllerInteractiveTransitioning> __interactor;
    NSString *__backdropGroupName;
}

+ (Class)_moreNavigationControllerClass;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
- (BOOL)_ignoreUnselectedTabsForStateRestoration;
@property(retain, nonatomic, setter=_setInteractor:) id <UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
@property(nonatomic) NSMutableArray *moreChildViewControllers; // @synthesize moreChildViewControllers=_moreChildViewControllers;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (void)_setMaximumNumberOfItems:(unsigned int)arg1;
- (BOOL)showsEditButtonOnLeft;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (int)_tabBarPosition;
- (void)hideBarWithTransition:(int)arg1;
- (void)tabBarSizingDidChange:(id)arg1;
- (void)beginCustomizingTabBar:(id)arg1;
- (void)setTabBar:(id)arg1;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)arg1;
- (void)revealTabBarSelection;
- (id)_customInteractionControllerForAnimator:(id)arg1;
- (id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4;
- (void)concealTabBarSelection;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (BOOL)_allowsCustomizing;
- (void)_setMoreNavigationControllerRestorationIdentifier;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)allViewControllers;
- (void)_setSelectedViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (BOOL)_allowSelectionWithinMoreList;
@property(copy, nonatomic) NSArray *customizableViewControllers; // @synthesize customizableViewControllers=_customizableViewControllers;
@property(nonatomic) unsigned int selectedIndex;
- (id)_viewControllerForSelectAtIndex:(unsigned int)arg1;
- (id)_existingMoreNavigationController;
- (id)_viewControllersInTabBar;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (id)transientViewController;
@property(readonly, nonatomic) UINavigationController *moreNavigationController;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (void)_tabBarItemClicked:(id)arg1;
- (BOOL)_isTabBarFocused;
- (void)_performSelectGesture:(id)arg1;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_setTabBarPosition:(int)arg1;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (void)_updateLayoutForTraitCollection:(id)arg1;
- (BOOL)_isBarHidden;
- (void)_setTabBarVisualAltitude;
- (void)_prepareTabBar;
- (int)_effectiveTabBarPosition;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg1;
- (void)_layoutContainerView;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
- (id)_wrapperViewForViewController:(id)arg1;
@property(nonatomic) UIViewController *selectedViewController;
- (unsigned int)_effectiveMaxItems;
- (void)__viewWillLayoutSubviews;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)showBarWithTransition:(int)arg1;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (id)_selectedViewControllerInTabBar;
- (void)_layoutViewController:(id)arg1;
- (void)_performBackGesture:(id)arg1;
@property(readonly, nonatomic) UITabBar *tabBar;
@property(retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (struct CGRect)_frameForViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(CDStruct_f39609a0 *)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_allowsAutorotation;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)transitionCoordinator;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (id)_backdropBarGroupName;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_isPresentationContextByDefault;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char *)arg2;
- (void)viewWillAppear:(BOOL)arg1;
@property(retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (id)_transitionView;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
@property(retain, nonatomic, setter=_setAnimator:) id <UIViewControllerAnimatedTransitioning> _animator; // @synthesize _animator=__animator;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (id)preferredFocusedItem;
- (void)setView:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)becomeFirstResponder;
- (id)_deepestUnambiguousResponder;
@property(nonatomic) id <UITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

