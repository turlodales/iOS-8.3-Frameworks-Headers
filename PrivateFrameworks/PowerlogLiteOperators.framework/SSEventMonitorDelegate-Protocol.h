//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SSEventMonitor;

@protocol SSEventMonitorDelegate <NSObject>

@optional
- (void)eventMonitor:(SSEventMonitor *)arg1 receivedEventWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

