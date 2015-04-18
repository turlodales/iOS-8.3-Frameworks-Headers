//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SSSQLiteDatabase;

@interface SSVPlayActivityTable : NSObject
{
    SSSQLiteDatabase *_database;
}

+ (id)_propertiesDatabaseTableName;
+ (id)_eventsDatabaseTableName;
+ (BOOL)_setupDatabase:(id)arg1;
+ (id)databasePath;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(CDUnknownBlockType)arg1 count:(unsigned int)arg2;
- (void)_getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(BOOL)arg6 additionalRevisionsIndexSet:(id)arg7 error:(id *)arg8;
- (BOOL)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;
- (id)_valueForDatabasePropertyKey:(id)arg1;
- (BOOL)_removeDatabaseReturningError:(id *)arg1;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (void)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 error:(id *)arg7;
- (BOOL)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id *)arg2;
@property(nonatomic) unsigned long long currentEventsRevision;
- (BOOL)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id *)arg3;
- (void)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 error:(id *)arg6;
@property(readonly, copy, nonatomic) NSString *eventsRevisionVersionToken;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)init;

@end

