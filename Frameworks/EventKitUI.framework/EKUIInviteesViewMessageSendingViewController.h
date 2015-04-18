//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"

@class EKEvent, NSString;

@interface EKUIInviteesViewMessageSendingViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    CDUnknownBlockType _messageSendingComplete;
    EKEvent *_event;
}

+ (BOOL)canShowForEvent:(id)arg1;
+ (id)_attendeesIgnorningMe:(id)arg1;
+ (id)_recipientEmailAddressesToDisplayNames:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
- (void)loadView;
@property(copy) CDUnknownBlockType messageSendingComplete; // @synthesize messageSendingComplete=_messageSendingComplete;
- (id)_htmlBodyForMailMessageWithNames:(id)arg1;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

