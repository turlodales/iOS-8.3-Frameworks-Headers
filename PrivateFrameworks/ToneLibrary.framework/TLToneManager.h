//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPSDomainAccessor, NSDictionary, NSMutableDictionary, NSString, TLAccessQueue;

@interface TLToneManager : NSObject
{
    BOOL _shouldUseServiceToAccessTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSMutableDictionary *_iTunesToneIdentifiersByPID;
    NSMutableDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    NSDictionary *_previewBehaviorsByDefaultIdentifier;
    NSDictionary *_cachedTonePreferences;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    TLAccessQueue *_accessQueue;
}

+ (BOOL)_migrateLegacyToneSettings;
+ (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
+ (id)_systemWideTonePreferenceKeyForAlertType:(int)arg1;
+ (struct __CFString *)_copySharedResourcesPreferencesDomainForDomain:(struct __CFString *)arg1;
+ (id)sharedToneManager;
- (BOOL)_wasAffectedByAccidentalToneDeletion;
- (void)_handleDeviceRingtonesChangedNotification;
- (BOOL)_toneIsSettableForAlertType:(int)arg1;
- (void)_setWatchPrefersSalientNotifications:(BOOL)arg1;
- (BOOL)_watchPrefersSalientNotifications;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (int)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id *)arg1;
- (void)_removeAllSyncedData;
- (BOOL)_removeSyncedToneByPID:(id)arg1;
- (BOOL)_insertSyncedToneMetadata:(id)arg1 fileName:(id)arg2;
- (id)_iTunesToneForPID:(id)arg1;
- (id)_allSyncedTones;
- (BOOL)_transferPurchasedToITunes:(id)arg1;
- (BOOL)_insertPurchasedToneMetadata:(id)arg1 fileName:(id)arg2;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned long)currentToneSoundIDForAlertType:(int)arg1;
- (id)currentToneNameForAlertType:(int)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (unsigned long long)_installedTonesSize;
@property(nonatomic, setter=_setShouldIgnoreNextToneDidChangeNotification:) BOOL _shouldIgnoreNextToneDidChangeNotification; // @synthesize _shouldIgnoreNextToneDidChangeNotification;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned int)arg1;
@property(retain, nonatomic, setter=_setTransientNanoPreferencesDomainAccessor:) NPSDomainAccessor *_transientNanoPreferencesDomainAccessor; // @synthesize _transientNanoPreferencesDomainAccessor;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 didFindPersistedWatchAlertPolicy:(char *)arg3;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (id)_toneIdentifierForFileAtPath:(id)arg1;
- (int)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(BOOL)arg1 returningFilePathsForFoundOrphans:(id *)arg2 wasAffectedByAccidentalToneDeletion:(char *)arg3;
- (BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (BOOL)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (id)_defaultRingtoneName;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(char *)arg2;
- (id)_defaultRingtonePath;
@property(readonly, nonatomic) NSString *_systemRingtoneDirectory;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(char *)arg2;
- (BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1;
@property(retain, nonatomic, setter=_setAlertTonesByIdentifier:) NSMutableDictionary *_alertTonesByIdentifier; // @synthesize _alertTonesByIdentifier;
- (BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (id)filePathForToneIdentifier:(id)arg1;
- (unsigned long)soundIDForToneIdentifier:(id)arg1;
- (unsigned long)currentToneSoundIDForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned int)arg3;
- (BOOL)_setToneIdentifierUsingService:(id)arg1 keyedByAccountIdentifier:(id)arg2 forPreferenceKey:(id)arg3;
- (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_tonePreferencesFromService;
@property(nonatomic, setter=_setShouldUseServiceToAccessTonePreferences:) BOOL _shouldUseServiceToAccessTonePreferences; // @synthesize _shouldUseServiceToAccessTonePreferences;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)_newServiceConnection;
@property(retain, nonatomic, setter=_setCachedTonePreferences:) NSDictionary *_cachedTonePreferences; // @synthesize _cachedTonePreferences;
- (id)defaultRingtoneIdentifier;
@property(retain, nonatomic, setter=_setPreviewBehaviorsByDefaultIdentifier:) NSDictionary *_previewBehaviorsByDefaultIdentifier; // @synthesize _previewBehaviorsByDefaultIdentifier;
- (id)defaultToneIdentifierForAlertType:(int)arg1;
@property(retain, nonatomic, setter=_setToneIdentifierAliasMap:) NSDictionary *_toneIdentifierAliasMap; // @synthesize _toneIdentifierAliasMap;
- (id)_systemModernSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (BOOL)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(BOOL)arg3 alreadyLockedManifest:(BOOL)arg4 removedEntries:(id *)arg5;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (int)_lockManifestAtPath:(id)arg1;
- (BOOL)_ensureDirectoryExistsAtPath:(id)arg1;
- (BOOL)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(BOOL)arg4;
- (id)_installedTones;
@property(retain, nonatomic, setter=_setITunesTonesByIdentifier:) NSMutableDictionary *_iTunesTonesByIdentifier; // @synthesize _iTunesTonesByIdentifier;
@property(retain, nonatomic, setter=_setITunesToneIdentifiersByPID:) NSMutableDictionary *_iTunesToneIdentifiersByPID; // @synthesize _iTunesToneIdentifiersByPID;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property(readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
@property(readonly, nonatomic) NSString *_rootDirectory;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (void)_loadPreviewBehaviorsByDefaultIdentifier;
- (void)_loadToneIdentifierAliasMap;
- (void)_loadAlertToneInfo;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)newAVItemForToneIdentifier:(id)arg1;
- (unsigned long)_previewBehaviorForDefaultIdentifier:(id)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(char *)arg2;
- (BOOL)_filePathHasSupportedExtensionForRingtone:(id)arg1;
- (id)_iTunesToneWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property(readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
- (id)_aliasForToneIdentifier:(id)arg1;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)nameForToneIdentifier:(id)arg1;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;

@end

