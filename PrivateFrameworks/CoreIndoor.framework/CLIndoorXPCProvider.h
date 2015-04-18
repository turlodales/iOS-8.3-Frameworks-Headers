//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSXPCConnection;

@interface CLIndoorXPCProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_frameworkQueue;
    NSXPCConnection *_connection;
    struct optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>> _lastCrashTime;
    NSObject<OS_dispatch_source> *_interruptReconnection;
}

+ (id)newConnectionFor:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)withinQueueReinitializeRemoteState;
- (void)withinQueueReconnectInvalidatedConnection;
- (void)withinQueueInterruptionHandler;
- (void)withinQueueScheduleReconnect:(duration_877adb87)arg1 reason:(id)arg2 reinitializeConnection:(BOOL)arg3;
- (int)withinQueueShouldReinitializeRemote:(time_point_45f83f85)arg1;
- (void)withinQueueInvalidate;
- (void)withinQueueInitializeConnection;
- (CDUnknownBlockType)_defaultErrHandler;
- (CDUnknownBlockType)_defaultErrHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)impl;

@end

