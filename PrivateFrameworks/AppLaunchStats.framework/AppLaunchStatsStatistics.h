//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DuetLoggerProtocol.h"
#import "DuetSaveAndRestore.h"

@class AppLaunchStatsSaveAndRestore, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsStatistics : NSObject <DuetLoggerProtocol, DuetSaveAndRestore>
{
    NSObject<OS_dispatch_queue> *statsQueue;
    unsigned long long records;
    NSDate *lastTriggeredDate;
    NSMutableArray *lastPredictedApps;
    NSMutableArray *lastForegroundApps;
    NSMutableDictionary *appStatistics;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    CDUnknownBlockType scoreCallback;
    short lastTriggeredSlot;
    BOOL bypass;
}

- (void)trigger;
- (BOOL)admit:(id)arg1;
- (void)broughtToForeground:(id)arg1;
- (id)copyStatisticsToDictionary;
- (BOOL)pullPredicted:(unsigned short)arg1;
- (void)saveContext:(id)arg1;
- (void)logLight:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)save:(id)arg1;
- (void).cxx_destruct;
- (void)restore:(id)arg1;
- (id)init:(CDUnknownBlockType)arg1;

@end

