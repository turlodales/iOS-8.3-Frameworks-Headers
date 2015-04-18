//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScreen, UIViewController, UIWindow;

@interface CKStarkManager : NSObject
{
    BOOL _isStarkConnected;
    UIViewController *_starkRootViewController;
    UIWindow *_starkWindow;
    UIScreen *_starkScreen;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIWindow *starkWindow; // @synthesize starkWindow=_starkWindow;
@property(retain, nonatomic) UIViewController *starkRootViewController; // @synthesize starkRootViewController=_starkRootViewController;
@property(retain, nonatomic) UIScreen *starkScreen; // @synthesize starkScreen=_starkScreen;
- (void)detachStarkScreen:(id)arg1;
- (void)screenDidDisconnectNotification:(id)arg1;
- (void)screenDidConnectNotification:(id)arg1;
- (void)attachStarkToScreen:(id)arg1;
- (void)startListeningForScreenNotifications;
@property(readonly, nonatomic) BOOL isStarkConnected; // @synthesize isStarkConnected=_isStarkConnected;
- (id)init;
- (void)dealloc;

@end

