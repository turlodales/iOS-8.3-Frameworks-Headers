//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, PKPaymentSetupAboutView;

@interface PKPaymentSetupAboutViewController : UIViewController
{
    PKPaymentSetupAboutView *_privacyView;
    NSString *_aboutText;
    NSString *_privacyText;
}

- (void)done:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (void)_showPrivacyView:(id)arg1;
- (id)initWithAboutText:(id)arg1 privacyText:(id)arg2 presentedInModal:(BOOL)arg3;

@end

