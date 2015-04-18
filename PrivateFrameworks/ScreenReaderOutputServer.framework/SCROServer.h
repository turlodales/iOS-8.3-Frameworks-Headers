//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface SCROServer : NSObject
{
    NSLock *_contentLock;
    id <SCROServerDelegate> _delegate;
    struct __CFRunLoopSource *_serverSource;
    struct __CFRunLoopSource *_deathSource;
    struct __CFRunLoopTimer *_deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    long _clientCount;
    BOOL _isRegisteredWithMach;
}

+ (id)sharedServer;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (oneway void)release;
- (BOOL)registerWithMach;
- (BOOL)isRegisteredWithMach;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg1;
- (struct __CFRunLoopTimer *)_deathTimer;
- (void)_setClientCount:(long)arg1;
- (long)_incrementClientCount;
- (long)_clientCount;
- (void)unregisterWithMach;
- (struct __CFRunLoopSource *)serverSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)delegate;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)retain;

@end
