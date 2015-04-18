//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, NSArray, NSDictionary, NSSet, NSString;

@interface AAAccount : NSObject
{
    ACAccount *_account;
    NSString *_fmipToken;
    NSArray *_appleIDAliases;
    NSString *_protocolVersion;
}

+ (id)accountTypeString;
+ (id)dataclassesBoundToSingleAccount;
+ (id)dataclassesBoundToSyncAccount;
+ (id)dataclassesBoundToPrimaryAccount;
@property(nonatomic) BOOL primaryAccount;
@property(copy, nonatomic) NSString *username;
- (BOOL)isProvisionedForDataclass:(id)arg1;
- (id)propertiesForDataclass:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) BOOL needsRegistration;
@property(readonly, nonatomic) NSString *syncStoreIdentifier;
@property(readonly, nonatomic) NSArray *supportedDataclasses;
@property(readonly, nonatomic) NSSet *enabledDataclasses;
@property(copy, nonatomic) NSString *accountDescription;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
@property(readonly, nonatomic) NSSet *provisionedDataclasses;
@property(copy, nonatomic) NSString *password;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(copy, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (id)account;
- (BOOL)useCellularForDataclass:(id)arg1;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (id)initWithAccount:(id)arg1;
@property(copy, nonatomic) NSString *fmipToken; // @synthesize fmipToken=_fmipToken;
@property(nonatomic) BOOL needsToVerifyTerms;
- (void)lookupEmailAddresses:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)renewCredentialsForAppleIDWithHandler:(CDUnknownBlockType)arg1;
- (void)signInWithHandler:(CDUnknownBlockType)arg1;
- (void)setupChildMailAccountAndEnable:(BOOL)arg1 withEmail:(id)arg2;
- (void)updateAccountPropertiesWithHandler:(CDUnknownBlockType)arg1;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (void)removePasswordFromKeychain;
- (void)removeTokensFromKeychain;
- (void)saveFMIPTokenInKeychain;
- (void)savePasswordInKeychain;
- (void)saveTokensInKeychain;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (void)notifyUserOfQuotaDepletion;
- (id)_childAccounts;
- (int)mobileMeAccountStatus;
@property(readonly, nonatomic) BOOL needsEmailConfiguration;
- (void)setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
@property(readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property(readonly, nonatomic) BOOL serviceUnavailable;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
@property(readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property(readonly, nonatomic) NSDictionary *accountFooterButton;
@property(readonly, nonatomic) NSString *accountFooterText;
@property(readonly, nonatomic) int accountServiceType;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_mailChildAccount;
@property(readonly, nonatomic) BOOL primaryEmailVerified;
@property(readonly, nonatomic) NSArray *appleIDAliases; // @synthesize appleIDAliases=_appleIDAliases;
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDictionary *dataclassProperties;
@property(readonly, nonatomic) NSString *displayName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1;

@end

