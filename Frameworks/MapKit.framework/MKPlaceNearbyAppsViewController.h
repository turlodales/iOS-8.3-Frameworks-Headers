//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MKPlaceViewNearbyAppsCellDelegate.h"
#import "MKStackingViewControllerPreferredSizeUse.h"

@class NSArray, NSString;

@interface MKPlaceNearbyAppsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKPlaceViewNearbyAppsCellDelegate>
{
    id <MKPlaceNearbyAppsViewControllerDelegate> _nearbyAppsDelegate;
    NSArray *_storeItems;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)init;
- (void)dealloc;
@property(nonatomic) __weak id <MKPlaceNearbyAppsViewControllerDelegate> nearbyAppsDelegate; // @synthesize nearbyAppsDelegate=_nearbyAppsDelegate;
- (void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
@property(retain, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
@property(readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;
- (void)contentSizeDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

