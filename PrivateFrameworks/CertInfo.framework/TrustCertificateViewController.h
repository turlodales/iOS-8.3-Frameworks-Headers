//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class CertificateViewController;

@interface TrustCertificateViewController : UINavigationController
{
    id <TrustCertificateViewControllerDelegate> _trustCertificateDelegate;
    CertificateViewController *_certificateViewController;
}

@property(retain, nonatomic) CertificateViewController *certificateViewController; // @synthesize certificateViewController=_certificateViewController;
@property(nonatomic) __weak id <TrustCertificateViewControllerDelegate> trustCertificateDelegate; // @synthesize trustCertificateDelegate=_trustCertificateDelegate;
- (void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(BOOL)arg5 properties:(id)arg6 action:(int)arg7;
- (id)initWithTrustCertificateDelegate:(id)arg1;
- (void)_accept;
- (void)_dismissWithResult:(int)arg1;
- (void)_setupNavItem;
- (void)setShowCertificateButton:(BOOL)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2 delegate:(id)arg3;
- (void)_cancel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;

@end

