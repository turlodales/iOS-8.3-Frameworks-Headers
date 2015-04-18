//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDModifyWebSharingOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _recordWebSharedBlock;
    CDUnknownBlockType _recordWebUnsharedBlock;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSArray *_recordIDsToShareReadWrite;
    NSMutableSet *_fetchedRecordIDs;
    NSMutableDictionary *_recordsToSaveByID;
    int _numSaveAttempts;
}

@property(retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // @synthesize recordsToSaveByID=_recordsToSaveByID;
@property(retain, nonatomic) NSMutableSet *fetchedRecordIDs; // @synthesize fetchedRecordIDs=_fetchedRecordIDs;
@property(retain, nonatomic) NSArray *recordIDsToUnshare; // @synthesize recordIDsToUnshare=_recordIDsToUnshare;
@property(retain, nonatomic) NSArray *recordIDsToShare; // @synthesize recordIDsToShare=_recordIDsToShare;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(id)arg1 error:(id *)arg2;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
@property(nonatomic) int numSaveAttempts; // @synthesize numSaveAttempts=_numSaveAttempts;
@property(copy, nonatomic) CDUnknownBlockType recordWebUnsharedBlock; // @synthesize recordWebUnsharedBlock=_recordWebUnsharedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWebSharedBlock; // @synthesize recordWebSharedBlock=_recordWebSharedBlock;
- (void)_saveRecords;
- (void)_fetchRecords;
@property(retain, nonatomic) NSArray *recordIDsToShareReadWrite; // @synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite;
- (BOOL)makeStateTransition;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)nameForState:(unsigned int)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
- (void)main;

@end

