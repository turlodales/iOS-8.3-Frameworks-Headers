//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "EKReminderLocationPickerCellButtonHandler.h"
#import "EKReminderLocationPickerModelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class EKReminderLocationPickerCell, EKReminderLocationPickerModel, NSString, UIAlertView;

@interface EKReminderLocationPicker : UITableViewController <ABPeoplePickerNavigationControllerDelegate, EKReminderLocationPickerModelDelegate, UIAlertViewDelegate, UITextFieldDelegate, EKReminderLocationPickerCellButtonHandler>
{
    EKReminderLocationPickerModel *_model;
    id <EKStyleProvider> _styleProvider;
    int _savedStatusBarStyle;
    UIAlertView *_meCardAlert;
    EKReminderLocationPickerCell *_currentLocationCell;
    EKReminderLocationPickerCell *_typedLocationCell;
    BOOL _hasEditedText;
    BOOL _isShowingPeopleAddressPicker;
    BOOL _allowsShowInMap;
    BOOL _isEditingContactAddress;
    BOOL _ignoreNextSelectionChange;
    id <EKReminderLocationPickerDelegate> _locationPickerDelegate;
}

- (void)textFieldClearButtonPressed:(id)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (struct CGSize)preferredContentSize;
- (float)marginForTableView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)dealloc;
- (void)_dismissPeoplePicker;
@property(nonatomic) __weak id <EKReminderLocationPickerDelegate> locationPickerDelegate; // @synthesize locationPickerDelegate=_locationPickerDelegate;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 withLinkedPeople:(struct __CFArray *)arg3;
- (void)locationPickerModelDidEndOperation:(id)arg1;
- (void)locationPickerModelDidBeginOperation:(id)arg1;
- (void)_presentPersonPicker;
- (void)_setLocationFromRecord:(void *)arg1 multiValueIdentifier:(int)arg2;
- (id)_prepareCurrentLocationCell;
- (id)_prepareTypedLocationCell;
- (void)_updateAccessoryViewForTypedLocation;
- (void)_typedLocationCellTextDidChange;
- (void)_styleCell:(id)arg1;
- (id)_indexPathForSelectedItem;
- (void)_reloadCustomLocationRow;
- (BOOL)_shouldShowTypedLocation;
- (BOOL)_isCustomLocationRow:(id)arg1;
- (int)_accessoryTypeForLocationItem:(id)arg1 isSelected:(BOOL)arg2;
- (void)_showPickMeCardAlertIfNecessary;
- (void)_removeExistingMeCardAlert;
- (void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2;
- (void)locationPickerModelDidChangeSelection:(id)arg1;
- (void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(int)arg2;
- (void)locationPickerModelDidUpdateCustomLocation:(id)arg1;
- (void)locationPickerModelDidUpdateCurrentLocation:(id)arg1;
- (void)_setCell:(id)arg1 checked:(BOOL)arg2;
- (id)initWithModel:(id)arg1 styleProvider:(id)arg2;
- (void)failureButtonPressed;
- (void)contactsButtonPressed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

