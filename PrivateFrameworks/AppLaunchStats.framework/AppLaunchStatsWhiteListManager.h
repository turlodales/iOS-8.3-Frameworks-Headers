//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DuetLoggerProtocol.h"
#import "LSApplicationWorkspaceObserverProtocol.h"

@class AppLaunchStatsSaveAndRestore, LSApplicationWorkspace, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface AppLaunchStatsWhiteListManager : NSObject <LSApplicationWorkspaceObserverProtocol, DuetLoggerProtocol>
{
    NSObject<OS_dispatch_queue> *aplsWLMQueue;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    LSApplicationWorkspace *wlmAppWorkSpace;
    NSMutableArray *defaultsWriteWhiteList;
    NSMutableArray *launchServiceWhiteListFetch;
    NSMutableArray *launchServiceWhiteListPush;
    BOOL enableWhiteListCheck;
}

+ (id)instance;
@property(nonatomic) BOOL enableWhiteListCheck; // @synthesize enableWhiteListCheck;
- (void)saveContext:(id)arg1;
- (void)reloadConfiguration;
- (_Bool)isWhiteListed:(id)arg1 withFetch:(int)arg2;
- (void)logLight:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __asl_object_s *)arg1 withMsg:(struct __asl_object_s *)arg2 withLevel:(int)arg3;
- (_Bool)isAppInList:(id)arg1 withBundleID:(id)arg2;
- (void)addToMultiTaskingQueue:(id)arg1;
- (void)initSetup;
- (void).cxx_destruct;
- (id)init;
- (void)applicationsDidInstall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

