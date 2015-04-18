//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUTrackActioning.h"
#import "RUTrackActionsDelegate.h"

@class NSString, RUTrackActionsView, UIImage;

@interface RUTrackActionsViewController : UIViewController <RUTrackActionsDelegate, RUTrackActioning>
{
    RUTrackActionsView *_trackActionsView;
    id <RUTrackActionsDelegate> _trackActionsDelegate;
}

+ (struct CGSize)artworkSize;
- (id)_trackActionsView;
- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (id)trackActioningObject:(id)arg1 localizedTitleForAction:(int)arg2;
- (void)trackActioningObjectDidChangeContentSize:(id)arg1;
@property(nonatomic) __weak id <RUTrackActionsDelegate> trackActionsDelegate; // @synthesize trackActionsDelegate=_trackActionsDelegate;
@property(copy, nonatomic) NSString *songText;
@property(nonatomic) int onActions;
@property(nonatomic) int enabledActions;
@property(copy, nonatomic) NSString *artistText;
@property(readonly, nonatomic) int cancelIndex;
- (int)actionForButtonIndex:(int)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
@property(retain, nonatomic) UIImage *artworkImage;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

