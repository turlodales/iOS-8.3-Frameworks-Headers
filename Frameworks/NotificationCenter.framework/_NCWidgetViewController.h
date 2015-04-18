//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBUISizeObservingViewDelegate.h"
#import "_NCWidgetViewController_Service_IPC.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString, UIView, UIViewController<NCWidgetProviding>, _UIViewControllerTransitionContext;

@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, SBUISizeObservingViewDelegate>
{
    UIViewController<NCWidgetProviding> *_contentProvidingViewController;
    NSString *_widgetIdentifier;
    UIView *_contentView;
    struct UIEdgeInsets _clientMarginInsets;
    float _clientPreferredViewHeight;
    NSMapTable *_activeTransitionContextsByRequestID;
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    id <UIViewControllerAnimatedTransitioning> _transitionController;
    _UIViewControllerTransitionContext *_activeTransitionContext;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    struct {
        unsigned int implementsPerformUpdateWithCompletionHandler:1;
        unsigned int implementsMarginInsets:1;
        unsigned int implementsContentWidthDidChange:1;
    } _contentProvidingViewControllerFlags;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (void)initialize;
+ (void)_reduceTransparencyDidChange:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_willAppearInRemoteViewController;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)dealloc;
@property(retain, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProviding> *contentProvidingViewController; // @synthesize contentProvidingViewController=_contentProvidingViewController;
- (void)_performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_encodeLayerTree:(CDUnknownBlockType)arg1;
- (id)_customAnimator:(BOOL)arg1;
- (id)_transitionContextForRequestIdentifier:(id)arg1;
- (void)_requestPreferredViewHeight:(float)arg1 usingAutolayout:(BOOL)arg2;
- (id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(BOOL)arg2 createIfNecessary:(BOOL)arg3;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (void)_enqueueProxyRequest:(CDUnknownBlockType)arg1;
- (struct CGRect)_sanitizedClientFrameFromHostSize:(struct CGSize)arg1;
- (void)_requestMarginInsets;
- (void)_setContentProvidingViewController:(id)arg1;
- (float)_sanitizedClientContentWidthForProposedHostWidth:(float)arg1;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__requestEncodedLayerTreeWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(id)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(id)arg2;
- (void)__setWidgetIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

