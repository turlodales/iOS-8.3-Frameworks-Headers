//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DuetLoggerProtocol.h"
#import "DuetSaveAndRestore.h"

@class AppLaunchStatsSaveAndRestore, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsDelayLaunch : NSObject <DuetLoggerProtocol, DuetSaveAndRestore>
{
    NSObject<OS_dispatch_queue> *aplsDelayLaunchQueue;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    NSMutableDictionary *delayLaunchList;
    NSMutableDictionary *delayLaunchTimeInterval;
}

- (_Bool)shouldDelayLaunch:(id)arg1 forTrending:(_Bool)arg2;
- (int)valueSetForDelay:(id)arg1;
- (void)resetDelayLaunch:(id)arg1;
- (void)delayLaunch:(id)arg1 with:(double)arg2;
- (void)saveContext:(id)arg1;
- (void)logLight:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)save:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)restore:(id)arg1;

@end

