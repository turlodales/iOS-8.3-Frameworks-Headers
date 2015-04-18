//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupTableViewController.h>

@class NSArray, PKPaymentPass, PKPaymentWebService, UIActivityIndicatorView, UIImage;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupTableViewController
{
    PKPaymentPass *_pass;
    PKPaymentWebService *_paymentWebService;
    NSArray *_verificationChannels;
    UIActivityIndicatorView *_activityIndicator;
    unsigned int _selectedIndex;
    UIImage *_passSnapshot;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    CDUnknownBlockType _verificationRequestHandler;
}

- (void)cancel:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType verificationRequestHandler; // @synthesize verificationRequestHandler=_verificationRequestHandler;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(retain, nonatomic) UIImage *passSnapshot; // @synthesize passSnapshot=_passSnapshot;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(int)arg3;
- (void)_showSendCodeError:(id)arg1;
- (void)_enableCells;
- (void)_disableCells;
- (void)_terminateFlow;
- (id)_detailTextLabelForChanne:(id)arg1;
- (void)_showRequestError:(id)arg1;
- (void)send:(id)arg1;

@end

