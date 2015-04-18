//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpKit/APDNavigationTableViewController.h>

#import "UIGestureRecognizerDelegate.h"

@class APDKVOManager, APDNavigationItem, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIView;

@interface APDTOCViewController : APDNavigationTableViewController <UIGestureRecognizerDelegate>
{
    BOOL _showingHelpInfo;
    NSMutableArray *_openedSections;
    APDKVOManager *_KVOManager;
    UIView *_loadingView;
    UIView *_footerViewSeparatorView;
    UIButton *_copyrightFooterButton;
    UIActivityIndicatorView *_loadingIndicator;
    APDNavigationItem *_pendingOpenItem;
}

@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) APDNavigationItem *pendingOpenItem; // @synthesize pendingOpenItem=_pendingOpenItem;
@property(nonatomic) __weak UIButton *copyrightFooterButton; // @synthesize copyrightFooterButton=_copyrightFooterButton;
@property(nonatomic) __weak UIView *footerViewSeparatorView; // @synthesize footerViewSeparatorView=_footerViewSeparatorView;
- (void)showCopyrightTopic:(id)arg1;
- (void)closeNavigationItem:(id)arg1;
- (int)numberOfVisibleCellsForNavigationItem:(id)arg1;
- (void)appendOpenedChildrenForItem:(id)arg1;
- (void)openNavigationItem:(id)arg1 insertRowsToTableView:(BOOL)arg2;
- (void)onLoadingChanged:(id)arg1;
- (void)onFooterViewLongPress:(id)arg1;
- (void)updateTableViewData;
- (void)updateFooterView;
- (void)showHighlightOnLastSelectedTopic;
- (void)dismissCellHighlight;
- (void)ensureContentInTOC;
- (void)onSectionListChanged:(id)arg1;
@property(nonatomic) __weak UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <APDTOCViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

