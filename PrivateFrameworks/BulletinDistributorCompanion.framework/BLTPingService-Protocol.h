//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLTPBBulletinSummary, NSSet, NSString;

@protocol BLTPingService <NSObject>
- (void)subscribeWithMachServiceName:(NSString *)arg1;
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 subsectionIDs:(NSSet *)arg2 completion:(void (^)(BOOL))arg3;
- (void)subscribeToSectionID:(NSString *)arg1 forFullBulletins:(BOOL)arg2;
- (void)unsubscribeFromSectionID:(NSString *)arg1;
- (void)subscribeToSectionID:(NSString *)arg1;
@end

