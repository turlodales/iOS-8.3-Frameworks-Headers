//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying>
{
    double fStartDate;
    double fFiredDate;
    int fAlarmType;
    BOOL fDidWake;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *startDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) int alarmType;
@property(readonly, nonatomic) BOOL didWake;
@property(readonly, nonatomic) NSDate *firedDate;
- (id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(int)arg3 didWake:(BOOL)arg4;

@end

