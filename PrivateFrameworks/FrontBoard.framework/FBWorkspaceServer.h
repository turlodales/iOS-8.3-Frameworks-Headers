//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSSignal, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface FBWorkspaceServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    BSSignal *_invalidateSignal;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    NSMutableArray *_messagesQueuedForSend;
    id <FBWorkspaceServerDelegate> _delegate;
    unsigned int _transactionBlockDepth;
    BOOL _triedToSendMessageInTransaction;
}

- (void)_queue_setXPCConnection:(id)arg1;
- (id)_handlerForSceneID:(id)arg1;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withSceneHandlerBlock:(CDUnknownBlockType)arg3;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_handleSceneDetachContext:(id)arg1;
- (void)_queue_handleSceneUpdateContext:(id)arg1;
- (void)_queue_handleSceneAttachContext:(id)arg1;
- (void)_queue_handleSceneDidReceiveActions:(id)arg1;
- (void)_queue_handleSceneDidUpdateClientSettings:(id)arg1;
- (void)_queue_handleDestroySceneRequest:(id)arg1;
- (void)_queue_handleCreateSceneRequest:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (void)_queue_clientExited;
- (void)_queue_invalidate;
- (void)sendSceneActionsEvent:(id)arg1;
- (void)sendDestroySceneEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendSceneUpdateEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendCreateSceneEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterSceneEventHandlerForSceneID:(id)arg1;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (void)sendActionsEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)_queue_sendMessage:(int)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(int)arg1 withMessagePacker:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)_queue_sendMessage:(int)arg1 withEvent:(id)arg2 withResponseEvent:(CDUnknownBlockType)arg3 ofType:(Class)arg4;
- (void)endTransaction;
- (void)beginTransaction;
- (id)auditToken;
- (id)_queue;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
@property(nonatomic) id <FBWorkspaceServerDelegate> delegate;
- (void)dealloc;

@end

