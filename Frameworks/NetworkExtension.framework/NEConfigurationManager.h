//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEHelper, NSData, NSDictionary, NSKeyedUnarchiver, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface NEConfigurationManager : NSObject
{
    NSString *_description;
    NEHelper *_helper;
    BOOL _hasVPNAPIEntitlement;
    BOOL _hasReadPermission;
    BOOL _isVPNPublicAPI;
    BOOL _isNEHelper;
    NSUUID *_userUUID;
    id <NEConfigurationManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    int _changedNotifyToken;
    NSDictionary *_currentIndex;
    NSObject<OS_dispatch_queue> *_changedQueue;
    CDUnknownBlockType _changedHandler;
    NSMutableDictionary *_loadedIndex;
    NSMutableDictionary *_loadedConfigurations;
    NSKeyedUnarchiver *_decoder;
    NSData *_SCPreferencesSignature;
    NSString *_pluginType;
    long long _generation;
}

+ (id)sharedManager;
+ (id)sharedManagerForAllUsers;
+ (void)disableConfiguration:(id)arg1 onDemandOnly:(BOOL)arg2;
+ (int)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2;
+ (BOOL)configurationIsEnabled:(id)arg1;
+ (void)updateFlags:(unsigned long long *)arg1 withConfiguration:(id)arg2;
@property(retain) NSDictionary *currentIndex; // @synthesize currentIndex=_currentIndex;
@property long long generation; // @synthesize generation=_generation;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
@property(retain) id <NEConfigurationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;
- (void)dealloc;
@property BOOL isNEHelper; // @synthesize isNEHelper=_isNEHelper;
@property BOOL isVPNPublicAPI; // @synthesize isVPNPublicAPI=_isVPNPublicAPI;
@property BOOL hasVPNAPIEntitlement; // @synthesize hasVPNAPIEntitlement=_hasVPNAPIEntitlement;
- (void)copyIdentities:(id)arg1 fromDomain:(int)arg2 withCompletionQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)handleApplicationsRemoved:(id)arg1 pluginTypesRemoved:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(struct __SCPreferences *)arg4;
- (void)handleFileRemovedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setChangedQueue:(id)arg1 andHandler:(CDUnknownBlockType)arg2;
- (void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)syncWithSystemConfigurationWithAppNameCallback:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)postGeneration;
@property(copy) CDUnknownBlockType changedHandler; // @synthesize changedHandler=_changedHandler;
@property(retain) NSObject<OS_dispatch_queue> *changedQueue; // @synthesize changedQueue=_changedQueue;
- (void)updateSCPreferencesSignatureOnDisk;
- (id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences *)arg2;
- (id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences *)arg2 currentSignature:(id)arg3 userUUID:(id)arg4;
@property(retain) NSData *SCPreferencesSignature; // @synthesize SCPreferencesSignature=_SCPreferencesSignature;
- (id)makeMutableCopyOfIndex:(id)arg1;
- (BOOL)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2;
@property BOOL hasReadPermission; // @synthesize hasReadPermission=_hasReadPermission;
- (BOOL)configurationHasChanged:(id)arg1;
- (void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2;
@property(retain) NSMutableDictionary *loadedConfigurations; // @synthesize loadedConfigurations=_loadedConfigurations;
@property(retain) NSMutableDictionary *loadedIndex; // @synthesize loadedIndex=_loadedIndex;
@property int changedNotifyToken; // @synthesize changedNotifyToken=_changedNotifyToken;
- (void)getCurrentIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)copyChangedConfigurationIDs:(id)arg1;
- (id)errorWithCode:(int)arg1 specifics:(id)arg2;
- (BOOL)reloadFromDisk;
- (void)registerForChangeNotifications;
- (void)didLoadConfiguration:(id)arg1;
- (id)decodeConfigurationWithIdentifier:(id)arg1;
- (void)clearLoadedConfigurationsWithIDs:(id)arg1;
- (void)notifyChanges;
- (id)filterIndexWithFilter:(id)arg1;
@property(readonly) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(retain) NSKeyedUnarchiver *decoder; // @synthesize decoder=_decoder;
- (id)readIndexFromDiskWithError:(id *)arg1;
- (void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2;
- (void)sendRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserUUID:(id)arg1;
- (id)initWithPluginType:(id)arg1;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(readonly) NEHelper *helper;

@end

