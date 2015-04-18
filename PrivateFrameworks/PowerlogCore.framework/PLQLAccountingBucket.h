//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface PLQLAccountingBucket : NSObject
{
    NSMutableArray *_accountingEvents;
    NSMutableDictionary *_accountedEnergy;
    double _energy;
    struct _PLTimeIntervalRange _range;
}

- (void)addEnergyForIdentifier:(id)arg1 withEnergy:(double)arg2;
- (void)performBucketEnergyAccounting:(double)arg1;
- (id)initWithRange:(struct _PLTimeIntervalRange)arg1;
- (double)energyForAccountingIdentifier:(id)arg1;
@property(readonly) NSMutableDictionary *accountedEnergy; // @synthesize accountedEnergy=_accountedEnergy;
- (void)addAccountingEvent:(id)arg1;
- (double)getEnergy;
- (unsigned int)numberOfAccountingEvents;
@property double energy; // @synthesize energy=_energy;
- (double)totalWeight;
@property(readonly, retain) NSMutableArray *accountingEvents; // @synthesize accountingEvents=_accountingEvents;
- (void).cxx_destruct;
@property(readonly) struct _PLTimeIntervalRange range; // @synthesize range=_range;
- (id)description;

@end

