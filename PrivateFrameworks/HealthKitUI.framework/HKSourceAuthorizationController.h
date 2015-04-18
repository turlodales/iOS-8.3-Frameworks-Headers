//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthStore, HKSource, NSArray, NSMutableSet;

@interface HKSourceAuthorizationController : NSObject
{
    HKHealthStore *_healthStore;
    HKSource *_source;
    NSArray *_orderedTypesForSharing;
    NSArray *_orderedTypesForReading;
    NSMutableSet *_typesEnabledForSharing;
    NSMutableSet *_typesEnabledForReading;
}

- (void)_reload;
@property(retain, nonatomic) NSMutableSet *typesEnabledForReading; // @synthesize typesEnabledForReading=_typesEnabledForReading;
@property(retain, nonatomic) NSMutableSet *typesEnabledForSharing; // @synthesize typesEnabledForSharing=_typesEnabledForSharing;
@property(retain, nonatomic) NSArray *orderedTypesForReading; // @synthesize orderedTypesForReading=_orderedTypesForReading;
@property(retain, nonatomic) NSArray *orderedTypesForSharing; // @synthesize orderedTypesForSharing=_orderedTypesForSharing;
- (unsigned int)countOfTypesInSection:(int)arg1;
- (void)_setAuthorizationStatuses:(id)arg1;
- (int)_authorizationStatusWithType:(id)arg1;
- (void)_updateAuthorizationStatusWithTypes:(id)arg1;
- (id)_enabledTypesInSection:(int)arg1;
- (BOOL)isTypeEnabled:(id)arg1 inSection:(int)arg2;
- (void)setEnabled:(BOOL)arg1 forType:(id)arg2 inSection:(int)arg3 commit:(BOOL)arg4;
- (id)typesInSection:(int)arg1;
- (void)commitAuthorizationStatuses;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKSource *source; // @synthesize source=_source;
- (void)reload;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;

@end

