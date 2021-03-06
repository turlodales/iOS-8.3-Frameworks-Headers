//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupTableViewController.h>

#import "UITextFieldDelegate.h"

@class CLInUseAssertion, NSString, PKPaymentCredential, PKPaymentWebService, PKWeakReference, RemoteUIController, UITextField;

@interface PKPaymentCardDetailsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate>
{
    RemoteUIController *_termsUIController;
    CLInUseAssertion *_CLInUse;
    float _maxHeaderWidth;
    BOOL _maxHeaderWidthCalculated;
    BOOL _isCUPDebit;
    UITextField *_dummyTextField;
    PKWeakReference *_setupDelegate;
    BOOL _termsPresented;
    BOOL _hideSetupLaterButton;
    BOOL _verifying;
    PKPaymentWebService *_webService;
    PKPaymentCredential *_paymentCredential;
    UITextField *_cscField;
}

+ (void)handlePassAlreadyProvisionedError;
+ (void)handleProvisioningError:(id)arg1 forApplicationIdentifier:(id)arg2 withSetupDelegate:(id)arg3;
+ (void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)headerView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic, getter=isComplete) BOOL complete;
@property(readonly, nonatomic, getter=isVerifying) BOOL verifying; // @synthesize verifying=_verifying;
@property(retain, nonatomic) PKPaymentCredential *paymentCredential; // @synthesize paymentCredential=_paymentCredential;
@property(nonatomic) BOOL hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (id)dummyTextField;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (BOOL)_showSetupAssistantVerificationAlertForRecord:(id)arg1 pass:(id)arg2;
- (id)initWithWebService:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3;
- (void)_showVerificationMethodsForPass:(id)arg1;
- (void)checkCard:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showEligibilityIssueWithCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayTermsForCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provisionCard:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handlePassSuccessfullyAdded:(id)arg1;
- (void)_showVerifiedUI;
- (void)_showVerifyingUI;
- (id)_contextSpecificStringForAggdKey:(id)arg1;
- (void)_showProvisioningError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopVerifyingUI;
@property(retain, nonatomic) UITextField *cscField; // @synthesize cscField=_cscField;
- (id)_imageForCredential:(id)arg1;
- (void)setupLater:(id)arg1;
- (void)addDifferentCard:(id)arg1;
- (void)handleNext:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate;
- (void)textFieldDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

