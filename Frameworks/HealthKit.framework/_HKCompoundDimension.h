//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKDimension.h>

@class _HKFactorization;

@interface _HKCompoundDimension : _HKDimension
{
    _HKFactorization *_baseDimensions;
}

+ (id)dimensionWithBaseDimensions:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithBaseDimensions:(id)arg1;
- (id)_baseDimensions;

@end

