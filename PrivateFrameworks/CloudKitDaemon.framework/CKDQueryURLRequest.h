//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKQuery, CKRecordZoneID, NSArray, NSData, NSMutableArray;

@interface CKDQueryURLRequest : CKDURLRequest
{
    NSMutableArray *_queryResponses;
    CKQuery *_query;
    NSData *_cursor;
    unsigned int _limit;
    CKRecordZoneID *_zoneID;
    NSArray *_requestedFields;
    NSData *_resultsCursor;
}

- (int)operationType;
@property(retain, nonatomic) NSArray *queryResponses; // @synthesize queryResponses=_queryResponses;
@property(nonatomic) unsigned int limit; // @synthesize limit=_limit;
- (id)zoneIDsToLock;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned int)arg3 requestedFields:(id)arg4 zoneID:(id)arg5;
@property(retain, nonatomic) NSData *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
- (BOOL)allowsAnonymousAccount;
@property(retain, nonatomic) NSArray *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKQuery *query; // @synthesize query=_query;

@end

