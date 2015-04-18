//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class BRCServerZone, NSMutableArray, NSMutableDictionary, NSString;

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass>
{
    unsigned long long _requestID;
    NSMutableArray *_recordsToSave;
    NSMutableArray *_deletedRecordIDs;
    NSMutableArray *_deletedShareIDs;
    NSMutableArray *_recordsNeedingSharingInfo;
    NSMutableDictionary *_recordIDsToDeleteToEtags;
    NSMutableDictionary *_conflictLosersToResolveByRecordID;
    NSString *_stageID;
    CDUnknownBlockType _syncUpCompletionBlock;
    float _cost;
    BRCServerZone *_serverZone;
}

+ (id)syncUpOperationForZone:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long *)arg3;
@property(retain, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) float cost; // @synthesize cost=_cost;
@property(copy, nonatomic) CDUnknownBlockType syncUpCompletionBlock; // @synthesize syncUpCompletionBlock=_syncUpCompletionBlock;
@property(retain, nonatomic) NSString *stageID; // @synthesize stageID=_stageID;
@property(retain, nonatomic) NSMutableArray *recordsNeedingSharingInfo; // @synthesize recordsNeedingSharingInfo=_recordsNeedingSharingInfo;
@property(retain, nonatomic) NSMutableArray *deletedShareIDs; // @synthesize deletedShareIDs=_deletedShareIDs;
@property(retain, nonatomic) NSMutableArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
- (void)_scheduleModifyRecordsOperation;
@property(retain, nonatomic) NSMutableDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(retain, nonatomic) NSMutableDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(retain, nonatomic) NSMutableArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (BOOL)prepareWithMaxCost:(float)arg1 retryAfter:(unsigned long long *)arg2;
- (id)initWithZone:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (void)main;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

