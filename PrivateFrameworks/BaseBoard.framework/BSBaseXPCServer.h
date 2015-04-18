//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface BSBaseXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    BOOL _connectionResumed;
    BOOL _usesAnonymousConnection;
    NSString *_serviceName;
    int _notifyToken;
}

- (void)resumeServer;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (id)queue;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
@property(nonatomic, getter=usesAnonymousConnection) BOOL usesAnonymousConnection; // @synthesize usesAnonymousConnection=_usesAnonymousConnection;
- (id)_copyEndpoint;
- (id)_clients;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (void)queue_handleMessage:(id)arg1;
- (id)_queue_clientForConnection:(id)arg1;
- (void)_queue_removeClientConnection:(id)arg1;
- (id)queue_newClientForConnection:(id)arg1;
- (BOOL)queue_shouldAcceptNewConnection:(id)arg1;
- (id)_notifyTokenName;
- (void)_addClientConnection:(id)arg1;
- (void)registerServerSuspended;
- (id)_connection;
- (id)initWithServiceName:(id)arg1;
- (void)_invalidate;
- (void)run;
- (void)dealloc;

@end

