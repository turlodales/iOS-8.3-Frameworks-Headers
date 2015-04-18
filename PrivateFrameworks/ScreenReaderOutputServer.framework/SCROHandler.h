//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCROHandlerProtocol.h"

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol>
{
    id _callbackDelegate;
    NSLock *_lock;
    BOOL isInvalid;
}

- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
- (id)callbackDelegate;
- (void)setCallbackDelegate:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)invalidate;
- (id)init;
- (void)dealloc;

@end

