//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RUIObjectModelDelegate.h"

@class ACAccount, ACAccountStore, NSDictionary, NSMutableArray, NSString, RUILoader, UIAlertView, UINavigationController, UIViewController;

@interface AAUIAccountRepairRemoteUI : NSObject <RUIObjectModelDelegate>
{
    UINavigationController *_parentNavController;
    UIViewController *_originatingViewController;
    UINavigationController *_accountRepairUIViewController;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    BOOL _isModal;
    UIAlertView *_tcConfirmationAlert;
    NSString *_agreeURL;
    CDUnknownBlockType _linkLoadCompletion;
    NSDictionary *_cookieHeadersForRepairRequest;
    id <AAUIAccountRepairRemoteUIDelegate> _delegate;
}

- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)useCookieHeadersForInitialRequest:(id)arg1;
- (void)_cleanupRUILoader;
- (void)_cleanUpAndDismissWithSuccess:(BOOL)arg1;
- (void)_displayConnectionErrorAndDismiss;
- (void)_addHeadersToRequest:(id)arg1;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
@property(nonatomic) __weak id <AAUIAccountRepairRemoteUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelButtonTapped:(id)arg1;
- (void)presentFromViewController:(id)arg1 modal:(BOOL)arg2;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

