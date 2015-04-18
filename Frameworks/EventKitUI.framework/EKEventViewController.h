//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EKEventTitleDetailItemDelegate.h"
#import "EKUIEventStatusButtonsViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class EKEvent, EKEventDetailItem, EKEventEditViewController, EKUIEventStatusButtonsView, EKUIRecurrenceAlertController, NSArray, NSString, SingleToolbarItemContainerView, UITableView, UIView, _UIAccessDeniedView;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate>
{
    BOOL _ignoreDBChanges;
    int _lastAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
    EKEventDetailItem *_selectedEditItem;
    int _disclosedTableSection;
    struct _NSRange _disclosedTableRange;
    int _pendingStatus;
    EKEventEditViewController *_activeEventEditor;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    float _statusButtonsViewCachedFontSize;
    int _lastOrientation;
    EKEventDetailItem *_currentEditItem;
    UITableView *_tableView;
    BOOL _didAppear;
    BOOL _viewIsVisible;
    BOOL _autoPop;
    BOOL _allowsSubitems;
    BOOL _showsPreview;
    BOOL _forcePreview;
    BOOL _trustsStatus;
    BOOL _allowsInviteResponses;
    BOOL _showsAddToCalendar;
    BOOL _ICSPreview;
    BOOL _needsReload;
    BOOL _showsDoneButton;
    BOOL _showsOutOfDateMessage;
    BOOL _showsDelegatorMessage;
    BOOL _showsDelegateMessage;
    BOOL _dead;
    BOOL _tableIsBeingEdited;
    NSArray *_items;
    NSArray *_currentSections;
    int _scrollToSection;
    UIView *_blankFooterView;
    BOOL _showingBlankFooterView;
    BOOL _allowsEditing;
    BOOL _hideNavigationBar;
    BOOL _minimalMode;
    id <EKEventViewDelegate> _delegate;
    EKEvent *_event;
    int _editorShowTransition;
    int _editorHideTransition;
    UIViewController *_eventDetailContainer;
    float _leftInset;
    float _rightInset;
}

+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(float)arg2 numRowsInSection:(unsigned int)arg3 cellRow:(unsigned int)arg4 forceLayout:(BOOL)arg5;
+ (void)setDefaultDatesForEvent:(id)arg1;
@property(nonatomic) float rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) float topInset;
@property(nonatomic) float leftInset; // @synthesize leftInset=_leftInset;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void)_pop;
- (void).cxx_destruct;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (id)tableView;
- (id)_items;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
@property(nonatomic) __weak id <EKEventViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak UIViewController *eventDetailContainer; // @synthesize eventDetailContainer=_eventDetailContainer;
@property(nonatomic) BOOL hideNavigationBar; // @synthesize hideNavigationBar=_hideNavigationBar;
- (void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)detailItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(CDUnknownBlockType)arg3;
- (void)_layoutStatusButtonsForInterfaceOrientation:(int)arg1;
@property(retain, nonatomic) EKEventEditViewController *activeEventEditor;
@property(nonatomic) int scrollToSection;
@property(nonatomic) BOOL alwaysShowsCalendarPreview;
@property(nonatomic) BOOL allowsCalendarPreview;
- (void)openAttendeesDetailItem;
- (unsigned int)_sectionForDetailItem:(id)arg1;
@property(nonatomic) BOOL minimalMode; // @synthesize minimalMode=_minimalMode;
- (void)invokeAction:(int)arg1;
- (BOOL)_isDisplayingDeletableEvent;
@property(nonatomic, getter=isICSPreview) BOOL ICSPreview; // @synthesize ICSPreview=_ICSPreview;
@property(nonatomic) BOOL showsAddToCalendar; // @synthesize showsAddToCalendar=_showsAddToCalendar;
- (id)_statusButtonsContainerView;
- (BOOL)_shouldDisplayStatusButtons;
- (void)_addToCalendarClicked:(id)arg1;
- (id)_statusButtonsView;
- (void)_saveStatus:(int)arg1;
@property(nonatomic) int editorHideTransition; // @synthesize editorHideTransition=_editorHideTransition;
- (void)_saveStatus:(int)arg1 span:(int)arg2;
- (struct CGSize)_idealSize;
- (id)_viewControllerForEditorPresentation;
@property(nonatomic) int editorShowTransition; // @synthesize editorShowTransition=_editorShowTransition;
- (void)presentEditorAnimated:(BOOL)arg1;
- (BOOL)_isDisplayingInvitation;
- (id)_statusButtons;
- (void)_prepareEventForEdit;
- (id)_footerLabelContainingText:(id)arg1;
- (BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
@property(nonatomic) BOOL showsDelegateMessage; // @synthesize showsDelegateMessage=_showsDelegateMessage;
@property(nonatomic) BOOL showsDelegatorMessage; // @synthesize showsDelegatorMessage=_showsDelegatorMessage;
@property(nonatomic) BOOL showsOutOfDateMessage; // @synthesize showsOutOfDateMessage=_showsOutOfDateMessage;
@property(nonatomic) BOOL allowsInviteResponses; // @synthesize allowsInviteResponses=_allowsInviteResponses;
- (void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_refreshEventAndReload;
- (void)completeWithAction:(int)arg1;
- (void)_keyboardWasHidden:(id)arg1;
- (void)_keyboardWasShown:(id)arg1;
- (void)_updateFrameForInsets;
- (void)_dismissEditor:(BOOL)arg1 deleted:(BOOL)arg2;
- (void)_updateStatusButtonsActions;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_setUpForEvent;
- (void)doneButtonPressed;
- (BOOL)_shouldDisplayDoneButton;
- (void)editEvent;
- (BOOL)_shouldShowEditButton;
- (id)_indexPathForAttendeesDetailItem;
- (void)_reloadIfNeeded;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (void)_setObservesKeyboardNotifications:(BOOL)arg1;
- (void)_updateTableContentForSizeCategoryChange:(id)arg1;
- (id)_indexPathForSection:(int)arg1;
- (void)_setNeedsReload;
- (void)_updateFooterIfNeeded;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_teardownTableView;
- (void)_performDelete:(int)arg1;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_presentDetachSheet;
@property(nonatomic) BOOL showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
- (id)accessDeniedView;
- (id)viewControllerForEventItem:(id)arg1;
- (void)_presentValidationAlert:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
@property(nonatomic) BOOL allowsSubitems; // @synthesize allowsSubitems=_allowsSubitems;
- (void)_localeChanged;
- (BOOL)shouldShowEditButtonInline;
- (void)editButtonPressed;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)_storeChanged:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(float)arg2;
- (float)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(int)arg2;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

