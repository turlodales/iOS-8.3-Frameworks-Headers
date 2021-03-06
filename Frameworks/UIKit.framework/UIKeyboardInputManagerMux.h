//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray *_clients;
    id <_UIIVCResponseDelegateImpl> _responseDelegate;
    id <TIKeyboardInputManager> _systemInputManager;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;
- (void)removeAllClients;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;
- (BOOL)_systemHasKbd;
@property(retain, nonatomic) id <TIKeyboardInputManager> systemInputManager; // @synthesize systemInputManager=_systemInputManager;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)releaseConnectedClients;
- (void)setSystemInputManagerFromKeyboardState:(id)arg1;
@property(readonly, nonatomic) BOOL hasSystemInputManager;
@property(retain, nonatomic) id <_UIIVCResponseDelegateImpl> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

@end

