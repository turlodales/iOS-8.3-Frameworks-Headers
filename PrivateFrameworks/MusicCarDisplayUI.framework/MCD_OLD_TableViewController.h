//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class MPAVController, MPMediaQuery, UIView;

@interface MCD_OLD_TableViewController : UITableViewController
{
    id <MCDCarDisplayServiceProvider> _serviceProvider;
    MPAVController *_player;
    MPMediaQuery *_query;
    BOOL _viewHasAppeared;
    UIView *_nowPlayingButton;
    BOOL _alwaysShowNavBar;
}

+ (id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3;
+ (id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3;
@property(readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) BOOL alwaysShowNavBar; // @synthesize alwaysShowNavBar=_alwaysShowNavBar;
- (void)_presentNowPlayingViewController;
- (BOOL)hasRowsToDisplay;
@property(nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
- (void)_updateNowPlayingVisibility;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
@property(readonly, nonatomic) id <MCDCarDisplayServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
- (id)dequeueReusableCarDisplayCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (id)preferredFocusedItem;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_itemChanged:(id)arg1;

@end

