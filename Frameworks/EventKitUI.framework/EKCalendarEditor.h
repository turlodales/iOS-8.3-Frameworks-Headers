//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EKCalendarEditItemDelegate.h"

@class EKCalendar, EKCalendarShareesEditItem, EKEventStore, EKSource, NSArray, NSString, UITableView;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate>
{
    UITableView *_tableView;
    NSArray *_editItems;
    EKCalendarShareesEditItem *_shareesEditItem;
    EKSource *_source;
    unsigned int _entityType;
    BOOL _isNewCalendar;
    EKEventStore *_eventStore;
    EKCalendar *_calendar;
    id <EKCalendarEditorDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
}

- (void)cancel:(id)arg1;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void)done:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
@property(nonatomic) __weak id <EKCalendarEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)_deleteCalendar;
- (void)_presentValidationAlert:(id)arg1;
- (BOOL)_shouldShowDeleteButton;
- (void)_deleteClicked:(id)arg1;
- (void)setupForCalendar;
@property(nonatomic) BOOL isNewCalendar; // @synthesize isNewCalendar=_isNewCalendar;
- (id)owningNavigationController;
- (void)calendarItemStartedEditing:(id)arg1;
- (id)_editItems;
- (void)_localeChanged;
- (void)_eventStoreChanged:(id)arg1;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
