//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "UIDimmingViewDelegate.h"
#import "UIGestureRecognizerDelegatePrivate.h"

@class NSArray, NSString, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIView, UIViewController, _UIPopoverLayoutInfo, _UIPopoverView;

@interface UIPopoverPresentationController : UIPresentationController <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    UIView *_layoutConstraintView;
    struct CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned int _currentArrowDirection;
    int _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize _popoverContentSize;
    struct CGRect _targetRectInContainerView;
    struct CGRect _embeddedTargetRect;
    int _popoverControllerStyle;
    BOOL _ignoresKeyboardNotifications;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned int _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    BOOL _isLayoutDisabled;
    BOOL _useSourceViewBoundsAsSourceRect;
    UIView *_presentingView;
    unsigned int _presentationEdge;
    int _presentationDirection;
    int _presentationState;
    BOOL _didPresentInActiveSequence;
    unsigned int _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    CDStruct_4a475a17 _popoverControllerFlags;
    BOOL _isDismissingBecauseDimmingViewTapped;
    BOOL _allowResizePastTargetRect;
    BOOL _dismissesOnRotation;
    BOOL _showsTargetRect;
    BOOL _showsOrientationMarker;
    BOOL _showsPresentationArea;
    BOOL _retainsSelfWhilePresented;
    BOOL __centersPopoverIfSourceViewNotSet;
    BOOL __shouldHideArrow;
    unsigned int _permittedArrowDirections;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    unsigned int _popoverArrowDirection;
    float __dimmingViewTopEdgeInset;
    struct UIEdgeInsets _popoverLayoutMargins;
    struct CGRect _sourceRect;
}

+ (BOOL)_alwaysAllowPopoverPresentations;
+ (BOOL)_forceAttemptsToAvoidKeyboard;
+ (Class)_popoverViewClass;
+ (BOOL)_showTargetRectPref;
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)arg1 andContentViewController:(id)arg2;
+ (void)_setAlwaysAllowPopoverPresentations:(BOOL)arg1;
@property(nonatomic, getter=_shouldHideArrow, setter=_setShouldHideArrow:) BOOL _shouldHideArrow; // @synthesize _shouldHideArrow=__shouldHideArrow;
@property(nonatomic, getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:) BOOL _centersPopoverIfSourceViewNotSet; // @synthesize _centersPopoverIfSourceViewNotSet=__centersPopoverIfSourceViewNotSet;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (struct CGRect)_sourceRect;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (id)_sourceView;
- (id)_popoverHostingWindow;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned int popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property(nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) unsigned int presentationEdge; // @synthesize presentationEdge=_presentationEdge;
@property(nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // @synthesize preferredLayoutInfo=_preferredLayoutInfo;
@property(nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented; // @synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented;
@property(nonatomic) BOOL showsPresentationArea; // @synthesize showsPresentationArea=_showsPresentationArea;
@property(nonatomic) BOOL showsOrientationMarker; // @synthesize showsOrientationMarker=_showsOrientationMarker;
@property(nonatomic) BOOL showsTargetRect; // @synthesize showsTargetRect=_showsTargetRect;
@property(nonatomic) BOOL dismissesOnRotation; // @synthesize dismissesOnRotation=_dismissesOnRotation;
@property(nonatomic) BOOL allowResizePastTargetRect; // @synthesize allowResizePastTargetRect=_allowResizePastTargetRect;
@property(retain, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications; // @dynamic _ignoresKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(int)arg2 animated:(BOOL)arg3;
- (void)setPopoverContentSize:(struct CGSize)arg1;
- (struct CGSize)_currentPopoverContentSize;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_invalidateLayoutInfo;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (BOOL)_attemptsToAvoidKeyboard;
- (float)_dismissalAnimationDuration;
- (void)_stopWatchingForNotifications;
- (void)_setPopoverView:(id)arg1;
- (void)_setSplitParentController:(id)arg1;
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (struct CGSize)popoverContentSize;
@property(retain, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
- (void)_startWatchingForScrollViewNotifications;
- (BOOL)isPresentingOrDismissing;
- (struct CGPoint)_centerPointForScale:(float)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;
- (Class)_defaultChromeViewClass;
- (void)_resetSlideTransitionCount;
- (void)_postludeForDismissal;
- (int)_presentationState;
- (CDUnknownBlockType)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1;
- (void)_setPresentationState:(int)arg1;
- (void)_incrementSlideTransitionCount:(BOOL)arg1;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
@property(nonatomic) struct UIEdgeInsets popoverLayoutMargins; // @synthesize popoverLayoutMargins=_popoverLayoutMargins;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)_isPresenting;
- (float)_presentationAnimationDuration;
- (id)_layoutInfoForCurrentKeyboardState;
- (void)_setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
@property(nonatomic, setter=_setDimmingViewTopEdgeInset:) float _dimmingViewTopEdgeInset; // @synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset;
- (void)_setPopoverBackgroundStyle:(int)arg1;
- (unsigned int)_slideTransitionCount;
- (void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_setGesturesEnabled:(BOOL)arg1;
- (void)_setManagingSplitViewController:(id)arg1;
@property(readonly, nonatomic) unsigned int arrowDirection;
- (void)dimmingViewWasTapped:(id)arg1;
@property(copy, nonatomic) NSArray *passthroughViews;
@property(nonatomic) unsigned int permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (id)_splitParentController;
- (id)_dimmingView;
- (BOOL)_isShimmingPopoverControllerPresentation;
- (BOOL)isPopoverVisible;
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;
- (id)popoverView;
- (int)_popoverBackgroundStyle;
- (void)_containedViewControllerModalStateChanged;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(BOOL)arg2;
- (BOOL)_embedsInView;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (BOOL)_forcesPreferredAnimationControllers;
- (struct UIEdgeInsets)_baseContentInsets;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldChangeStatusBarViewController;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (int)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (void)_transitionToWillBegin;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToDidEnd;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (id)presentedView;
- (id)_managingSplitViewController;
- (BOOL)_shouldOccludeDuringPresentation;
- (id)_passthroughViews;
- (BOOL)_isDismissing;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (id)_presentationView;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (int)_popoverControllerStyle;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (int)presentationStyle;
- (id)init;
@property(copy, nonatomic) UIColor *backgroundColor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <UIPopoverPresentationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

