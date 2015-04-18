//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalDateRangeProtocol.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 duration:(double)arg3;
+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 multiplier:(unsigned int)arg3;
+ (id)rangeWithStartDate:(id)arg1 duration:(double)arg2;
+ (id)rangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)rangeWithRange:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (BOOL)intersectsRange:(id)arg1;
- (id)briefDescription;
- (id)midnightsForRangeInTimeZoneString:(id)arg1;
- (id)unionRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (void)setStartDate:(id)arg1 duration:(double)arg2;
- (id)_calculateMidnightsInCalendar:(id)arg1;
- (BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(BOOL)arg3;
- (BOOL)intersectsRange:(id)arg1 allowSinglePointIntersection:(BOOL)arg2;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (void).cxx_destruct;
- (BOOL)containsRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isValid;
- (void)setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)subtractRange:(id)arg1;
- (BOOL)containsDate:(id)arg1;
- (id)midpoint;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

