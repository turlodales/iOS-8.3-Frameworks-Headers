//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupViewController.h>

@class UIButton;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupViewController
{
    UIButton *_skipButton;
}

+ (BOOL)setupAssistantNeedsToRun;
+ (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned int *)arg1;
- (void)dealloc;
- (void)privacyButtonTouched:(id)arg1;
- (void)skip:(id)arg1;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPaymentWebService:(id)arg1 context:(int)arg2 delegate:(id)arg3;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;

@end

