//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKLocalPlayer.h"

@interface GKLocalPlayer (AuthenticationPrivate)
- (void)cancelAuthentication;
- (void)signOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)presentError:(id)arg1 forMode:(int)arg2;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (void)showViewController:(id)arg1 wrapInNavController:(BOOL)arg2;
- (void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showAuthenticateViewController;
- (void)showAuthorizeViewController;
- (void)handleUnderlyingErrorForAuthenticateError:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)completeAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)validateAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startLegacyAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAuthentication;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
@end

