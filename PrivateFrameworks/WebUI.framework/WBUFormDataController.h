//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebUI/WBSFormDataController.h>

#import "UIActionSheetDelegate.h"

@class NSString;

@interface WBUFormDataController : WBSFormDataController <UIActionSheetDelegate>
{
    BOOL _savePending;
}

+ (BOOL)_isDevicePasscodeSet;
+ (BOOL)_isKeychainSyncEnabled;
@property(nonatomic) BOOL shouldAutoFillFromAddressBook;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (void)saveCompletionDBSoon;
- (BOOL)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (BOOL)_webView:(id)arg1 formSubmission:(BOOL)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 formSubmission:(BOOL)arg3 fromFrame:(id)arg4 usernameIsAutoFilled:(BOOL)arg5 passwordIsAutoFilled:(BOOL)arg6 submissionHandler:(CDUnknownBlockType)arg7;
- (BOOL)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formSubmission:(BOOL)arg3 formWithMetadata:(id)arg4 fromFrame:(id)arg5 username:(id)arg6 password:(id)arg7 usernameIsAutoFilled:(BOOL)arg8 passwordIsAutoFilled:(BOOL)arg9 submissionHandler:(CDUnknownBlockType)arg10;
- (BOOL)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_webView:(id)arg1 saveUsernameAndPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(BOOL)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_webView:(id)arg1 saveUsernameAndPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 isGeneratedPassword:(BOOL)arg7 confirmOverwritingCurrentPassword:(BOOL)arg8 submissionHandler:(CDUnknownBlockType)arg9;
- (void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned int)arg2 username:(id)arg3 host:(id)arg4 hasCredentialForCurrentHost:(BOOL)arg5 existingCredentialMatchesForCurrentHost:(id)arg6 otherSubdomainCredentialMatches:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_replaceCredentialsWithDontSaveMarkerForProtectionSpace:(id)arg1;
- (void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2;
- (id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3;
- (void)_autoFillPreferencesDidChange;
- (BOOL)shouldAutoFillFromCreditCardDataInFrame:(id)arg1;
- (BOOL)_shouldSaveUsernamesAndPasswordsInWebView:(id)arg1;
- (id)_addressBookMatchesForProxyProperty:(id)arg1;
- (id)_meCard;
- (id)completionDBPath;
- (BOOL)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(BOOL)arg4 usernameIsAutoFilled:(BOOL)arg5 passwordIsAutoFilled:(BOOL)arg6 submissionHandler:(CDUnknownBlockType)arg7;
- (void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (BOOL)mayPreFillInFrame:(id)arg1;
- (void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(BOOL)arg3;
- (void)prepareMeCard;
- (id)autoFillValuesForLoginForm:(id)arg1 inFrame:(id)arg2 potentialMatches:(id *)arg3;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoGeneratePasswordsInWebView:(id)arg1;
- (BOOL)mayFillCreditCardDataInFrame:(id)arg1;
- (void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id *)arg3 matchesForCurrentHost:(id *)arg4;
- (void)clearAllFormCredentials;
@property(nonatomic) BOOL shouldAutoFillFromCreditCardData;
@property(nonatomic) BOOL shouldAutoFillPasswords;
- (void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

