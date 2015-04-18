//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKCodeAcquisitionDelegate.h"
#import "PKGroupsControllerDelegate.h"
#import "PKPassGroupStackViewDatasource.h"
#import "PKPassGroupStackViewDelegate.h"
#import "PKPaymentServiceDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, PKGroupsController, PKPassGroupStackView, PKPaymentService, PKUsageNotificationServer, UIImageView;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKPaymentServiceDelegate, PKCodeAcquisitionDelegate>
{
    UIImageView *_statusBarGradient;
    PKPassGroupStackView *_groupStackView;
    PKGroupsController *_groupsController;
    PKPaymentService *_paymentService;
    unsigned int _modalCardIndex;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    int _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    BOOL _passesAreOutdated;
    BOOL _reloadingPasses;
    BOOL _backgroundMode;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    PKUsageNotificationServer *_usageServer;
    BOOL _welcomeStateEnabled;
    id <PKPassGroupsViewControllerDelegate> _delegate;
}

+ (void)endTrackingAction;
+ (void)beginTrackingAction;
+ (BOOL)isPerformingAction;
- (unsigned int)numberOfGroups;
- (unsigned int)indexOfSeparationGroup;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)paymentDeviceDidEnterField;
- (id)groupAtIndex:(unsigned int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
@property(nonatomic) id <PKPassGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic, getter=isWelcomeStateEnabled) BOOL welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property BOOL passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
- (void)updateRegionSupportIfNecessary;
- (void)terminateFieldDetect;
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)presentGroupTable;
- (void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPaymentSetup;
- (void)presentInitialState;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)cardsChanged:(id)arg1;
- (void)groupStackView:(id)arg1 didTransitionToState:(int)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 transitioningToState:(int)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)groupStackView:(id)arg1 didEndShowingPassView:(id)arg2;
- (void)groupStackView:(id)arg1 didBeginShowingPassView:(id)arg2;
- (BOOL)groupStackViewShouldAllowReordering:(id)arg1;
- (BOOL)passesGrowWhenFlipped;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned int)arg2;
- (BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3 fallbackHandler:(CDUnknownBlockType)arg4;
- (void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentGroupWithIndex:(unsigned int)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_dismissPresentedVCsWithRequirements:(unsigned int)arg1 performAction:(CDUnknownBlockType)arg2;
- (void)updateLockscreenIdleTimer;
- (void)_updateStatusBarGradientOpacity:(BOOL)arg1;
- (void)_passViewedNotificationTimerFired;
- (void)_startPassViewedNotificationTimer;
- (void)_clearPassViewedNotificationTimer;
- (void)allowIdleTimer;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2;
- (void)reloadPasses;
- (void)_applyPresentationState;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_handleApplicationdidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (id)initWithGroupsController:(id)arg1;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned int)arg2;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned int)arg2;
- (void)startPaymentPreflight:(id)arg1;
- (unsigned int)suppressedContent;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAcquirePass:(id)arg2;
- (unsigned int)indexOfGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

