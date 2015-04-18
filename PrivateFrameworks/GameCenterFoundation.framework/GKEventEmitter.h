//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject
{
    NSHashTable *_listeners;
    NSMutableArray *_supportedProtocols;
    BOOL _shouldQueue;
    NSMutableArray *_queuedEvents;
}

+ (id)eventEmitterForProtocols:(id)arg1;
+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(BOOL)arg2;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) NSMutableArray *queuedEvents; // @synthesize queuedEvents=_queuedEvents;
@property(nonatomic) BOOL shouldQueue; // @synthesize shouldQueue=_shouldQueue;
@property(retain, nonatomic) NSMutableArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;
- (void)dispatchQueuedEventsToListener:(id)arg1;
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(BOOL)arg2;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (BOOL)listenerRegisteredForSelector:(SEL)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;

@end

