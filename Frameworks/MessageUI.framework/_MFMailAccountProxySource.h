//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLock;

@interface _MFMailAccountProxySource : NSObject
{
    NSLock *_lock;
    NSArray *_accountProxies;
    int _lastSourceAccountManagementQueried;
    BOOL _registeredForNotifications;
    int _notifyToken;
}

+ (id)defaultInstance;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)_resetAccountsChanged:(BOOL)arg1;
- (void)_registerForNotifications_nts;
- (void)_deregisterForNotifications_nts;

@end
