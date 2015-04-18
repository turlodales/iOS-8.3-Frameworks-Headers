//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CMActivityAlarmProxy : NSObject
{
    id _internal;
    struct CLConnectionClient *fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary *fAlarms;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    _Bool fAlarmAvailable;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)stopListeningForActivityAlarm:(id)arg1;
- (void)listenForActivityAlarm:(id)arg1;
- (BOOL)activityAlarmAvailable;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;

@end

