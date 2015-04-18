//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupTableViewController.h>

@class NSArray, PKPaymentWebService;

@interface PKPaymentCardsOnFileViewController : PKPaymentSetupTableViewController
{
    PKPaymentWebService *_paymentWebService;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSArray *_cardsOnFile;
}

- (void)cancel:(id)arg1;
- (void)viewDidLoad;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)_presentManualAddController;
- (void)_presentCardDetailsControllerForCredential:(id)arg1;
- (id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(int)arg3 delegate:(id)arg4;

@end

