//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKWorkout.h>

#import "_HKActiveWorkoutClient.h"

@class NSData, NSDate, NSDictionary, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface _HKActiveWorkout : HKWorkout <_HKActiveWorkoutClient>
{
    id <_HKActiveWorkoutDelegate> _delegate;
    id <_HKActiveWorkoutLifecycleDelegate> _lifecycleDelegate;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    int _workoutState;
    int _serverState;
    NSDate *_lastObservedDate;
    NSMutableDictionary *_resumeDataByType;
    id <NSXPCProxyCreating> _serverProxy;
    NSMutableData *_associatedObjectUUIDData;
    BOOL _shouldUseDeviceData;
}

+ (BOOL)supportsSecureCoding;
+ (id)_serverInterface;
+ (id)_clientInterface;
+ (id)_workoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(unsigned int)arg8 goal:(id)arg9 shouldUseDeviceData:(BOOL)arg10 metadata:(id)arg11;
- (id)endDate;
- (id)metadata;
- (id)totalEnergyBurned;
- (void)_setTotalDistance:(id)arg1;
- (void)_setTotalEnergyBurned:(id)arg1;
@property(readonly) int serverState;
- (void).cxx_destruct;
- (id)_init;
- (id)totalDistance;
- (double)duration;
@property __weak id <_HKActiveWorkoutDelegate> delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, getter=_shouldUseDeviceData) BOOL shouldUseDeviceData; // @synthesize shouldUseDeviceData=_shouldUseDeviceData;
@property(readonly) NSDictionary *resumeDataByType; // @synthesize resumeDataByType=_resumeDataByType;
@property(readonly, getter=_associatedObjectUUIDData) NSData *associatedObjectUUIDData;
@property(getter=_lifecycleDelegate, setter=_setLifecycleDelegate:) __weak id <_HKActiveWorkoutLifecycleDelegate> lifecycleDelegate;
- (void)_setServerProxy:(id)arg1;
- (id)_inactiveCopy;
- (void)_addSamples:(id)arg1;
- (void)_connectionDidEncounterError:(id)arg1;
- (void)_attachServerWithClientQueue:(id)arg1 lifecycleDelegate:(id)arg2 connection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)endWorkoutWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeWorkoutFromDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_objectCanBeSaved:(id *)arg1;
@property(readonly) int workoutState;
- (id)_serverProxy;
- (BOOL)_serverAttached;
- (BOOL)_queue_serverAttached;
- (void)_queue_addAssociatedObjectUUIDs:(id)arg1;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalDistance;
- (void)_queue_addDistance:(id)arg1;
- (void)_queue_alertDelegateWorkoutDidUpdateTotalEnergyBurned;
- (void)_queue_addEnergyBurned:(id)arg1;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;
- (id)_propertyQueue_serverConfiguration;
- (void)_queue_deactivate;
- (id)_queue_endDate;
- (void)_queue_setEndDate:(id)arg1;
- (void)_queue_alertDelegateDidUpdateState:(int)arg1 date:(id)arg2;
- (void)_handleWorkoutPausedWithDate:(id)arg1;
- (void)_queue_transitionToServerState:(int)arg1;
- (id)_workoutServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)endWorkoutWithDate:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pauseWorkoutWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)serverPausedWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTotalsWithEnergyBurned:(id)arg1 distance:(id)arg2 resumeData:(id)arg3 UUIDs:(id)arg4;
- (void)_setEndDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

