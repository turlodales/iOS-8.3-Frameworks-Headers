//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCProfileConnectionObserver.h"
#import "RUStationTrackInfoViewDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPAVItem, NSArray, NSMutableArray, NSString, RUInnerShadowHeaderFooterView, RUStationTrackInfoView, RUStationTuningView, RadioStation, UILabel, UISwitch, UITableView, UITableViewCell;

@interface RUStationActionsViewController : UIViewController <RUStationTrackInfoViewDelegate, MCProfileConnectionObserver, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL _bagShowsExplicitToggle;
    UILabel *_copyrightLabel;
    int _currentAction;
    BOOL _isProfileExplicitContentRestricted;
    UILabel *_navigationTitleLabel;
    BOOL _needsTrackInfoViewHeightReset;
    UISwitch *_playExplicitTracksSwitch;
    NSArray *_playbackQueue;
    RadioStation *_station;
    NSMutableArray *_stationActionGroups;
    UITableViewCell *_stationTuningCell;
    RUStationTuningView *_stationTuningView;
    UITableView *_tableView;
    RUInnerShadowHeaderFooterView *_topShadowView;
    RUStationTrackInfoView *_trackInfoView;
    BOOL _showsDoneButton;
    MPAVItem *_item;
    id <RUStationActionsViewControllerDelegate> _delegate;
}

- (void)productViewControllerDidFinish:(id)arg1;
@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (id)_indexPathForStationAction:(int)arg1;
- (id)initWithStation:(id)arg1 item:(id)arg2 playbackQueue:(id)arg3;
- (void)_addDerivedStationUsingArtist:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_playExplicitToggleAction:(id)arg1;
- (int)_stationActionForIndexPath:(id)arg1;
- (void)_updateIsProfileExplicitContentRestrictedForProfileConnection:(id)arg1;
- (void)_showStoreSheetAction:(id)arg1;
- (void)_updateTableFooterView;
- (void)_layoutTopShadowView;
- (void)_userDefaultExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_updateAvailableActions;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (id)_sectionHeaderTitleLabelFont;
- (id)_newSectionHeaderWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (id)_newShadowViewWithFrame:(struct CGRect)arg1;
- (float)_sectionHeaderHeight;
- (void)_updateViewForHorizontalSizeClassChangeAllowingTableReload:(BOOL)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)trackInfoViewDidTapStoreButton:(id)arg1;
- (void)trackInfoViewDidTapArtwork:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <RUStationActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)_doneAction:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
@property(nonatomic) BOOL showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
