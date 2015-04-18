//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCServiceArchiver.h"

@class NSBundle, NSDictionary, NSObject<OS_xpc_object>, NSString;

@interface XPCServiceBundle : NSObject <XPCServiceArchiver>
{
    NSBundle *_bundle;
    NSString *_serviceIdentifier;
    long _serviceIdentifierPredicate;
    NSString *_executablePath;
    long _executablePathPredicate;
    NSString *_realExecutablePath;
    long _realExecutablePathPredicate;
    int _serviceType;
    long _serviceTypePredicate;
    NSDictionary *_serviceDictionary;
    long _serviceDictionaryPredicate;
    NSDictionary *_launchdJobDictionary;
    long _launchdJobDictionaryPredicate;
    NSObject<OS_xpc_object> *_xpcJobData;
    long _xpcJobDataPredicate;
}

+ (id)XPCServiceBundleFromExecutableAtPath:(id)arg1;
+ (id)createXPCJobsArrayFromArray:(id)arg1;
+ (struct _launch_data *)createLaunchDataFromArray:(id)arg1;
+ (BOOL)useRestrictiveRoleAccountSecurityPolicy;
+ (id)XPCServiceBundleAtPath:(id)arg1;
+ (id)XPCServiceBundleForMainExecutable;
- (id)xpcJobData;
- (struct _launch_data *)launchdJobLaunchData;
- (id)launchdJobPropertyListString;
- (BOOL)isSystemService;
- (id)arrayForServiceDictionaryKey:(id)arg1;
- (id)dictionaryForServiceDictionaryKey:(id)arg1;
- (BOOL)boolForServiceDictionaryKey:(id)arg1;
- (id)archiveForCache;
- (id)launchdJobPropertyListData;
- (id)objectForServiceDictionaryKey:(id)arg1;
- (id)realExecutablePath;
- (id)launchdJobDictionary;
- (id)stringForServiceDictionaryKey:(id)arg1;
- (id)serviceDictionary;
- (id)initWithArchive:(id)arg1;
- (int)serviceType;
- (id)initWithBundle:(id)arg1;
- (id)bundle;
- (id)executablePath;
- (id)identifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)descriptionWithIndent:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

