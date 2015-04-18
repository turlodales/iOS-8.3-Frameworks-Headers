//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSString;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)popAllChangeBatchesWithError:(id *)arg1;
- (id)allChangeBatches;
- (BOOL)compactChangeBatchesWithError:(id *)arg1;
- (BOOL)popNextBatchWithError:(id *)arg1;
- (id)nextBatch;
- (BOOL)markChangesWithIdentifier:(id)arg1 withAlterationType:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (BOOL)appendChangeBatch:(id)arg1 error:(id *)arg2;
- (unsigned int)countOfQueuedBatches;
- (BOOL)deleteAllChangeBatchesWithError:(id *)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
@property(nonatomic, getter=isLocked) BOOL locked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

