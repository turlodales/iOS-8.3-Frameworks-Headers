//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem
{
    CalendarEventAlarmTable *_alarmTable;
    unsigned int _disclosedSubitem;
    NSArray *_alarms;
    int _lastSeenAllDayState;
    BOOL _userChangedAlarm;
    BOOL _hasLeaveNowAlarm;
    BOOL _canHaveLeaveNowAlarm;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)_alarmsMatchCalendarItem;
- (BOOL)_calendarItemHasLeaveNowAlarm;
- (void)_updateDefaultAlarm;
- (void)_updateAlarms;
- (void)updateInternalTravelTimeStateForCalendarItem:(id)arg1;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (unsigned int)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

@end

