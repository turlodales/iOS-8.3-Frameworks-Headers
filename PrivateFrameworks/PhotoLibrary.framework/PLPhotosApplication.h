//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "UIApplicationDelegate.h"

@class BLActivityAlert, NSDictionary, NSString, PLUIController, UIWindow;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate>
{
    PLUIController *_uiController;
    BOOL _receivingRemoteControlEvents;
    UIWindow *_window;
    BOOL _urlNeedsHandling;
    int _observeForRechabilityChanges;
    BOOL _isReachable;
    BOOL _isOnWifi;
    BOOL _photoStreamIsBusy;
    BOOL _sharedPhotoStreamIsBusy;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
    BLActivityAlert *_iPhotoMigrationActivityAlert;
}

+ (void)initialize;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)photosPreferencesChanged;
@property(retain, nonatomic) BLActivityAlert *iPhotoMigrationActivityAlert; // @synthesize iPhotoMigrationActivityAlert=_iPhotoMigrationActivityAlert;
@property(retain, nonatomic) NSDictionary *currentTestOptions; // @synthesize currentTestOptions=_currentTestOptions;
@property(retain, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
- (BOOL)visitViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)useCompatibleSuspensionAnimation;
- (void)_finishExtendedTest;
- (void)presentInternalSettingsController;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateSuspensionSettings;
- (id)currentUIConfiguration;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_statusBarDoubleTap:(id)arg1;
- (void)sharedFinishedLaunching:(BOOL)arg1;
- (void)_registerForPhotoStreamActivityNotifications;
- (id)mainWindow;
- (void)_setImageOptions;
@property(readonly, nonatomic) BOOL isOnWifi; // @synthesize isOnWifi=_isOnWifi;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)setReceivingRemoteControlEvents:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isReachable; // @synthesize isReachable=_isReachable;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)rootViewController;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void *)getSharedAddressBook;
- (BOOL)shouldAllowSBAlertSupression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

