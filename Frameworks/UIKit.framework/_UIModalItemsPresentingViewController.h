//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIView, UIWindow, _UIModalItem;

@interface _UIModalItemsPresentingViewController : UIViewController
{
    NSMutableArray *_items;
    NSMutableArray *_itemsViews;
    NSMutableArray *_occludedWindows;
    UIView *_backgroundView;
    _UIModalItem *_currentItem;
    UIView *_currentItemView;
    UIView *_dimmingView;
    struct CGRect _keyboardFrame;
    float _keyboardHeight;
    BOOL _isInTransition;
    _UIModalItem *_itemBeingPresented;
    _UIModalItem *_itemBeingDismissed;
    UIWindow *_rotationDelegate;
    CDUnknownBlockType _itemsTransitionCompletion;
}

@property(nonatomic) BOOL isInTransition; // @synthesize isInTransition=_isInTransition;
- (void)_updateItem:(id)arg1 animated:(BOOL)arg2;
- (void)_showItem:(id)arg1 animated:(BOOL)arg2 undimmSpotlight:(BOOL)arg3;
- (void)_showDimmingView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_hide;
- (void)_showDimmingViewAnimated:(BOOL)arg1;
- (void)_hideDimmingViewAnimated:(BOOL)arg1;
- (void)_enqueueAdditionalTransitionCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissMe:(id)arg1 animated:(BOOL)arg2;
- (void)hideModalItem:(id)arg1 animated:(BOOL)arg2;
- (void)displayModalItem:(id)arg1 animated:(BOOL)arg2;
- (void)_hideItem:(id)arg1 animated:(BOOL)arg2;
- (id)initWithModalItemType:(int)arg1;
@property(retain, nonatomic) _UIModalItem *currentItem; // @synthesize currentItem=_currentItem;
- (void)_hideAnimated:(BOOL)arg1 dimmSpotlight:(BOOL)arg2;
- (void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4 keepDimmingView:(BOOL)arg5;
- (void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyPresentingAnimationStartingStateForModalItem:(id)arg1 view:(id)arg2;
@property(copy) CDUnknownBlockType itemsTransitionCompletion; // @synthesize itemsTransitionCompletion=_itemsTransitionCompletion;
- (void)_resaturateUI;
- (void)_applyPresentingViewMetricsStateForModalItem:(id)arg1;
- (void)_desaturateUI;
- (id)_createViewForItem:(id)arg1;
- (void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(BOOL)arg3;
@property(retain, nonatomic) _UIModalItem *itemBeingDismissed; // @synthesize itemBeingDismissed=_itemBeingDismissed;
- (void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(BOOL)arg3;
@property(retain, nonatomic) _UIModalItem *itemBeingPresented; // @synthesize itemBeingPresented=_itemBeingPresented;
- (void)keyboardChanged:(id)arg1;
- (void)keyfirstResponderChanged:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
@property(retain, nonatomic) UIWindow *rotationDelegate; // @synthesize rotationDelegate=_rotationDelegate;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillLayoutSubviews;
- (BOOL)wantsFullScreenLayout;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end

