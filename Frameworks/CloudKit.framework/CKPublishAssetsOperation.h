//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperation : CKDatabaseOperation
{
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    CDUnknownBlockType _assetPublishedBlock;
    CDUnknownBlockType _publishAssetCompletionBlock;
    NSArray *_recordIDs;
}

@property(copy, nonatomic) CDUnknownBlockType assetPublishedBlock; // @synthesize assetPublishedBlock=_assetPublishedBlock;
@property(nonatomic) unsigned int URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned int requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType publishAssetCompletionBlock; // @synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock;
- (id)initWithRecordIDs:(id)arg1;
- (void).cxx_destruct;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end

