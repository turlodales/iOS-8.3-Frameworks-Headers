//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIDonationStepViewController.h>

#import "SKUIDonationConfigurationObserver.h"

@class NSString, SKUIDonationAmountView, SKUIGiftPurchaseRequest, SKUIGiftValidationResponse, SKUIGiftValidator;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver>
{
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    BOOL _tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}

- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (void)_reenableAfterFailure;
- (void)_setDonationButtonEnabled:(BOOL)arg1;
- (void)_performActionAfterValidation;
- (void)_validateDonation:(id)arg1;
- (void)_amountChangedNotification:(id)arg1;
- (void)_donateButtonAction:(id)arg1;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (void)loadView;
- (void)dealloc;
- (void)_cancelButtonAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

