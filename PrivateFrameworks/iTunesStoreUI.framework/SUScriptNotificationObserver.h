//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface SUScriptNotificationObserver : NSObject
{
    NSLock *_lock;
    struct __CFSet *_receivers;
}

- (void)_accessibilityPerformEscape;
- (void)_accessibilityPerformScrollRight;
- (void)_accessibilityPerformScrollLeft;
- (void)_accessibilityPerformScrollDown;
- (void)_accessibilityPerformScrollUp;
- (void)_enumerateReceiversUsingBlock:(CDUnknownBlockType)arg1;
- (void)_softwareMapChangedNotification:(id)arg1;
- (void)_audioSessionsChangedNotification:(id)arg1;
- (void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_beginObservingNotifications;
- (void)_endObservingNotifications;
- (void)removeEventReceiver:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_networkTypeChangedNotification:(id)arg1;

@end

