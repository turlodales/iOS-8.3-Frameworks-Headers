//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTimer.h"

@interface NSTimer (NSTimer)
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
- (double)interval;
- (id)fireDate;
- (long)order;
- (double)timeInterval;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (CDStruct_60d14f2d)context;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (struct __CFString *)copyDebugDescription;
- (double)fireTime;
- (void)setFireTime:(double)arg1;
- (double)_cffireTime;
- (void)fire;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
@end

