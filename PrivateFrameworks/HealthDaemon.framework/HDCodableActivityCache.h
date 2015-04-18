//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class HDCodableSample;

@interface HDCodableActivityCache : PBCodable <NSCopying>
{
    long long _activeEnergyBurnedAnchor;
    double _activeHours;
    long long _activeHoursAnchor;
    double _briskMinutes;
    long long _briskMinutesAnchor;
    long long _cacheIndex;
    long long _calorieGoalAnchor;
    double _energyBurned;
    double _energyBurnedGoal;
    long long _energyBurnedGoalAnchor;
    double _energyBurnedGoalDate;
    long long _stepCount;
    long long _stepCountAnchor;
    double _walkingAndRunningDistance;
    long long _walkingAndRunningDistanceAnchor;
    long long _workoutAnchor;
    HDCodableSample *_sample;
    struct {
        unsigned int activeEnergyBurnedAnchor:1;
        unsigned int activeHours:1;
        unsigned int activeHoursAnchor:1;
        unsigned int briskMinutes:1;
        unsigned int briskMinutesAnchor:1;
        unsigned int cacheIndex:1;
        unsigned int calorieGoalAnchor:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int energyBurnedGoalAnchor:1;
        unsigned int energyBurnedGoalDate:1;
        unsigned int stepCount:1;
        unsigned int stepCountAnchor:1;
        unsigned int walkingAndRunningDistance:1;
        unsigned int walkingAndRunningDistanceAnchor:1;
        unsigned int workoutAnchor:1;
    } _has;
}

@property(nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
@property(nonatomic) long long calorieGoalAnchor; // @synthesize calorieGoalAnchor=_calorieGoalAnchor;
@property(nonatomic) BOOL hasEnergyBurnedGoalAnchor;
@property(nonatomic) BOOL hasWorkoutAnchor;
@property(nonatomic) long long workoutAnchor; // @synthesize workoutAnchor=_workoutAnchor;
@property(nonatomic) BOOL hasWalkingAndRunningDistanceAnchor;
@property(nonatomic) BOOL hasStepCountAnchor;
@property(nonatomic) BOOL hasCalorieGoalAnchor;
@property(nonatomic) BOOL hasBriskMinutesAnchor;
@property(nonatomic) BOOL hasActiveHoursAnchor;
@property(nonatomic) BOOL hasActiveEnergyBurnedAnchor;
@property(nonatomic) BOOL hasEnergyBurnedGoalDate;
@property(nonatomic) BOOL hasWalkingAndRunningDistance;
@property(nonatomic) BOOL hasEnergyBurnedGoal;
@property(nonatomic) BOOL hasStepCount;
@property(nonatomic) BOOL hasActiveHours;
@property(nonatomic) BOOL hasBriskMinutes;
@property(nonatomic) BOOL hasEnergyBurned;
@property(nonatomic) BOOL hasCacheIndex;
- (id)decodedEnergyBurnedGoalQuantity;
- (id)decodedWalkingAndRunningDistanceQuantity;
- (id)decodedEnergyBurnedQuantity;
@property(nonatomic) long long walkingAndRunningDistanceAnchor; // @synthesize walkingAndRunningDistanceAnchor=_walkingAndRunningDistanceAnchor;
@property(nonatomic) long long stepCountAnchor; // @synthesize stepCountAnchor=_stepCountAnchor;
@property(nonatomic) long long energyBurnedGoalAnchor; // @synthesize energyBurnedGoalAnchor=_energyBurnedGoalAnchor;
@property(nonatomic) long long briskMinutesAnchor; // @synthesize briskMinutesAnchor=_briskMinutesAnchor;
@property(nonatomic) long long activeHoursAnchor; // @synthesize activeHoursAnchor=_activeHoursAnchor;
@property(nonatomic) long long activeEnergyBurnedAnchor; // @synthesize activeEnergyBurnedAnchor=_activeEnergyBurnedAnchor;
@property(nonatomic) double walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property(nonatomic) double energyBurnedGoalDate; // @synthesize energyBurnedGoalDate=_energyBurnedGoalDate;
@property(nonatomic) double energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property(nonatomic) double activeHours; // @synthesize activeHours=_activeHours;
@property(nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) double energyBurned; // @synthesize energyBurned=_energyBurned;
@property(nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property(readonly, nonatomic) BOOL hasSample;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

