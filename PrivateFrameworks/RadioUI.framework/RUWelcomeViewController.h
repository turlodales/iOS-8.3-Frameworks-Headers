//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUSignInViewControllerDelegate.h"
#import "RUTermsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CADisplayLink, MPUBorderDrawingCache, NSDate, NSMutableArray, NSString, RUSignInViewController, RUTermsViewController, SKUICircleProgressIndicator, UIAlertView, UIButton, UICollectionView, UILabel, _RUWelcomeTicker;

@interface RUWelcomeViewController : UIViewController <RUSignInViewControllerDelegate, RUTermsViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicatorView;
    int _applicationState;
    NSDate *_autoRetryMinimumDate;
    CADisplayLink *_displayLink;
    UIAlertView *_failedAlertView;
    BOOL _isOptingIn;
    BOOL _isScrollerStopped;
    BOOL _isVisible;
    double _lastTimestamp;
    UIButton *_learnMoreButton;
    UILabel *_loadingLabel;
    NSMutableArray *_optInCompletionHandlers;
    UICollectionView *_scrollingStackCollectionView;
    UIButton *_signInButton;
    RUSignInViewController *_signInViewController;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    RUTermsViewController *_termsViewController;
    _RUWelcomeTicker *_ticker;
    UILabel *_titleLabel;
    BOOL _displayingLoading;
    id <RUWelcomeViewControllerDelegate> _delegate;
}

- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_signInAction:(id)arg1;
- (void)_checkAcceptedTermsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_optInWithActiveAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_presentSignInViewController;
- (BOOL)_canAutomaticallyOptIn;
- (id)_stackImageNames;
- (void)_completeWithStatus:(int)arg1 didOptIn:(BOOL)arg2 retryInterval:(double)arg3;
- (void)_createEndScrollingAnimation;
- (void)_scrollWithCurrentTimestemp:(double)arg1;
- (void)_displayLinkAction:(id)arg1;
- (void)_attemptOptForReason:(int)arg1 allowAuthentication:(BOOL)arg2;
- (void)_updateSignInButtonTitle;
- (BOOL)_allowsSignIn;
- (void)_learnMoreAction:(id)arg1;
- (void)_updateDisplayLinkStateAnimated:(BOOL)arg1;
- (void)_layoutForOrientation:(int)arg1;
- (void)_allowsAccountModificationDidChangeNotification:(id)arg1;
- (id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(struct CGPoint)arg2;
- (void)attemptOptInWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isDisplayingLoading) BOOL displayingLoading; // @synthesize displayingLoading=_displayingLoading;
- (void)termsViewController:(id)arg1 didAcceptTerms:(BOOL)arg2;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) __weak id <RUWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

