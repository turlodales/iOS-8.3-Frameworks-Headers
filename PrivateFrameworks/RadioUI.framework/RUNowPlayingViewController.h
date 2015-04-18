//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUNowPlayingViewController.h"

#import "RUNowPlayingPlaybackControlsViewDelegate.h"
#import "RUStationActionsViewControllerDelegate.h"
#import "RUTrackActionsDelegate.h"
#import "RUTrackDownloadViewDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIModalItemDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class NSString, RUPurchaseAlbumView, RUStationActionsViewController, RUTrackActionsModalItem, RUTrackActionsViewController, RUTrackDownloadView, SKStoreProductViewController, UIPopoverPresentationController, UIView;

@interface RUNowPlayingViewController : MPUNowPlayingViewController <RUNowPlayingPlaybackControlsViewDelegate, RUStationActionsViewControllerDelegate, RUTrackActionsDelegate, RUTrackDownloadViewDelegate, SKStoreProductViewControllerDelegate, UIModalItemDelegate, UIPopoverPresentationControllerDelegate>
{
    UIView *_infoButtonContainerView;
    BOOL _isVisibleForVisuallyEngagedAds;
    SKStoreProductViewController *_productViewController;
    RUPurchaseAlbumView *_purchaseAlbumView;
    UIPopoverPresentationController *_stationActionsPresentationController;
    UIView *_stationActionsPresentationView;
    RUStationActionsViewController *_stationActionsViewController;
    RUTrackActionsModalItem *_trackActionsModalItem;
    UIPopoverPresentationController *_trackActionsPresentationController;
    RUTrackActionsViewController *_trackActionsViewController;
    RUTrackDownloadView *_trackDownloadView;
    BOOL _visuallyEngagedAds;
    id <RUNowPlayingViewControllerDelegate> _delegate;
}

- (void)productViewControllerDidFinish:(id)arg1;
- (BOOL)_shouldAbortUpdatingContentView:(id)arg1 forItem:(id)arg2;
- (Class)_playbackControlsViewClass;
- (BOOL)_makeRadioVisible;
- (void)_handleTrackAction:(int)arg1 withItem:(id)arg2;
- (void)_purchaseAlbumButtonAction:(id)arg1;
- (BOOL)_updateItemRelatedStateForChangeToItem:(id)arg1 animated:(BOOL)arg2;
- (int)_transitionDirectionForChangeFromItem:(id)arg1 toItem:(id)arg2;
- (id)_titleTextForItem:(id)arg1;
- (BOOL)_shouldUpdateContentView:(id)arg1 forBufferingState:(unsigned int)arg2;
- (void)_itemTitlesDidChange;
- (BOOL)_isActionForHandlingDoubleTapOnArtworkImageViewEnabled;
- (BOOL)_itemSupportsRatings:(id)arg1;
- (void)_scaleAndSetModalItemArtworkImageToCurrentArtworkImage;
- (void)_didUpdateArtworkImage;
- (void)_videoAdTapGestureRecognizerAction:(id)arg1;
- (id)_createContentViewForItem:(id)arg1 contentViewController:(id *)arg2;
- (struct CGSize)_contentViewSizeForItem:(id)arg1 withContentView:(id)arg2 orientation:(int)arg3;
- (id)_albumTextForItem:(id)arg1;
- (void)MPU_prepareForNavigationController:(id)arg1 poppingToViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateVisualEngagementWithItem:(id)arg1;
- (BOOL)_dismissModalViewsAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_itemAlbumStoreIDDidChangeNotification:(id)arg1;
- (void)_itemAlbumBuyButtonInfoDidChangeNotification:(id)arg1;
- (void)_applyAttributesForItem:(id)arg1 toTrackActioningObject:(id)arg2;
- (void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(BOOL)arg3 canShowAlert:(BOOL)arg4;
- (void)_prepareToAddStation;
- (void)_addStationFromItem:(id)arg1 usingArtist:(BOOL)arg2;
- (void)_radioPurchaseAllowedDidChangeNotification:(id)arg1;
- (void)playbackControlsDidTapInfoButton:(id)arg1;
- (void)stationActionsViewController:(id)arg1 didFinishAction:(int)arg2 withObject:(id)arg3 error:(id)arg4;
- (void)stationActionsViewController:(id)arg1 willBeginAction:(int)arg2;
- (void)_adTrackDidFailToLoadNotification:(id)arg1;
- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (void)_updateTitlesInView:(id)arg1 forItem:(id)arg2;
- (id)_artistTextForItem:(id)arg1;
- (void)_infoButtonAction:(id)arg1;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)trackDownloadView:(id)arg1 stateDidChangeToState:(int)arg2;
- (void)modalItem:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) __weak id <RUNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (BOOL)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

