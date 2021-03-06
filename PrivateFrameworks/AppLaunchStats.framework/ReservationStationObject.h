//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DuetLoggerProtocol.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface ReservationStationObject : NSObject <DuetLoggerProtocol>
{
    NSObject<OS_dispatch_queue> *rsDispatchQueue;
    long long lockTime;
    long long seqNum;
    int appType;
    CDUnknownBlockType forceEndHandler;
    NSDate *timeStamp;
    NSString *bundleID;
    NSObject<OS_dispatch_source> *theTimer;
    unsigned long long startMachAbsoluteTime;
}

- (void)setStationState:(id)arg1 seq:(long long)arg2 type:(int)arg3 didset:(_Bool *)arg4 release:(CDUnknownBlockType)arg5;
- (void)setStation:(id)arg1 didSet:(_Bool *)arg2;
- (void)releaseStationWithAppID:(id)arg1 seqNum:(long long)arg2 withReleaseState:(_Bool *)arg3;
- (_Bool)isFree;
- (void)createTimer;
- (void)onTick;
- (void)logLight:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void).cxx_destruct;
- (id)init:(id)arg1;

@end

