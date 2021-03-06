//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, WFWhitelistSiteBuffer;

@interface WFUserSettings : NSObject
{
    NSDictionary *_userSettings;
    NSString *_userName;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

+ (BOOL)_isURLMetasite:(id)arg1;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_metasiteDomainNamesArray;
+ (id)metasitesExceptionPath;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)metasitesPath;
- (void)setWhiteListEnabled:(BOOL)arg1;
- (void)setContentFilterOverridesEnabled:(BOOL)arg1;
- (void)setContentFilterEnabled:(BOOL)arg1;
- (void)setRestrictWebEnabled:(BOOL)arg1;
- (BOOL)restrictWebEnabled;
- (BOOL)canEditAlwaysAllowHTTPS;
@property(readonly, nonatomic) BOOL canEditOverridesAllowed;
@property(nonatomic) BOOL overridesAllowed;
@property(readonly, nonatomic) BOOL canEditWhiteListAllowedSites;
@property(retain, nonatomic) NSArray *whiteListAllowedSites;
@property(readonly, nonatomic) BOOL canEditContentFilterOverriddenBlackListedSites;
@property(retain, nonatomic) NSArray *contentFilterOverriddenBlackListedSites;
@property(readonly, nonatomic) BOOL canEditContentFilterOverriddenWhiteListedSites;
@property(retain, nonatomic) NSArray *contentFilterOverriddenWhiteListedSites;
- (id)contentFilterOverriddenSites;
@property(readonly, nonatomic) BOOL canEditRestrictionType;
- (id)whiteListedSitesBuffer;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (BOOL)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
@property(nonatomic) int restrictionType;
- (BOOL)_addManagedDefaults:(id)arg1;
- (id)_userSettingsForUser:(id)arg1;
- (BOOL)_setManagedDefaults:(id)arg1;
- (id)_managedDefaultsPath;
- (BOOL)whiteListContainsURL:(id)arg1;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)arg1;
- (BOOL)autoWhitelistContainsURL:(id)arg1;
- (BOOL)contentFilterEnabled;
- (BOOL)contentFilterOverriddenBlackListContainsURL:(id)arg1;
- (void)setAlwaysAllowHTTPS:(BOOL)arg1;
- (BOOL)alwaysAllowHTTPS;
- (id)initWithUserName:(id)arg1;
- (BOOL)whiteListEnabled;
- (BOOL)contentFilterOverridesEnabled;
- (BOOL)contentFilterListsAllowURL:(id)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

