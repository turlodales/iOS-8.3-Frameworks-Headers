//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSIDQueryControllerDelegate.h"

@class NSString;

@interface IMPreferredServiceManager : NSObject <IDSIDQueryControllerDelegate>
{
}

+ (id)sharedPreferredServiceManager;
+ (BOOL)hasActiveiMessageAccount;
+ (BOOL)mmsEnabled;
+ (BOOL)isiMessageAvailable;
+ (BOOL)smsEnabled;
- (id)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 error:(char *)arg3 serverCheckCompletionBlock:(CDUnknownBlockType)arg4;
- (void)notifyOfServiceAvailabilityChange;
- (id)preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char *)arg4 serverCheckCompletionBlock:(CDUnknownBlockType)arg5;
- (id)_preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char *)arg4 serverCheckCompletionBlock:(CDUnknownBlockType)arg5;
- (unsigned int)__preferrediMessageFallbackServiceForRecipientCount:(int)arg1 iMessageAvailable:(BOOL)arg2 options:(unsigned int)arg3 error:(char *)arg4;
- (unsigned int)__preferredServiceTypeForRecipientCount:(int)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned int)arg2 error:(char *)arg3 serverCheckCompletionBlock:(CDUnknownBlockType)arg4;
- (unsigned int)_optionsForRecipients:(id)arg1 inChat:(id)arg2;
- (unsigned int)__optionsForChat:(id)arg1;
- (void)_handleOperationalAccountsChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_handleConnectionChanged:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

