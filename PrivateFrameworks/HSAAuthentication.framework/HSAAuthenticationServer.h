//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_xpc_object>;

@interface HSAAuthenticationServer : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    BOOL _hasRegistered;
}

+ (id)sharedInstance;
- (void)_clientConnected;
- (void)_configureWithClient:(id)arg1;
- (void)_cleanupClient:(id)arg1;
- (void)parseIncomingMessageFromNumber:(id)arg1 forService:(id)arg2 messageBody:(id)arg3;
- (void)_cleanup;
- (id)init;
- (void)dealloc;

@end

