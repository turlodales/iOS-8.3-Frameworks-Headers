//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableArray *_completionHandlers;
    APSConnection *_pushConnection;
}

- (void)fetchPushTokenWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokeCompletionWithPushToken:(id)arg1;
- (void)_handleTimeout;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

