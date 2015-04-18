//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLTBulletinDistributorSubscriberDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BLTBulletinDistributorSubscriberList : NSObject <BLTBulletinDistributorSubscriberDelegate>
{
    NSMutableArray *_subscribers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *subscribers; // @synthesize subscribers=_subscribers;
- (BOOL)hasSubscribersForSectionID:(id)arg1;
- (id)subscribedSectionIDs;
- (void)addSubscriber:(id)arg1;
- (void)subscriber:(id)arg1 subscribedWithMachServiceName:(id)arg2;
- (void)_removeSubscribersWithMachServiceName:(id)arg1 exceptFor:(id)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)removeSubscriber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

