//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

@interface CKDGetRecordsURLRequest : CKDURLRequest
{
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    CDUnknownBlockType _recordFetchedBlock;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    unsigned int _recordCount;
    NSMutableDictionary *_recordIDByRequestID;
    NSSet *_desiredKeys;
}

- (int)operationType;
@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
- (id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4;
@property(nonatomic) unsigned int recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // @synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs;
@property(retain, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(nonatomic) unsigned int URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned int requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (id)zoneIDsToLock;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;

@end

