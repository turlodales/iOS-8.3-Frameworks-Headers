//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKNavigationController.h>

#import "PKPaymentSetupViewControllerDelegate.h"

@class NSArray, NSString, PKPaymentWebService;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate>
{
    PKPaymentWebService *_webService;
    int _context;
    id <PKPassLibraryDataProvider> _passLibraryProvider;
    NSArray *_eligibleCardsOnFile;
    id <PKPaymentSetupDelegate> _setupDelegate;
    NSArray *_prefetchedCredentials;
}

+ (id)viewControllerForPresentingPaymentError:(id)arg1;
- (void)cancel:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
@property(retain, nonatomic) NSArray *prefetchedCredentials; // @synthesize prefetchedCredentials=_prefetchedCredentials;
- (void)preflightWithRequirements:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPaymentWebService:(id)arg1 context:(int)arg2 libraryDataProvider:(id)arg3;
- (void)handlePassAlreadyProvisionedError;
- (void)handleProvisioningError:(id)arg1 forApplicationIdentifier:(id)arg2;
- (void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(nonatomic) id <PKPaymentSetupDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

