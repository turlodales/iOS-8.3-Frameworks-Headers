//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "PKPrinterBrowserDelegate.h"

@class NSArray, NSMutableArray, NSString, PKPrinter, PKPrinterBrowser, UIPrinterSearchingView;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate>
{
    id <UIPrinterBrowserOwner> _ownerPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_preferredPrinters;
    NSMutableArray *_otherPrinters;
    NSMutableArray *_filteredOutPrinters;
    NSArray *_lastUsedPrinters;
    PKPrinter *_lockedPrinter;
    BOOL _loaded;
    UIPrinterSearchingView *_searchingView;
    BOOL _clearCurrentPrinter;
    BOOL _shouldFilterPrinters;
    float _maximumPopoverHeight;
}

@property float maximumPopoverHeight; // @synthesize maximumPopoverHeight=_maximumPopoverHeight;
- (void)selectPrinter:(id)arg1;
- (void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2;
- (void)addPrinter:(id)arg1 moreComing:(BOOL)arg2;
- (id)printerAtIndexPath:(id)arg1;
- (void)updateSearching;
- (void)startPrinterBrowser;
- (void)adjustPopoverSize;
- (void)willEnterForeground;
- (void)stopPrinterBrowser;
- (void)showCancelButton;
- (id)initWithOwnerViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

