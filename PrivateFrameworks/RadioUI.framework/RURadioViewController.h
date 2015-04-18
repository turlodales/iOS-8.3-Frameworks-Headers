//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUDataSourceViewController.h"

#import "MPUMiniPlayerParticipant.h"
#import "MPUTextDrawingCacheInvalidationObserver.h"
#import "RUCreateStationViewControllerDelegate.h"
#import "RUEditStationsViewControllerDelegate.h"
#import "RUHistoryViewControllerDelegate.h"
#import "RURadioCollectionViewDelegate.h"
#import "RUSearchViewControllerDelegate.h"
#import "RUSignInViewControllerDelegate.h"
#import "RUStationActionsViewControllerDelegate.h"
#import "RUStationTreeViewControllerDelegate.h"
#import "RUTermsViewControllerDelegate.h"
#import "RUWelcomeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class MPUBorderDrawingCache, MPUTextButton, NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_source>, NSString, RUMiniPlayerCoordinator, RUPlaceholderView, RURadioCollectionView, RURadioPlaybackCoordinator, RUSearchViewController, RUSignInViewController, RUTermsViewController, RUWelcomeViewController, RadioStation, UIAlertView, UILabel, UIScrollView, UISearchDisplayController, UIView;

@interface RURadioViewController : MPUDataSourceViewController <MPUMiniPlayerParticipant, MPUTextDrawingCacheInvalidationObserver, RUEditStationsViewControllerDelegate, RUCreateStationViewControllerDelegate, RUHistoryViewControllerDelegate, RURadioCollectionViewDelegate, RUSearchViewControllerDelegate, RUSignInViewControllerDelegate, RUStationActionsViewControllerDelegate, RUStationTreeViewControllerDelegate, RUTermsViewControllerDelegate, RUWelcomeViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *_authenticationResponseHandlers;
    NSMapTable *_cachedStationArtworkCollections;
    CDUnknownBlockType _deferredDeselectCompletionHandler;
    int _deselectDeferralCount;
    NSMapTable *_dispatchSourceImpressionTimersByStation;
    MPUTextButton *_editButton;
    NSArray *_featuredStations;
    RURadioCollectionView *_featuredStationsCollectionView;
    UILabel *_featuredStationsLabel;
    UIAlertView *_freeloaderAlertView;
    BOOL _hasEverReceivedWillAppear;
    BOOL _hasShownFeaturedSlideIn;
    NSObject<OS_dispatch_source> *_heartbeatInvalidTimerSource;
    double _highlightedItemTimestamp;
    NSObject<OS_dispatch_group> *_initialArtworkLoadGroup;
    BOOL _isAllowedToPreHeatTextDrawingCaches;
    BOOL _isFeaturedStationSlideInProgress;
    BOOL _isVisible;
    NSArray *_myStations;
    RURadioCollectionView *_myStationsCollectionView;
    float _myStationsCollectionViewVerticalOffset;
    UILabel *_myStationsLabel;
    MPUTextButton *_newButton;
    NSMutableArray *_optInCompletionHandlers;
    RUPlaceholderView *_placeholderView;
    RadioStation *_prospectiveStation;
    UIScrollView *_scrollView;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    MPUTextButton *_seeAllButton;
    BOOL _shouldScrollSearchBar;
    BOOL _shouldShowSeeAllButton;
    RUSignInViewController *_signInViewController;
    UIView *_snapshotView;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    RUTermsViewController *_termsViewController;
    RUWelcomeViewController *_welcomeViewController;
    RUMiniPlayerCoordinator *_miniPlayerCoordinator;
    RURadioPlaybackCoordinator *_playbackCoordinator;
    id <RURadioViewControllerDelegate> _delegate;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void)_editAction:(id)arg1;
