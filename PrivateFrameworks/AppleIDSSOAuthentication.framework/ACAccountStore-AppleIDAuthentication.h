//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccountStore.h"

@interface ACAccountStore (AppleIDAuthentication)
- (id)aida_accountForPrimaryiCloudAccount;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)_primaryiCloudAccount;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_AppleIDAuthenticationAccountType;
@end

