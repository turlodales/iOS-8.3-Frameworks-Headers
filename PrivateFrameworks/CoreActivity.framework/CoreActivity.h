//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ActivityCounts, CMMotionManager, NSOperationQueue, StepHandler;

@interface CoreActivity : NSObject
{
    BOOL _pedometerIsOn;
    int _accelRate;
    CMMotionManager *_motionManager;
    ActivityCounts *_aCounts;
    StepHandler *_stepHandler;
    NSOperationQueue *_opQueue;
}

+ (int)activityCountThresholdForActivityLevel:(int)arg1 epochDuration:(int)arg2;
@property(retain, nonatomic) StepHandler *stepHandler; // @synthesize stepHandler=_stepHandler;
- (int)activityCountThresholdForActivityLevel:(int)arg1;
- (void)startPedometerUpdates:(id)arg1;
- (void)startActivityUpdates;
- (id)initActivityTracking:(id)arg1;
@property(nonatomic) BOOL pedometerIsOn; // @synthesize pedometerIsOn=_pedometerIsOn;
@property(retain, nonatomic) ActivityCounts *aCounts; // @synthesize aCounts=_aCounts;
@property(nonatomic) int accelRate; // @synthesize accelRate=_accelRate;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSOperationQueue *opQueue; // @synthesize opQueue=_opQueue;
- (void).cxx_destruct;
- (void)stopPedometerUpdates;
- (void)stopActivityUpdates;

@end

