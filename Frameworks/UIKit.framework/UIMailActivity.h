//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import "UIStateRestoring.h"

@class MFMailComposeViewController, NSString;

@interface UIMailActivity : UIActivity <UIStateRestoring>
{
    BOOL _keyboardVisible;
    BOOL _sourceIsManaged;
    BOOL _hasAnyAccount;
    BOOL _hasFilteredAccount;
    NSString *_autosaveIdentifier;
    MFMailComposeViewController *_mailComposeViewController;
}

+ (int)activityCategory;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_saveDraft:(id)arg1;
@property(retain, nonatomic) MFMailComposeViewController *mailComposeViewController; // @synthesize mailComposeViewController=_mailComposeViewController;
- (BOOL)_restoreDraft;
@property(retain, nonatomic) NSString *autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property(nonatomic) BOOL hasFilteredAccount; // @synthesize hasFilteredAccount=_hasFilteredAccount;
@property(nonatomic) BOOL hasAnyAccount; // @synthesize hasAnyAccount=_hasAnyAccount;
- (id)_stateRestorationDraftIsAvailable;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (id)_mailDraftRestorationURL;
@property(nonatomic) BOOL keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)_setSubject:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
@property(nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (id)activityViewController;
- (void)setSubject:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;
- (void)_cleanup;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end

