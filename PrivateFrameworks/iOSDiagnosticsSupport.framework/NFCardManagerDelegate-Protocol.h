//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NFCardManager, NSDictionary;

@protocol NFCardManagerDelegate <NSObject>

@optional
- (void)cardManager:(NFCardManager *)arg1 secureElementDidBecomeAvailable:(BOOL)arg2;
- (void)cardManager:(NFCardManager *)arg1 didReceiveRemoteAdminNotification:(NSDictionary *)arg2;
- (void)cardManager:(NFCardManager *)arg1 receivedRemoteAdminNotification:(NSDictionary *)arg2;
@end
