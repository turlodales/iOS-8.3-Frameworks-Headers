//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIRefreshControl, UITableView, UITableViewDataSource, _UIFilteredDataSource;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _tableViewStyle;
    id _keyboardSupport;
    id _staticDataSource;
    struct {
        unsigned int clearsSelectionOnViewWillAppear:1;
        unsigned int insetsApplied:1;
        unsigned int adjustingInsets:1;
    } _tableViewControllerFlags;
    _UIFilteredDataSource *_filteredDataSource;
    int _filteredDataType;
}

@property(retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;
- (void)_setFilteredDataType:(int)arg1;
- (int)_filteredDataType;
@property(retain, nonatomic) UIRefreshControl *refreshControl;
@property(nonatomic) BOOL clearsSelectionOnViewWillAppear;
- (int)_resolvedDataSourceFilterTypeForScreen:(id)arg1;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1;
- (void)_applyDefaultDataSourceToTable:(id)arg1;
- (id)_existingTableView;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
@property(retain, nonatomic) UITableView *tableView;
- (BOOL)_viewControllerWasSelected;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

