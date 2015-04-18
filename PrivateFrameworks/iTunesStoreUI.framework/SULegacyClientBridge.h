//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "SUOverlayBackgroundDelegate.h"

@class NSString, SUClientInterface, SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate>
{
    SUClientInterface *_clientInterface;
    SUOverlayBackgroundViewController *_overlayBackgroundViewController;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    UITabBarController *_rootViewController;
}

- (void)showPreviewOverlayAnimated:(BOOL)arg1;
@property(readonly, nonatomic) SUPreviewOverlayViewController *previewOverlayViewController;
- (void)hidePreviewOverlayAnimated:(BOOL)arg1;
- (void)_removePreviewOverlayViewController;
- (BOOL)performActionForDialog:(id)arg1 button:(id)arg2;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (id)_previewOverlayViewController;
- (void)dismissOverlayBackgroundViewController;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
@property(readonly, nonatomic) SUOverlayBackgroundViewController *overlayBackgroundViewController; // @synthesize overlayBackgroundViewController=_overlayBackgroundViewController;
- (id)initWithClientInterface:(id)arg1;
- (void)_showPreviewOverlayAnimated:(BOOL)arg1;
@property(readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UITabBarController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

