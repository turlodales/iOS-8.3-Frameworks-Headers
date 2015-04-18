//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CKRecipientSearchListControllerDelegate.h"
#import "MFComposeRecipientTextViewDelegate.h"
#import "MFGroupDetailViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class ABPeoplePickerNavigationController, CKComposeRecipientView, CKPendingConversation, CKRecipientSearchListController, MFComposeRecipient, NSArray, NSMutableDictionary, NSString, UIScrollView, UIView;

@interface CKRecipientSelectionController : CKViewController <MFComposeRecipientTextViewDelegate, CKRecipientSearchListControllerDelegate, MFGroupDetailViewControllerDelegate, UINavigationControllerDelegate, ABPeoplePickerNavigationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    float _keyboardHeightWithAccessoryView;
    BOOL _peoplePickerHidden;
    BOOL _editable;
    BOOL _forceMMS;
    BOOL _preventAtomization;
    BOOL _didShowOneTimeErrorAlert;
    BOOL _homogenizePreferredServiceForiMessage;
    BOOL _shouldSuppressSearchResultsTable;
    id <CKRecipientSelectionControllerDelegate> _delegate;
    CKPendingConversation *_conversation;
    CKComposeRecipientView *_toField;
    UIView *_toFieldContainerView;
    CKRecipientSearchListController *_searchListController;
    UIScrollView *_toFieldScrollingView;
    ABPeoplePickerNavigationController *_peoplePickerController;
    NSArray *_addressBookProperties;
    MFComposeRecipient *_recentContactForPresentedABCard;
    NSMutableDictionary *_recipientAvailibityTimers;
    NSMutableDictionary *_recipientAvailabilities;
}

- (void)addRecipients:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *recipientAvailabilities; // @synthesize recipientAvailabilities=_recipientAvailabilities;
@property(nonatomic) BOOL didShowOneTimeErrorAlert; // @synthesize didShowOneTimeErrorAlert=_didShowOneTimeErrorAlert;
@property(retain, nonatomic) UIScrollView *toFieldScrollingView; // @synthesize toFieldScrollingView=_toFieldScrollingView;
@property(nonatomic) BOOL forceMMS; // @synthesize forceMMS=_forceMMS;
@property(retain, nonatomic) UIView *toFieldContainerView; // @synthesize toFieldContainerView=_toFieldContainerView;
@property(retain, nonatomic) CKComposeRecipientView *toField; // @synthesize toField=_toField;
- (BOOL)_isToFieldPushedUp;
@property(readonly, nonatomic) float collapsedHeight;
- (BOOL)hasUnreachableEmergencyRecipient;
@property(readonly, nonatomic) BOOL toFieldIsFirstResponder;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)viewServiceWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (unsigned int)presentationOptionsForRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
@property(retain, nonatomic) NSArray *addressBookProperties; // @synthesize addressBookProperties=_addressBookProperties;
@property(readonly, nonatomic) BOOL shouldSuppressSearchResultsTable; // @synthesize shouldSuppressSearchResultsTable=_shouldSuppressSearchResultsTable;
@property(retain, nonatomic) MFComposeRecipient *recentContactForPresentedABCard; // @synthesize recentContactForPresentedABCard=_recentContactForPresentedABCard;
- (id)_navigationControllerForSearchResults;
- (id)_alternateiMessagableAddressesForRecipient:(id)arg1;
- (id)_recipientCausingTooManyRecipientsError;
- (void)_handleRecipientAvailabilityTimeout:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *recipientAvailibityTimers; // @synthesize recipientAvailibityTimers=_recipientAvailibityTimers;
- (BOOL)hasPendingiMessageRecipients;
- (BOOL)hasTimedOutRecipients;
- (BOOL)hasFailediMessageRecipients;
- (id)_alternateAddressesForRecipient:(id)arg1;
- (void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_refreshActionSheet;
- (id)_toFieldCollapsedTextColor;
- (void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(BOOL)arg3;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)recipientAvailibilitiesDidUpdate;
- (BOOL)finishedComposingRecipients;
- (BOOL)_availibilityForRecipient:(id)arg1 onService:(id)arg2;
- (void)_hideSearchField;
- (void)_showSearchField;
@property(nonatomic, getter=isPeoplePickerHidden) BOOL peoplePickerHidden; // @synthesize peoplePickerHidden=_peoplePickerHidden;
@property(nonatomic, getter=isSearchResultsHidden) BOOL searchResultsHidden;
@property(retain, nonatomic) ABPeoplePickerNavigationController *peoplePickerController; // @synthesize peoplePickerController=_peoplePickerController;
- (BOOL)_shouldShowCardForPerson:(void *)arg1;
- (void)_removeRecent;
@property(nonatomic) BOOL preventAtomization; // @synthesize preventAtomization=_preventAtomization;
- (void)_showDetailsForGroup:(id)arg1;
- (void)_showActionSheetForRecipient:(id)arg1 animated:(BOOL)arg2;
- (void)_showDetailsForRecipient:(id)arg1 canDelete:(BOOL)arg2 presentInPopover:(BOOL)arg3;
- (void)_updateRecipientViewLayouts;
- (unsigned int)_atomPresentationOptionsForRecipient:(id)arg1;
- (void)_updateShowingSearch;
- (void)_updateSearchResultsTable;
- (void)_adjustToFieldPositionIfNecessary;
- (void)recipientSelectionControllerDidChange;
- (void)_resetSearchResultsInsets;
- (void)_updateToField;
@property(retain, nonatomic) CKRecipientSearchListController *searchListController; // @synthesize searchListController=_searchListController;
@property(readonly, nonatomic) BOOL homogenizePreferredServiceForiMessage; // @synthesize homogenizePreferredServiceForiMessage=_homogenizePreferredServiceForiMessage;
- (void)_updateAddressBookProperties;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_handleRecipientViewChanged:(id)arg1;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (void)invalidateOutstandingIDStatusRequests;
- (int)searchListController:(id)arg1 idStatusForIDSID:(id)arg2;
- (void)searchListController:(id)arg1 destinationsUpdated:(id)arg2;
- (void)searchListControllerDidFinishSearch:(id)arg1;
- (void)searchListControllerDidScroll:(id)arg1;
- (void)searchListController:(id)arg1 accessoryPickedForRecipient:(id)arg2;
- (void)searchListController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)viewDidAppearDeferredSetup;
- (struct UIEdgeInsets)_navigationBarInsets;
- (id)initWithConversation:(id)arg1;
@property(retain, nonatomic) CKPendingConversation *conversation; // @synthesize conversation=_conversation;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)reset;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) id <CKRecipientSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)addRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)removeRecipient:(id)arg1;
- (void)_dismissPeoplePicker;
- (id)recipients;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

