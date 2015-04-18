//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutTotalDistanceFilter : _HKFilter
{
    HKQuantity *_totalDistance;
    unsigned int _operatorType;
}

+ (BOOL)supportsSecureCoding;
+ (id)filterWithTotalDistance:(id)arg1 operatorType:(unsigned int)arg2;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
- (BOOL)acceptsDataObject:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) HKQuantity *totalDistance; // @synthesize totalDistance=_totalDistance;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int operatorType; // @synthesize operatorType=_operatorType;

@end

