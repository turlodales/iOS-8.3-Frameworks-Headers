//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexSet, PHChange, PHFetchResultChangeDetails;

@interface PUPhotosDataSourceChange : NSObject
{
    int _previousCollectionsCount;
    NSDictionary *_assetCollectionToSectionCache;
    PHFetchResultChangeDetails *_collectionListChangeDetails;
    NSDictionary *_assetCollectionChangeDetails;
    BOOL _prepared;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    PHChange *_originatingPhotoLibraryChange;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)_prepareIncrementalDetails;
- (BOOL)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (void)prepareIfNeeded;
- (id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 previousCollectionsCount:(int)arg3 assetCollectionToSectionCache:(id)arg4 originatingPhotoLibraryChange:(id)arg5;
@property(readonly, copy) NSArray *contentChangedIndexPaths;
@property(readonly, copy) NSArray *changedIndexPaths;
@property(readonly, copy) NSArray *insertedIndexPaths;
@property(readonly, copy) NSArray *deletedIndexPaths;
@property(readonly, copy) NSIndexSet *changedSections;
@property(readonly, copy) NSIndexSet *insertedSections;
@property(readonly, copy) NSIndexSet *deletedSections;
- (BOOL)affectsSectionsInRange:(struct _NSRange)arg1;
@property(readonly) BOOL hasIncrementalChanges;
@property(readonly) PHChange *originatingPhotoLibraryChange; // @synthesize originatingPhotoLibraryChange=_originatingPhotoLibraryChange;

@end

