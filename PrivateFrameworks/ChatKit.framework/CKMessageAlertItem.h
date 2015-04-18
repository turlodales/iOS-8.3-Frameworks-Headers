//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKAlertItem.h>

#import "NCInteractiveNotificationHostDelegate.h"

@class BBBulletin, CKIMDBMessage, NCInteractiveNotificationHostViewController, NSString;

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate>
{
    CKIMDBMessage *_message;
    BOOL _playedSound;
    BBBulletin *_bulletin;
    BOOL _showingImage;
    NCInteractiveNotificationHostViewController *_replyViewController;
    NCInteractiveNotificationHostViewController *_audioPlaybackViewController;
}

+ (void)playMessageReceived;
+ (void)setLastMessageSenderID:(int)arg1;
+ (void)stopPlayingCurrentAlertTone;
+ (int)lastMessageSenderID;
@property(retain, nonatomic) NCInteractiveNotificationHostViewController *audioPlaybackViewController; // @synthesize audioPlaybackViewController=_audioPlaybackViewController;
@property(retain, nonatomic) NCInteractiveNotificationHostViewController *replyViewController; // @synthesize replyViewController=_replyViewController;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)hostViewController:(id)arg1 didDismissPresentedViewController:(id)arg2;
- (void)performUnlockAction;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)dismissOnLock;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (Class)alertSheetClass;
- (void)hostViewController:(id)arg1 didEnable:(BOOL)arg2 actionAtIndex:(unsigned int)arg3;
- (void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(id)arg1;
- (id)messageText;
@property(nonatomic) BOOL showingImage; // @synthesize showingImage=_showingImage;
- (void)reply;
- (BOOL)isAudioPlaybackAlert;
- (BOOL)isReplyAlert;
- (void)didDeactivateForReason:(int)arg1;
- (id)alertImage;
- (BOOL)shouldHideSMSPreview;
- (id)accessoryView;
- (void)willPresentAlertView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)name;
- (void)dealloc;
- (id)address;
- (id)_groupID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

