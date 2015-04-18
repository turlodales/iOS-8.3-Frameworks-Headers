//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import "ISURLOperationDelegate.h"
#import "SKUITabBarItemRootViewController.h"
#import "SUMenuViewControllerDelegate.h"
#import "SUPreviewOverlayContainer.h"
#import "UIPopoverControllerDelegate.h"

@class ISURLRequestPerformance, NSString, SSAuthenticationContext, SSMutableURLRequestProperties, SSURLRequestProperties, SUNavigationMenuViewController, SUPageSectionGroup, SUSearchFieldController, SUSegmentedControl, SUStorePageProtocol, UIPopoverController, _UIBackdropView;

@interface SUStorePageViewController : SUViewController <SKUITabBarItemRootViewController, SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate>
{
    SUViewController *_activeChildViewController;
    struct __CFSet *_allowedInterfaceOrientations;
    double _expirationTime;
    int _pageType;
    SUViewController *_pendingChildViewController;
    NSString *_scriptUserInfo;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    SUSearchFieldController *_searchFieldController;
    BOOL _canMoveToOverlay;
    BOOL _externalRequest;
    BOOL _loadingForSectionChange;
    BOOL _loadsWhenHidden;
    BOOL _reloadOnAppear;
    BOOL _reloadsWhenCacheExpired;
    SSAuthenticationContext *_authContext;
    SSMutableURLRequestProperties *_urlRequestProperties;
    BOOL _needsAuthentication;
    int _activeSectionIndex;
    SUPageSectionGroup *_sectionsGroup;
    SUSegmentedControl *_segmentedControl;
    _UIBackdropView *_backdropView;
    id <SUStorePageViewControllerDelegate> _delegate;
    BOOL _lastLoadDidFail;
    CDUnknownBlockType _loadBlock;
    ISURLRequestPerformance *_performanceMetrics;
    BOOL _useWebViewFastPath;
    BOOL _shouldAdjustContentOffsets;
}

@property(readonly, nonatomic) SUSegmentedControl *sectionSegmentedControl; // @synthesize sectionSegmentedControl=_segmentedControl;
@property(readonly, nonatomic) SUPageSectionGroup *sectionGroup; // @synthesize sectionGroup=_sectionsGroup;
@property(readonly, nonatomic) SUViewController *activeChildViewController; // @synthesize activeChildViewController=_activeChildViewController;
- (id)_activeChildViewController;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1;
- (void)handleStoreFailureWithError:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (BOOL)showPreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)hidePreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)isShowingPreviewOverlay;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didTapButton:(id)arg2;
- (id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(int)arg2 withButtonItem:(id)arg3;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (BOOL)_isInTransientViewController;
- (void)_navigationMenuButtonAction:(id)arg1;
- (void)_setRightNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_navigationButtonAction:(id)arg1;
- (void)_setSegmentedControl:(id)arg1;
- (void)_reloadNavigationMenus;
- (void)_reloadNavigationButtons;
@property(readonly, nonatomic, getter=_isCacheExpired) BOOL _cacheExpired;
@property(nonatomic, getter=_reloadsWhenCacheExpired, setter=_setReloadsWhenCacheExpired:) BOOL _reloadsWhenCacheExpired; // @synthesize _reloadsWhenCacheExpired;
- (BOOL)pushStorePage:(id)arg1 withTarget:(int)arg2 animated:(BOOL)arg3;
@property(nonatomic, getter=isExternalRequest) BOOL externalRequest; // @synthesize externalRequest=_externalRequest;
- (void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2;
- (void)_finishSuccessfulLoad;
- (void)enqueueFetchOperation;
- (BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (BOOL)_shouldDisplayControlsInNavigationBar;
- (void)_setHeaderView:(id)arg1;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (void)_finishHandlingFailure;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (void)_performActionForProtocolButton:(id)arg1;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(BOOL)arg2;
- (void)_tearDownNavigationMenu;
- (void)_dismissNavigationMenuViewController;
- (void)_reloadContentInsets;
- (BOOL)_sectionIsNetworkConstrained;
- (BOOL)_shouldFetchAutomatically;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (void)_repositionForChildViewController:(id)arg1;
@property(nonatomic) BOOL canMoveToOverlay; // @synthesize canMoveToOverlay=_canMoveToOverlay;
- (void)_reloadNavigationBar;
- (void)_verifyStorePageProtocol:(id)arg1;
- (void)_applyPropertiesToViewController:(id)arg1;
- (void)_displaySegmentedControl:(id)arg1;
- (id)_newSegmentedControlWithItems:(id)arg1;
@property(copy, nonatomic) NSString *scriptUserInfo; // @synthesize scriptUserInfo=_scriptUserInfo;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_activePageSection;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (struct CGRect)_frameForActiveViewController;
- (void)_reloadBackgroundViewProperties;
- (void)showPlaceholderViewController;
- (void)_setActiveChildViewController:(id)arg1 shouldTearDown:(BOOL)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (double)_expirationTime;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)_reloadForAppearance:(BOOL)arg1;
- (BOOL)_shouldReloadForAppearance;
- (void)_showPlaceholderViewControllerWithTearDown:(BOOL)arg1;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadSectionButtons;
- (BOOL)viewIsReady;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
@property(nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties;
- (void)_renderStorePage:(id)arg1 withType:(int)arg2 viewController:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_finishWebViewLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id *)arg3;
- (id)newFetchOperation;
- (void)_fetchPage:(BOOL)arg1;
- (void)_handleFailureWithError:(id)arg1;
@property(readonly, nonatomic) BOOL canBeResolved;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_scriptEventNotification:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (id)copyScriptViewController;
- (BOOL)shouldAdjustContentOffsets;
- (void)invalidateForMemoryPurge;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)newRotationController;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)iTunesStoreUI_searchFieldController;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)copyDefaultScriptProperties;
- (id)urlBagKey;
@property(retain, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (id)copyArchivableContext;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
@property(nonatomic) BOOL loadsWhenHidden; // @synthesize loadsWhenHidden=_loadsWhenHidden;
- (void)showExternalURL:(id)arg1;
- (void)setShouldAdjustContentOffsets:(BOOL)arg1;
- (void)_sectionControlAction:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
@property(readonly, nonatomic) SUSearchFieldController *searchFieldController; // @synthesize searchFieldController=_searchFieldController;
- (id)navigationItemForScriptInterface;
- (void)handleFailureWithError:(id)arg1;
- (id)newPlaceholderViewController;
- (id)initWithTabBarItem:(id)arg1;
- (BOOL)reloadWithURLRequestProperties:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 ofType:(int)arg2 forURL:(id)arg3;
- (void)resetNavigationItem:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)displayedURL;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (double)defaultPNGExpirationTime;
- (void)setSection:(id)arg1;
- (BOOL)isLoaded;
- (void)popoverControllerDidDismissPopover:(id)arg1;
@property(readonly, nonatomic) struct CGRect documentBounds;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)invalidate;
@property(nonatomic) id <SUStorePageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reload;
- (id)init;
- (void)dealloc;
- (id)URLRequest;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

