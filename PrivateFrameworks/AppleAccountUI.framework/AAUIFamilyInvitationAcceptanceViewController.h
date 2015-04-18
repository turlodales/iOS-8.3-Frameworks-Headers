//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

#import "AAUIConfirmIdentityViewControllerDelegate.h"
#import "RemoteUIControllerDelegate.h"

@class AAFamilyInvite, AAGrandSlamSigner, ACAccount, ACAccountStore, NSMutableURLRequest, NSOperationQueue, NSString, RemoteUIController;

@interface AAUIFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <AAUIConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAFamilyInvite *_invite;
    RemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}

- (id)initWithInvite:(id)arg1 grandSlamSigner:(id)arg2;
- (void)_showErrorAlert;
- (void)_loadiTunesLinkingRemoteUI;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)_sendUserToiTunesSettings;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AAUIFamilyInvitationAcceptanceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

