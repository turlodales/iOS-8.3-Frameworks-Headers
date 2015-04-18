//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BiometricKitDelegate.h"

@class BiometricKit, NSCountedSet, NSHashTable, NSString;

@interface SBUIBiometricEventMonitor : NSObject <BiometricKitDelegate>
{
    BiometricKit *_biometricKit;
    id <SBUIBiometricEventMonitorDelegate> _delegate;
    NSHashTable *_observers;
    unsigned int _lastEvent;
    NSCountedSet *_matchingDisabledRequesters;
    NSCountedSet *_fingerDetectRequesters;
    NSCountedSet *_activePasscodeViews;
    BOOL _matchingEnabled;
    BOOL _fingerDetectionEnabled;
    BOOL _screenIsOff;
    BOOL _deviceLocked;
    BOOL _lockScreenTopmost;
    BOOL _shouldSendFingerOffNotification;
}

+ (id)sharedInstance;
- (void)_deviceWillWake;
- (void)noteScreenWillTurnOn;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOff;
- (void)_setDeviceLocked:(BOOL)arg1;
- (void)setLockScreenTopmost:(BOOL)arg1;
- (void)setFingerDetectEnabled:(BOOL)arg1 requester:(id)arg2;
- (void)setMatchingDisabled:(BOOL)arg1 requester:(id)arg2;
- (id)stringForEvent:(unsigned int)arg1;
- (void)_stopMatching;
- (void)_startMatching;
- (void)_reevaluateMatching;
- (void)_profileSettingsChanged:(id)arg1;
- (void)_setMatchingEnabled:(BOOL)arg1;
- (BOOL)hasEnrolledIdentities;
@property(readonly, nonatomic, getter=isMatchingEnabled) BOOL matchingEnabled; // @synthesize matchingEnabled=_matchingEnabled;
@property(readonly, nonatomic) unsigned int lockoutState;
- (void)disableMatchingForPasscodeView:(id)arg1;
- (void)enableMatchingForPasscodeView:(id)arg1;
- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(id)arg1 withDetails:(id)arg2;
- (void)_updateHandlersForEvent:(unsigned int)arg1;
- (void)_stopFingerDetection;
- (void)_startFingerDetection;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
@property(nonatomic) id <SBUIBiometricEventMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

