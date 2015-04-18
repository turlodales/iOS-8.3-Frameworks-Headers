//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DuetLoggerProtocol.h"

@class NSDate, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsLaunchQueue : NSObject <DuetLoggerProtocol>
{
    _Bool pushHigh;
    NSObject<OS_dispatch_queue> *launchQueue;
    long long allowedAppLaunchCap;
    long long wifiChargerDuration;
    unsigned long long scheduleLaunchQueue;
    CDUnknownBlockType highPriorityBlock;
    CDUnknownBlockType lowPriorityBlock;
    NSDate *lastRetryTrigTime;
    NSMutableArray *whatToLaunchQueue;
    NSMutableArray *trendingQueue;
    NSMutableArray *highPriorityPushQueue;
    NSMutableArray *highPriorityRetryList;
    NSMutableArray *lowPriorityPushQueue;
    NSMutableArray *lowPriorityRetryList;
    NSMutableArray *wifiChargerQueue;
    NSMutableArray *reservationStationList;
    CDUnknownBlockType wifiChargerCheck;
    NSDate *ageWifiChargerQueue;
}

- (void)setLaunchCapacity:(unsigned long long)arg1;
- (void)updateWifiChargerDate;
- (void)enableWifiChargerQueue:(CDUnknownBlockType)arg1;
- (_Bool)refillWifiChargerQueue;
- (void)releaseReservationStation:(id)arg1 seqNum:(long long)arg2;
- (void)doDispatchQueuedLPLaunches;
- (void)doDispatchQueuedLaunches;
- (_Bool)confirmReservationStation:(id)arg1 seqNum:(long long)arg2 type:(int)arg3 release:(CDUnknownBlockType)arg4;
- (void)addToLowPriorityQueue:(id)arg1 withLaunchBlock:(CDUnknownBlockType)arg2;
- (void)addToHighPriorityQueue:(id)arg1 withLaunchBlock:(CDUnknownBlockType)arg2;
- (_Bool)wifiChargeQueueAllowedToProceed;
- (int)launchObject:(id)arg1;
- (int)reservationStationsFree;
- (_Bool)acquireReservationStation:(id)arg1;
- (void)addToLaunchQueue:(id)arg1 withQueueType:(int)arg2 withItem:(CDUnknownBlockType)arg3;
- (void)logLight:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void).cxx_destruct;
- (id)init;

@end
