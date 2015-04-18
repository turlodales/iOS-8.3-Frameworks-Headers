//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIKeyboardArbitrationClient.h"
#import "_UIRemoteKeyboardControllerDelegate.h"

@class NSHashTable, NSString, NSXPCConnection, UIWindow, _UIKeyboardChangedInformation;

@interface _UIRemoteKeyboards : NSObject <_UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate>
{
    NSHashTable *_windowControllers;
    BOOL _currentKeyboard;
    NSXPCConnection *_connection;
    _UIKeyboardChangedInformation *_currentState;
}

+ (BOOL)enabled;
+ (id)sharedRemoteKeyboards;
- (void)setHostedWindowView:(id)arg1;
- (id)prepareForHostedWindow;
- (void)unregisterController:(id)arg1;
- (void)registerController:(id)arg1;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (void)setWindowEnabled:(BOOL)arg1;
@property BOOL currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
@property(readonly) id <_UIKeyboardArbitration> proxy;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)stopConnection;
- (void)didActivate:(id)arg1;
- (void)willDeactivate:(id)arg1;
- (void)startConnection;
- (void)completeMoveKeyboardForScreen:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
@property(readonly) float intersectionHeight;
@property(readonly) BOOL keyboardActive;
- (void)prepareToMoveKeyboard:(struct CGRect)arg1 showing:(BOOL)arg2 forScreen:(id)arg3;
- (void)performOnControllers:(CDUnknownBlockType)arg1;
@property(readonly) BOOL keyboardVisible;
@property(retain) _UIKeyboardChangedInformation *currentState; // @synthesize currentState=_currentState;
@property(readonly) UIWindow *keyboardWindow;
- (void)keyboardChanged:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

