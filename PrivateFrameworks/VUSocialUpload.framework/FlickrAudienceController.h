//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@interface FlickrAudienceController : UITableViewController
{
    int _audience;
    id <FlickrComposeOptionViewDelegate> _delegate;
}

+ (id)titleForAudience:(int)arg1;
@property(nonatomic) int audience; // @synthesize audience=_audience;
- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize)preferredContentSize;
@property(nonatomic) __weak id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

