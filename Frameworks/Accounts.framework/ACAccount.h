//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ACAccountCredential, ACAccountStore, ACAccountType, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL;

@interface ACAccount : NSObject <NSSecureCoding>
{
    ACAccountStore *_store;
    NSString *_identifier;
    NSString *_accountDescription;
    NSString *_owningBundleID;
    NSString *_username;
    NSString *_authenticationType;
    NSString *_credentialType;
    NSString *_clientToken;
    BOOL _haveCheckedForClientToken;
    ACAccountType *_accountType;
    ACAccountCredential *_credential;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_dataclassProperties;
    BOOL _accountAccessAvailable;
    BOOL _authenticated;
    BOOL _active;
    BOOL _supportsAuthentication;
    BOOL _visible;
    NSURL *_objectID;
    NSDate *_date;
    NSDate *_lastCredentialRenewalRejectionDate;
    ACAccount *_parentAccount;
    BOOL _haveCheckedForParentAccount;
    NSString *_parentAccountIdentifier;
    BOOL _haveCheckedForChildAccounts;
    NSArray *_childAccounts;
    NSMutableSet *_enabledDataclasses;
    NSMutableSet *_provisionedDataclasses;
    NSMutableSet *_dirtyProperties;
    NSMutableSet *_dirtyAccountProperties;
    id _credentialsDidChangeObserver;
    CDUnknownBlockType _accountPropertiesTransformer;
    BOOL _creatingFromManagedObject;
}

+ (BOOL)supportsSecureCoding;
+ (id)_createNewAccountUID;
@property(retain, nonatomic) ACAccountType *accountType;
@property(nonatomic, getter=isAuthenticated) BOOL authenticated;
@property(readonly, nonatomic, getter=isDirty) BOOL dirty;
@property(copy, nonatomic) NSString *username;
- (BOOL)isProvisionedForDataclass:(id)arg1;
- (id)propertiesForDataclass:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
@property(retain, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSURL *objectID;
@property(readonly, nonatomic) NSString *credentialType;
- (void)setCredentialType:(id)arg1;
@property(retain, nonatomic) NSMutableSet *enabledDataclasses;
@property(retain, nonatomic) ACAccountCredential *credential;
- (id)credentialWithError:(id *)arg1;
@property(copy, nonatomic) NSString *accountDescription;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) __weak NSDictionary *accountProperties;
@property(readonly, nonatomic) NSString *parentAccountIdentifier;
- (id)accountPropertyForKey:(id)arg1;
@property(retain, nonatomic) NSMutableSet *provisionedDataclasses;
- (void)setAuthenticationType:(id)arg1;
@property(readonly, nonatomic) NSString *authenticationType;
@property(nonatomic) BOOL supportsAuthentication;
@property(readonly, nonatomic) BOOL supportsPush;
- (void)takeValuesFromModifiedAccount:(id)arg1;
- (BOOL)addClientToken:(id)arg1;
- (BOOL)isEnabledToSyncDataclass:(id)arg1;
- (BOOL)authenticated;
@property(readonly, nonatomic) NSString *clientToken;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
@property(retain, nonatomic) ACAccount *parentAccount;
- (id)initWithAccountType:(id)arg1;
@property(readonly, nonatomic) NSArray *childAccounts;
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
@property(retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate;
- (id)accountByCleaningThirdPartyTransformations;
- (id)initWithManagedAccount:(id)arg1;
- (void)markAllPropertiesDirty;
- (void)setDataclassProperties:(id)arg1;
@property(readonly, nonatomic) __weak NSDictionary *dataclassProperties;
@property(readonly, nonatomic) NSSet *dirtyAccountProperties; // @synthesize dirtyAccountProperties=_dirtyAccountProperties;
- (id)diffAccount:(id)arg1;
- (id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3;
- (void)_loadAllCachedProperties;
- (void)_setAccountStore:(id)arg1;
- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;
- (void)setOwningBundleID:(id)arg1;
- (id)owningBundleID;
- (void).cxx_destruct;
@property(nonatomic, getter=isVisible) BOOL visible;
@property(nonatomic, getter=isActive) BOOL active;
- (void)setIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) __weak NSString *identifier;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)reload;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSString *userFullName;
@property(readonly, nonatomic) __weak ACAccount *displayAccount;
- (BOOL)isPropertyDirty:(id)arg1;
@property(readonly, nonatomic) NSSet *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
- (void)_setObjectID:(id)arg1;
- (void)refresh;
@property(copy) CDUnknownBlockType accountPropertiesTransformer; // @synthesize accountPropertiesTransformer=_accountPropertiesTransformer;
@property(readonly, nonatomic) NSString *shortDebugName;
- (void)setCreatingFromManagedObject:(BOOL)arg1;
- (void)setProperties:(id)arg1 forDataclass:(id)arg2;
- (void)setAccountProperties:(id)arg1;
- (void)_markCredentialDirty;
- (id)fullDescription;
- (BOOL)_useParentForCredentials;
- (id)enabledAndSyncableDataclasses;
- (void)_markAccountPropertyDirty:(id)arg1;
- (void)credentialsChanged:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_installCredentialsChangedObserver;
- (void)_clearCachedCredentials;
- (void)_clearDirtyProperties;
- (void)_clearCachedChildAccounts;

@end
