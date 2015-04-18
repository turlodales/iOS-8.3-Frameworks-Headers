//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

@class HKQuantity, NSArray;

@interface HKWorkout : HKSample
{
    unsigned int _workoutActivityType;
    double _duration;
    NSArray *_workoutEvents;
    HKQuantity *_totalEnergyBurned;
    HKQuantity *_totalDistance;
    unsigned int _goalType;
    HKQuantity *_goal;
}

+ (id)_workoutWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 workoutType:(id)arg7 activityType:(unsigned int)arg8 workoutEvents:(id)arg9 duration:(double)arg10 totalEnergyBurned:(id)arg11 totalDistance:(id)arg12 goalType:(unsigned int)arg13 goal:(id)arg14;
+ (BOOL)supportsSecureCoding;
+ (unsigned int)_workoutActivityTypeFromString:(id)arg1;
+ (id)workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)_activityTypeMappings;
+ (id)workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (BOOL)_isConcreteObjectClass;
+ (id)_stringFromWorkoutActivityType:(unsigned int)arg1;
+ (id)_workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(unsigned int)arg8 goal:(id)arg9 metadata:(id)arg10;
+ (id)_workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(unsigned int)arg8 goal:(id)arg9 metadata:(id)arg10 config:(CDUnknownBlockType)arg11;
- (double)_goalInCanonicalUnit;
- (double)_totalDistanceInCanonicalUnit;
- (double)_totalEnergyBurnedInCanonicalUnit;
@property(retain, nonatomic, getter=_goal, setter=_setGoal:) HKQuantity *goal; // @synthesize goal=_goal;
- (void)_setWorkoutEvents:(id)arg1;
@property(readonly) HKQuantity *totalEnergyBurned;
@property(nonatomic, getter=_goalType, setter=_setGoalType:) unsigned int goalType; // @synthesize goalType=_goalType;
@property(readonly) unsigned int workoutActivityType;
- (void)_setWorkoutActivityType:(unsigned int)arg1;
- (void)_setTotalDistance:(id)arg1;
- (void)_setTotalEnergyBurned:(id)arg1;
@property(readonly, copy) NSArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
- (void).cxx_destruct;
- (void)_setDuration:(double)arg1;
@property(readonly) HKQuantity *totalDistance;
@property(readonly) double duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateActiveTimePeriods:(CDUnknownBlockType)arg1;
- (id)_validateWorkoutEvents:(id)arg1;
- (id)_validateConfiguration;

@end

