//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, NSURL, SLVideoQualityOption;

@interface SLFacebookVideoOptionsViewController : UITableViewController
{
    NSArray *_qualityOptions;
    NSURL *_videoAssetURL;
    SLVideoQualityOption *_selectedOption;
    id <SLFacebookVideoOptionsDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
@property(nonatomic) __weak id <SLFacebookVideoOptionsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setSelectedQualityOption:(id)arg1;
- (id)initWithVideoAssetURL:(id)arg1;
- (void)_generateQualityOptionsWithAssetURL:(id)arg1;

@end

