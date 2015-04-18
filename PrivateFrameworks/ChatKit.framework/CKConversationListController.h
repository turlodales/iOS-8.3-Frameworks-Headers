//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKConversationResultsControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CKConversationList, CKConversationSearchResultsController, CKMessagesController, CKScheduledUpdater, NSArray, NSIndexPath, NSString, UIBarButtonItem, UISearchController, UITableView, UIToolbar, UIView;

@interface CKConversationListController : UIViewController <UISearchControllerDelegate, UISearchBarDelegate, CKConversationResultsControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    UITableView *_table;
    NSIndexPath *_previouslySelectedIndexPath;
    UIToolbar *_buttonBar;
    unsigned int _willBeMarkedReadCount;
    unsigned int _isVisible:1;
    unsigned int _willRotate:1;
    CKMessagesController *_messagesController;
    CKConversationList *_conversationList;
    BOOL _isInitialLoad;
    BOOL _isShowingSwipeDeleteConfirmation;
    UIBarButtonItem *_currentEditButtonItem;
    CKScheduledUpdater *_updater;
    UIView *_noMessagesDialogView;
    NSArray *_frozenConversations;
    unsigned int _filteredConversationCount;
    int _filterMode;
    NSArray *_filteredContactsAndSMSConversations;
    NSArray *_filteredJunkConversations;
    float _conversationCellHeight;
    UISearchController *_searchController;
    CKConversationSearchResultsController *_searchResultsController;
}

- (void)scrollToTop;
@property(retain, nonatomic) CKConversationSearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(nonatomic) CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) CKConversationList *conversationList; // @synthesize conversationList=_conversationList;
- (void)selectDefaultConversationAnimated:(BOOL)arg1;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)_groupsChanged:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (unsigned int)_indexOfConverationClosestToDeletedIndex:(unsigned int)arg1;
- (void)_selectConversationAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (unsigned int)_indexOfDefaultConversation;
- (void)_updateSearchTableInsets;
- (void)deleteButtonTappedForIndexPath:(id)arg1;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (void)selectConversationClosestToDeletedIndex:(unsigned int)arg1;
@property(nonatomic) BOOL isShowingSwipeDeleteConfirmation; // @synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation;
@property(nonatomic) float conversationCellHeight; // @synthesize conversationCellHeight=_conversationCellHeight;
- (void)_filterCellSelectionChanged:(id)arg1;
@property(retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // @synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath;
- (void)_updateToolbarItems;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)markAsReadButtonTapped:(id)arg1;
- (BOOL)_shouldKeepSelection;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
@property(nonatomic) unsigned int filteredConversationCount; // @synthesize filteredConversationCount=_filteredConversationCount;
@property(retain, nonatomic) NSArray *filteredJunkConversations; // @synthesize filteredJunkConversations=_filteredJunkConversations;
@property(retain, nonatomic) NSArray *filteredContactsAndSMSConversations; // @synthesize filteredContactsAndSMSConversations=_filteredContactsAndSMSConversations;
@property(retain, nonatomic) UIView *noMessagesDialogView; // @synthesize noMessagesDialogView=_noMessagesDialogView;
- (void)updateNavigationItems;
- (void)updateFilterControl:(id)arg1;
@property(copy, nonatomic) NSArray *frozenConversations; // @synthesize frozenConversations=_frozenConversations;
@property(readonly, nonatomic) BOOL shouldShowPendingCell;
@property(retain, nonatomic) UIBarButtonItem *currentEditButtonItem; // @synthesize currentEditButtonItem=_currentEditButtonItem;
- (void)editButtonTapped:(id)arg1;
- (void)updateCurrentEditButton;
- (void)composeButtonClicked:(id)arg1;
- (void)updateNoMessagesDialog;
@property(retain, nonatomic) CKScheduledUpdater *updater; // @synthesize updater=_updater;
- (void)noteUnreadCountsChanged;
- (void)updateConversationSelection;
- (Class)conversationListCellClass;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_updateFilteredConversationLists;
@property(nonatomic) int filterMode; // @synthesize filterMode=_filterMode;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)updateConversationList;
- (id)activeConversations;
- (void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)prepareForSuspend;
- (void)prepareForResume;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)inputAccessoryView;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)accessibilityLargeTextDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (float)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)significantTimeChange;
- (unsigned int)supportedInterfaceOrientations;
- (void)applicationWillSuspend;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)updateTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