@property(retain, nonatomic) RUMiniPlayerCoordinator *miniPlayerCoordinator; // @synthesize miniPlayerCoordinator=_miniPlayerCoordinator;
- (BOOL)MPH_supportsCoverFlow;
- (void)welcomeViewController:(id)arg1 didDismissFailureAlert:(id)arg2;
- (void)welcomeViewController:(id)arg1 willDisplayFailureAlert:(id)arg2;
- (void)welcomeViewControllerDidReceiveServiceUnavailable:(id)arg1;
- (void)welcomeViewControllerDidOptIn:(id)arg1;
- (void)radioCollectionViewDidChangeContentSize:(id)arg1;
- (void)createStationViewControllerDidFinish:(id)arg1;
- (void)createStationViewController:(id)arg1 didSelectStation:(id)arg2;
- (BOOL)MPU_beginPlaybackForVisibleContent;
- (id)MPU_prospectivePlaybackInformation;
- (id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(struct CGPoint)arg2;
- (void)_historyAction:(id)arg1;
- (void)_authenticateForActiveAccountWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)scrollStationToVisible:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_completeStationAdditionTransactionWithContext:(id)arg1 stationDidExistBeforeAdding:(BOOL)arg2;
- (void)_seeAllButtonAction:(id)arg1;
- (id)_visibleFeaturedStations;
- (struct UIOffset)_stationsCollectionViewInsetToAccomodateStackItemsWithAttributes:(CDStruct_59eee070)arg1;
- (struct CGSize)_rootViewSizeForCollectionView:(id)arg1;
- (void)_createPlaceholderViewIfNeeded;
- (BOOL)_isNetworkTypeAllowed:(int)arg1;
- (void)_startHeartbeatInvalidTimer;
- (void)_updateVisibleCellsNowPlayingStates;
- (void)_scrollToAddedStationWithContext:(id)arg1 stationDidExistBeforeAdding:(BOOL)arg2;
- (void)attemptOptInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareToAddStation;
- (Class)_nowPlayingViewControllerClass;
- (void)_playbackCoordinatorStationDidChangeNotification:(id)arg1;
- (void)_layoutScrollViews;
- (id)_placeholderStationArtworkImage;
- (BOOL)_isStationNowPlaying:(id)arg1;
- (id)_addStationTileImage;
- (id)_subscriptionSummaryForStation:(id)arg1;
- (BOOL)_isNoStack;
- (void)_displayServiceUnavailable;
- (struct CGRect)_searchBarSearchingFrame;
- (void)addStationWithDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeAdditionOfStationWithContext:(id)arg1 animated:(BOOL)arg2;
- (void)_addStationWithDictionary:(id)arg1 fromViewController:(id)arg2;
- (void)_preHeatTextDrawingCacheForSubscriptionSummariesOfMyStations;
- (void)_preHeatTextDrawingCacheForNamesOfMyStations;
- (void)_preHeatTextDrawingCacheForNamesOfFeaturedStations;
- (void)_attemptToPlayStation:(id)arg1 withPrefixItem:(id)arg2 keepPlayingCurrentItemIfPossible:(BOOL)arg3;
- (void)_reloadImpressionTimersForVisibleStations;
- (void)_showWelcomeViewControllerIfNeeded;
- (void)_updateZOrderingForCollectionView:(id)arg1;
- (void)_layoutCell:(id)arg1;
- (void)_preHeatTextDrawingCaches;
- (void)_refreshFeaturedStations;
- (void)_synchronizeWithService;
- (void)_reloadSeeAllButtonAnimated:(BOOL)arg1;
- (void)_updateViewForNetworkType:(int)arg1;
- (void)_updateSearchBarFrameForced:(BOOL)arg1;
- (struct UIEdgeInsets)_searchBarContentInset;
- (void)_newAction:(id)arg1;
- (void)_layoutRadioView;
- (id)_createBackdropBackgroundView;
- (void)_setIsVisible:(BOOL)arg1;
- (void)_updateScrollViewHiddenState;
- (void)_cancelHeartbeatInvalidTimer;
- (void)_updateForChangedStoreBag:(id)arg1;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_heartbeatDidChangeNotification:(id)arg1;
@property(retain, nonatomic) RURadioPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
- (void)termsViewController:(id)arg1 didAcceptTerms:(BOOL)arg2;
- (void)editStationsViewControllerDidFinish:(id)arg1;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)historyViewControllerDidFinish:(id)arg1;
- (id)_searchDisplayController;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)stationTreeViewController:(id)arg1 didSelectStationTreeNode:(id)arg2;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)_updateBarButtonItems;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) __weak id <RURadioViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (void)_doneAction:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
