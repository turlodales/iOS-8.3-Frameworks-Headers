//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSUUID;

@interface _HKWorkoutFilter : _HKFilter
{
    NSUUID *_workoutUUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)filterWithWorkoutUUID:(id)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
@property(readonly, nonatomic) NSUUID *workoutUUID; // @synthesize workoutUUID=_workoutUUID;
- (BOOL)acceptsDataObject:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

