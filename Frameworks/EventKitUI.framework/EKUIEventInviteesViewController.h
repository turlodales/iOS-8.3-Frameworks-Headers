//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "EKEditItemViewControllerDelegate.h"
#import "EKEditItemViewControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EKEvent, EKUIEventInviteesEditViewController, EKUIEventInviteesView, EKUIInviteeAlternativeTimeSearcher, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewInvisibleInviteeStatusSection, EKUIInviteesViewNotRespondedInviteesSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewRespondedInviteesSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSString;

@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKEditItemViewControllerProtocol>
{
    BOOL _resetAttendeesSections;
    BOOL _resetConflictResolutionSections;
    BOOL _viewIsVisible;
    BOOL _editable;
    EKUIEventInviteesEditViewController *_parentController;
    NSDate *_selectedStartDate;
    NSDate *_selectedEndDate;
    EKUIEventInviteesView *_inviteesView;
    EKEvent *_event;
    NSArray *_sections;
    EKUIInviteesViewRespondedInviteesSection *_respondedSection;
    EKUIInviteesViewNotRespondedInviteesSection *_notRespondedSection;
    EKUIInviteesViewInvisibleInviteeStatusSection *_invisibleInviteeStatusSection;
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;
    EKUIInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;
- (void)_presentViewController:(id)arg1;
@property(nonatomic) __weak EKUIEventInviteesEditViewController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(nonatomic) BOOL resetConflictResolutionSections; // @synthesize resetConflictResolutionSections=_resetConflictResolutionSections;
@property(nonatomic) BOOL resetAttendeesSections; // @synthesize resetAttendeesSections=_resetAttendeesSections;
@property(nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
- (void)_dismissPresentedViewControllerAnimated:(BOOL)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (id)_sectionForIndex:(unsigned int)arg1;
@property(retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // @synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // @synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // @synthesize originalConflictSection=_originalConflictSection;
@property(retain, nonatomic) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection; // @synthesize notRespondedSection=_notRespondedSection;
@property(retain, nonatomic) EKUIInviteesViewRespondedInviteesSection *respondedSection; // @synthesize respondedSection=_respondedSection;
@property(retain, nonatomic) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection; // @synthesize invisibleInviteeStatusSection=_invisibleInviteeStatusSection;
- (void)_requestDismissal;
- (id)_attendeesWithoutOrganizerAndLocations;
- (int)_indexForSection:(id)arg1;
@property(retain, nonatomic) EKUIEventInviteesView *inviteesView; // @synthesize inviteesView=_inviteesView;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (void)_eventModified:(id)arg1;
- (void)_searcherStateChanged:(int)arg1;
- (void)_sendMessageToParticipants:(id)arg1;
@property(retain, nonatomic) NSDate *selectedEndDate; // @synthesize selectedEndDate=_selectedEndDate;
@property(retain, nonatomic) NSDate *selectedStartDate; // @synthesize selectedStartDate=_selectedStartDate;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
@property(retain, nonatomic) EKUIInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (void)_refreshIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL presentModally;
@property(readonly) Class superclass;

@end

