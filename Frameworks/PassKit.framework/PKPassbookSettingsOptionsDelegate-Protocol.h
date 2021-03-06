//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSDictionary, NSString, PKPaymentPass;

@protocol PKPassbookSettingsOptionsDelegate <NSObject>
- (void)setDefaultPaymentPassIdentifier:(NSString *)arg1;
- (void)setDefaultContactPhone:(CNContact *)arg1;
- (void)setDefaultContactEmail:(CNContact *)arg1;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forPaymentPass:(PKPaymentPass *)arg2;
- (void)setDefaultShippingAddress:(CNContact *)arg1;
- (NSString *)defaultPaymentPassIdentifier;
- (CNContact *)defaultContactPhone;
- (CNContact *)defaultContactEmail;
- (NSDictionary *)defaultBillingAddresses;
- (CNContact *)defaultBillingAddressForPaymentPass:(PKPaymentPass *)arg1;
- (CNContact *)defaultShippingAddress;
@end

