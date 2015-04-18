//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, SKUIClientContext, SKUIRedeemConfiguration, UIViewController;

@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject <UIAlertViewDelegate>
{
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
    SKUIRedeemConfiguration *_redeemConfiguration;
}

+ (void)beginThrottleInterval;
+ (BOOL)shouldShowAlertForRedeem:(id)arg1 configuration:(id)arg2;
- (id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

