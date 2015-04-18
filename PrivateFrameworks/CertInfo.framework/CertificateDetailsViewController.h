//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray;

@interface CertificateDetailsViewController : UITableViewController
{
    id _certificateTrust;
    NSArray *_keyValueSections;
    NSArray *_keyValueSectionTitles;
}

- (void)_setup;
- (void)setCertificateProperties:(id)arg1;
@property(retain, nonatomic) NSArray *keyValueSectionTitles; // @synthesize keyValueSectionTitles=_keyValueSectionTitles;
@property(retain, nonatomic) id certificateTrust; // @synthesize certificateTrust=_certificateTrust;
- (void)preferredContentSizeChanged:(id)arg1;
@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithCertificate:(struct __SecCertificate *)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1;

@end

