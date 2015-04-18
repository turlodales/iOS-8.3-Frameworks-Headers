//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSFetchRequest, NSObject<OS_dispatch_queue>, PHBatchFetchingArray, PHQuery, _PHFetchRequestWrapper;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration>
{
    PHBatchFetchingArray *_fetchedObjects;
    NSArray *_seedOIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _registeredForChangeNotificationDeltas;
    unsigned int _photosCount;
    unsigned int _videosCount;
    unsigned int _audiosCount;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    int _chunkSizeForFetch;
    PHQuery *_query;
}

+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1;
+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2;
+ (id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 includeTrash:(BOOL)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
@property(readonly) NSFetchRequest *fetchRequest;
- (id)containerIdentifier;
- (id)photoLibrary;
@property int chunkSizeForFetch; // @synthesize chunkSizeForFetch=_chunkSizeForFetch;
- (id)initWithQuery:(id)arg1;
- (void).cxx_destruct;
- (id)objectsAtIndexes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) PHQuery *query; // @synthesize query=_query;
- (BOOL)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (unsigned int)indexOfObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) id firstObject;
- (id)objectAtIndex:(unsigned int)arg1;
@property(readonly) unsigned int count;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
@property(readonly) NSArray *fetchedObjectIDs;
- (id)objectIDAtIndex:(unsigned int)arg1;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (unsigned int)countOfAssetsWithMediaType:(int)arg1;
- (void)getMediaTypeCounts;
- (id)fetchedObjectIDsSet;
- (BOOL)isRegisteredForChangeNotificationDeltas;
- (void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1;
- (id)fetchedObjectsUsingManagedObjectContext:(id)arg1;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (BOOL)interestedInChange:(id)arg1;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (id)changeHandlingKey;
- (int)collectionFetchType;
- (id)pl_photoLibraryObject;
@property(readonly) NSArray *fetchedObjects;

@end

