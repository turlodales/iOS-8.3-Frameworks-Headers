//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPSDomainAccessor, NSDictionary, TLAccessQueue;

@interface TLVibrationManager : NSObject
{
    BOOL _needsRefresh;
    BOOL _allowsAutoRefresh;
    unsigned int _specialBehaviors;
    NSDictionary *_cachedSystemVibrationPatterns;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    TLAccessQueue *_accessQueue;
}

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned int)arg1 atInitiativeOfVibrationManager:(id)arg2;
+ (id)sharedVibrationManager;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1;
- (BOOL)_migrateLegacySettings;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id *)arg1;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (BOOL)_vibrationIsSettableForAlertType:(int)arg1;
- (id)defaultVibrationPatternForAlertType:(int)arg1;
- (id)defaultVibrationNameForAlertType:(int)arg1;
- (id)currentVibrationPatternForAlertType:(int)arg1;
- (id)currentVibrationNameForAlertType:(int)arg1;
@property(nonatomic) BOOL allowsAutoRefresh;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 didFindPersistedWatchAlertPolicy:(char *)arg3;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2;
- (unsigned int)_storedSystemVibrationDataMigrationVersion;
@property(readonly, nonatomic) BOOL shouldVibrateOnRing;
@property(readonly, nonatomic) BOOL shouldVibrateOnSilent;
- (BOOL)_booleanPreferenceForKey:(struct __CFString *)arg1 defaultValue:(BOOL)arg2;
- (BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id *)arg1;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id *)arg2;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id *)arg2;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_systemVibrationPatterns;
@property(retain, nonatomic, setter=_setCachedSystemVibrationPatterns:) NSDictionary *_cachedSystemVibrationPatterns; // @synthesize _cachedSystemVibrationPatterns;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1;
- (void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned int)arg3;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)defaultVibrationIdentifierForAlertType:(int)arg1;
- (id)_systemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
@property(readonly, nonatomic) NSDictionary *_userGeneratedVibrationPatterns;
- (void)_setNeedsRefresh:(BOOL)arg1;
@property(retain, nonatomic, setter=_setCachedUserGeneratedVibrationPatterns:) NSDictionary *_cachedUserGeneratedVibrationPatterns; // @synthesize _cachedUserGeneratedVibrationPatterns;
@property(nonatomic) BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(nonatomic, setter=_setSpecialBehaviors:) unsigned int _specialBehaviors; // @synthesize _specialBehaviors;
@property(nonatomic, setter=_setAllowsAutoRefresh:) BOOL _allowsAutoRefresh; // @synthesize _allowsAutoRefresh;
@property(readonly, nonatomic, getter=_isUnitTestingModeEnabled) BOOL _unitTestingModeEnabled;
- (id)_initWithSpecialBehaviors:(unsigned int)arg1;
@property(retain, nonatomic, setter=_setTransientNanoPreferencesDomainAccessor:) NPSDomainAccessor *_transientNanoPreferencesDomainAccessor; // @synthesize _transientNanoPreferencesDomainAccessor;
- (id)_newServiceConnection;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
- (BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (id)noneVibrationName;
- (id)currentVibrationIdentifierForAlertType:(int)arg1;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2;
@property(readonly, nonatomic) BOOL shouldVibrateForCurrentRingerSwitchState;
- (id)noneVibrationPattern;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)refresh;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (BOOL)vibrationWithIdentifierIsValid:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;

@end

