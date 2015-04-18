//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSDate, NSString;

@interface CertInfoSheetViewController : UIViewController
{
    NSString *_serviceName;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_trustPurpose;
    NSDate *_trustExpiration;
    NSArray *_trustProperties;
    id <CertInfoSheetViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSDate *trustExpiration; // @synthesize trustExpiration=_trustExpiration;
@property(retain, nonatomic) NSString *trustPurpose; // @synthesize trustPurpose=_trustPurpose;
- (void)_pushDetailsView;
@property(retain, nonatomic) NSString *trustSubtitle; // @synthesize trustSubtitle=_trustSubtitle;
@property(retain, nonatomic) NSString *trustTitle; // @synthesize trustTitle=_trustTitle;
- (void)_accept;
- (void)_dismissWithResult:(int)arg1;
@property(retain, nonatomic) NSArray *trustProperties; // @synthesize trustProperties=_trustProperties;
- (void)_setupNavItem;
- (void)_cancel;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
@property(nonatomic) __weak id <CertInfoSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

@end
