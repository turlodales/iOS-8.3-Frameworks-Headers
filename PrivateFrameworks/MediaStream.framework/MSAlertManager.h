//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MSAlertManager : NSObject
{
    NSMutableDictionary *_personIDToNotification;
}

+ (id)sharedAlertManager;
- (void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_userDidRespondToNotification:(struct __CFUserNotification *)arg1 info:(id)arg2 responseFlags:(unsigned long)arg3;
- (void)_showNotificationInfo:(id)arg1;
- (void)_dismissNotificationForPersonID:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

