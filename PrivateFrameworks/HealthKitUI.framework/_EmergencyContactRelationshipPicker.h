//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray;

@interface _EmergencyContactRelationshipPicker : UITableViewController
{
    NSArray *_tokens;
    NSArray *_labels;
    id <_EmergencyContactRelationshipPickerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
@property(nonatomic) __weak id <_EmergencyContactRelationshipPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)_cancelTapped:(id)arg1;

@end

