//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
{
}

+ (BOOL)supportsSecureCoding;
- (oneway void)release;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)data;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)name;
- (id)description;
- (unsigned int)retainCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)retain;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;

@end

