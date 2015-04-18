//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSObject<OS_dispatch_queue>, NSString, SSXPCConnection;

@interface SSRequest : NSObject <SSXPCCoding>
{
    int _backgroundTaskIdentifier;
    BOOL _cancelAfterTaskExpiration;
    id <SSRequestDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}

- (void)_beginBackgroundTask;
@property(nonatomic) BOOL shouldCancelAfterTaskExpiration;
- (void)__endBackgroundTask;
- (void)__beginBackgroundTask;
- (void)_shutdownRequestWithMessageID:(long long)arg1;
- (id)_initSSRequest;
- (BOOL)__shouldUseBackgroundTaskAssertions;
- (void)_startWithMessageID:(long long)arg1 messageBlock:(CDUnknownBlockType)arg2;
- (void)_shutdownRequest;
- (void)disconnect;
- (BOOL)start;
@property(nonatomic) id <SSRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_endBackgroundTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

