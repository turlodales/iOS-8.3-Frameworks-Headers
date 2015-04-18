//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLTimeReferenceManager.h"

@class NSDictionary, NSString, PLSQLiteConnection, PLStorageOperator;

@interface PLTimeManager : NSObject <PLTimeReferenceManager>
{
    PLStorageOperator *_storageOperator;
    PLSQLiteConnection *_connection;
    NSDictionary *_timeReferences;
    NSDictionary *_notificationsToTimeReferences;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *notificationsToTimeReferences; // @synthesize notificationsToTimeReferences=_notificationsToTimeReferences;
@property(retain) NSDictionary *timeReferences; // @synthesize timeReferences=_timeReferences;
@property __weak PLStorageOperator *storageOperator; // @synthesize storageOperator=_storageOperator;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(int)arg2;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)initializeTimeOffsets;
- (id)initialMonotonicTime;
- (id)storageQueue;
- (void)logTimeEntry;
- (id)convertTime:(id)arg1 fromTimeReference:(int)arg2 toTimeReference:(int)arg3;
- (id)currentTimeFromTimeReference:(int)arg1 toTimeReference:(int)arg2;
@property __weak PLSQLiteConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

