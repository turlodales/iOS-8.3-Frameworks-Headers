//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DuetLoggerProtocol.h"

@class AppLaunchStatsSaveAndRestore, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSUserDefaults;

@interface AppLaunchStatsSBSettings : NSObject <DuetLoggerProtocol>
{
    NSObject<OS_dispatch_queue> *aplsSettingsQueue;
    CDUnknownBlockType callbackBlock;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    NSMutableDictionary *settingsBlacklist;
    NSUserDefaults *aplsSBSettingsDefault;
}

- (_Bool)isAppDisabledInSettingsList:(id)arg1;
- (_Bool)isManagedConfigurationSettingOn;
- (void)loadSettingsBlacklist;
- (void)saveContext:(id)arg1;
- (void)logLight:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void).cxx_destruct;
- (id)init:(CDUnknownBlockType)arg1;

@end
