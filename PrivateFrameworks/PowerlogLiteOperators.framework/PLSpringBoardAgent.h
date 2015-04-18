//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class NSDictionary, PLAccountingGroup, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLNSTimerOperatorComposition;

@interface PLSpringBoardAgent : PLAgent
{
    BOOL _autoLockIsNil;
    PLNSNotificationOperatorComposition *_notificationSBScreenTimeTrackingChanged;
    PLCFNotificationOperatorComposition *_notificationSBLockTrackingChanged;
    PLCFNotificationOperatorComposition *_notificationSBBlankTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBWallpaperTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBLocalNotificationFired;
    PLNSNotificationOperatorComposition *_notificationSBRemoteNotificationReceived;
    PLNSNotificationOperatorComposition *_notificationSBAutoLockTimerFiredNotification;
    PLNSTimerOperatorComposition *_dailyWallpaperPoll;
    PLEntryNotificationOperatorComposition *_displayOffNotification;
    NSDictionary *_screenNumberToName;
    PLAccountingGroup *_appAccountingGroup;
}

+ (id)entryEventForwardDefinitionWallpaper;
+ (id)entryEventForwardDefinitionScreen;
+ (id)entryEventForwardDefinitionLock;
+ (id)entryEventForwardDefinitionBlank;
+ (id)entryEventPointLocalRemoteNotifications;
+ (id)entryEventPointAutoLock;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (void)load;
@property(retain) PLEntryNotificationOperatorComposition *displayOffNotification; // @synthesize displayOffNotification=_displayOffNotification;
@property(retain) PLNSTimerOperatorComposition *dailyWallpaperPoll; // @synthesize dailyWallpaperPoll=_dailyWallpaperPoll;
@property(readonly) PLNSNotificationOperatorComposition *notificationSBAutoLockTimerFiredNotification; // @synthesize notificationSBAutoLockTimerFiredNotification=_notificationSBAutoLockTimerFiredNotification;
@property(readonly) PLNSNotificationOperatorComposition *notificationSBRemoteNotificationReceived; // @synthesize notificationSBRemoteNotificationReceived=_notificationSBRemoteNotificationReceived;
@property(readonly) PLNSNotificationOperatorComposition *notificationSBLocalNotificationFired; // @synthesize notificationSBLocalNotificationFired=_notificationSBLocalNotificationFired;
@property(readonly) PLNSNotificationOperatorComposition *notificationSBWallpaperTrackingChanged; // @synthesize notificationSBWallpaperTrackingChanged=_notificationSBWallpaperTrackingChanged;
@property(readonly) PLCFNotificationOperatorComposition *notificationSBBlankTrackingChanged; // @synthesize notificationSBBlankTrackingChanged=_notificationSBBlankTrackingChanged;
@property(readonly) PLCFNotificationOperatorComposition *notificationSBLockTrackingChanged; // @synthesize notificationSBLockTrackingChanged=_notificationSBLockTrackingChanged;
@property(readonly) PLNSNotificationOperatorComposition *notificationSBScreenTimeTrackingChanged; // @synthesize notificationSBScreenTimeTrackingChanged=_notificationSBScreenTimeTrackingChanged;
@property(retain) NSDictionary *screenNumberToName; // @synthesize screenNumberToName=_screenNumberToName;
@property(retain) PLAccountingGroup *appAccountingGroup; // @synthesize appAccountingGroup=_appAccountingGroup;
- (void)closeLastOpenEventAtDate:(id)arg1;
@property BOOL autoLockIsNil; // @synthesize autoLockIsNil=_autoLockIsNil;
- (id)screenLock:(id)arg1;
- (void)setAutolockAG;
- (void)logNotification:(id)arg1 ofType:(id)arg2;
- (id)fetchSBWallpaperTypeForHomescreen:(BOOL)arg1;
- (void)addAccountingEvent:(id)arg1;
- (void)settingsChangedNotification:(id)arg1;
- (void)resetAutoLockIsNil;
- (void)setUpScreenNumberDictionary;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (id)init;
- (void)dealloc;

@end

