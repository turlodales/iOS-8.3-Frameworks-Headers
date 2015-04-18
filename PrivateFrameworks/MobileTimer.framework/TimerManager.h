//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UILocalNotification;

@interface TimerManager : NSObject
{
    int _state;
    UILocalNotification *_notification;
    double _remainingTime;
}

+ (id)sharedManager;
+ (void)setSoundID:(id)arg1 forNotification:(id)arg2;
+ (id)newNotificationAt:(double)arg1 withSound:(id)arg2;
+ (id)copyFetchScheduledNotification;
+ (BOOL)discardOldVersion;
+ (BOOL)upgrade;
+ (BOOL)isTimerNotification:(id)arg1;
- (void)changeSound:(id)arg1;
- (void)scheduleAt:(double)arg1 withSound:(id)arg2;
- (void)reloadState;
- (void)setDefaultSound:(id)arg1;
@property(readonly, nonatomic) NSString *defaultSound;
@property(readonly, nonatomic) double remainingTime;
@property(nonatomic) double defaultDuration;
- (BOOL)pause;
- (BOOL)resume;
@property(readonly, nonatomic) int state;
- (BOOL)cancel;
@property(readonly, nonatomic) double fireTime;

@end

