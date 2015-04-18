//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, PCPersistentTimer;

@interface EKTravelEngineThrottle : NSObject
{
    BOOL _running;
    CDUnknownBlockType _adviceBlock;
    NSDate *_nextEmissionDate;
    NSMutableOrderedSet *_throttledAdviceQueue;
    PCPersistentTimer *_emissionTimer;
    NSObject<OS_dispatch_queue> *_throttleQueue;
    unsigned int _numberOfThrottleAdviceObjectsToEmitLater;
}

+ (double)_throttlePeriodInSeconds;
+ (id)_throttleIdentifier;
@property(nonatomic) BOOL running; // @synthesize running=_running;
- (void)start;
- (void)stop;
- (id)description;
- (id)init;
- (void)dealloc;
@property(nonatomic) NSObject<OS_dispatch_queue> *throttleQueue; // @synthesize throttleQueue=_throttleQueue;
@property(retain, nonatomic) NSMutableOrderedSet *throttledAdviceQueue; // @synthesize throttledAdviceQueue=_throttledAdviceQueue;
@property(retain, nonatomic) PCPersistentTimer *emissionTimer; // @synthesize emissionTimer=_emissionTimer;
- (void)_emissionTimerFired:(id)arg1;
@property(retain, nonatomic) NSDate *nextEmissionDate; // @synthesize nextEmissionDate=_nextEmissionDate;
- (void)_updateEmissionTimerWithEmissionDate:(id)arg1;
- (void)_emitAdviceObjects:(id)arg1;
@property(nonatomic) unsigned int numberOfThrottleAdviceObjectsToEmitLater; // @synthesize numberOfThrottleAdviceObjectsToEmitLater=_numberOfThrottleAdviceObjectsToEmitLater;
- (void)_analyzeQueueAndPrepareForEmission;
- (void)_uninstallEmissionTimer;
- (void)_significantTimeChangeNotificationReceived;
- (void)removeAllThrottledAdvice;
- (void)injectAdvice:(id)arg1 forEventWithExternalURL:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType adviceBlock; // @synthesize adviceBlock=_adviceBlock;
- (void)removeThrottledAdviceForEventWithExternalURL:(id)arg1;
- (void)_registerForNotificationObservation;
- (void)_unregisterForNotificationObservation;

@end

