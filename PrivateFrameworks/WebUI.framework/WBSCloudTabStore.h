//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface WBSCloudTabStore : NSObject
{
    NSMutableArray *_syncedCloudTabDevices;
    NSMutableDictionary *_deviceUUIDsToCloseRequests;
}

- (void)handleCloseTabRequests;
- (BOOL)closeAllTabsOnDevice:(id)arg1;
- (BOOL)closeTabs:(id)arg1 onDevice:(id)arg2;
- (BOOL)closeTab:(id)arg1 onDevice:(id)arg2;
- (void)pruneExpiredDevices;
- (void)resetSyncedCloudTabDevicesAndCloseRequests;
@property(readonly, copy, nonatomic) NSArray *syncedCloudTabDevices;
- (void)_setDictionaryInKeyValueStore:(int)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (id)_currentDeviceUUID;
- (BOOL)_closeTabs:(id)arg1 onDevice:(id)arg2;
- (BOOL)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2;
- (void)_removeObjectFromKeyValueStore:(int)arg1 forKey:(id)arg2;
- (void)_removeSyncedCloudTabsWithOutstandingCloseRequests;
- (void)_pruneOrphanedCloseRequests;
- (void)_addCloseRequestDictionary:(id)arg1 requestUUID:(id)arg2;
- (void)_addDeviceDictionary:(id)arg1 deviceUUID:(id)arg2;
- (id)_keyValueStoreDictionaryRepresentation:(int)arg1;
- (void)createSyncedCloudTabDevicesAndCloseRequests;
- (void).cxx_destruct;

@end
