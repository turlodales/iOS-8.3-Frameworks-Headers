//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "NSCopying.h"

@class EKCalendarItem, EKRecurrenceEnd, NSArray, NSDate, NSString;

@interface EKRecurrenceRule : EKObject <NSCopying>
{
    BOOL _usesEndDate;
    EKRecurrenceEnd *_cachedEnd;
}

+ (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg1;
+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned int)arg2 end:(id)arg3;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;
@property(retain, nonatomic) EKCalendarItem *owner; // @dynamic owner;
@property(readonly, nonatomic) int interval;
- (void)setInterval:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (void)setFrequency:(int)arg1;
@property(readonly, nonatomic) int frequency;
@property(readonly, nonatomic) NSString *UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isAnyDayRule;
- (BOOL)isWeekendRule;
- (BOOL)isWeekdayRule;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (BOOL)mayOccurAfterDate:(id)arg1;
@property(readonly, nonatomic) int firstDayOfTheWeek;
@property(readonly, nonatomic) BOOL shouldPinMonthDays;
@property(retain, nonatomic) EKRecurrenceEnd *cachedEnd; // @synthesize cachedEnd=_cachedEnd;
@property(readonly, nonatomic) NSDate *cachedEndDate;
@property(readonly) BOOL usesEndDate; // @synthesize usesEndDate=_usesEndDate;
- (void)setFirstDayOfTheWeek:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *weeksOfTheYear;
@property(readonly, nonatomic) NSArray *daysOfTheYear;
@property(readonly, nonatomic) NSArray *setPositions;
@property(readonly, nonatomic) NSArray *daysOfTheWeek;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (void)setWeeksOfTheYear:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 end:(id)arg3;
- (id)_persistentRule;
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
@property(readonly) CDStruct_6e43267c gregorianUnits;
@property(readonly, nonatomic) NSArray *daysOfTheMonth;
@property(readonly, nonatomic) NSArray *monthsOfTheYear;
@property(readonly, nonatomic) BOOL dirtyStateMayAffectExceptionDates;
- (id)lazyLoadRelationForKey:(id)arg1;

@end

