//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLCloudSharedAlbumProtocol.h"
#import "PLIndexMapperDataSource.h"
#import "PLIndexMappingCache.h"
#import "PLUserEditableAlbumProtocol.h"

@class NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSObject<PLAlbumProtocol>, NSOrderedSet, NSPredicate, NSString, NSURL, PLIndexMapper, PLManagedAsset, UIImage;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache>
{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    BOOL _backingAlbumSupportsEdits;
    BOOL _backingAlbumSupportsCloudShared;
    NSMutableOrderedSet *_weak_assets;
    BOOL isObservingContextChanges;
    struct NSObject *_backingAlbum;
    int filter;
    NSPredicate *predicate;
    NSArray *_filterParameters;
}

+ (struct NSObject *)unfilteredAlbum:(struct NSObject *)arg1;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 intersectFilter:(int)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 filter:(int)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 filter:(int)arg2 parameters:(id)arg3;
@property(nonatomic) BOOL isObservingContextChanges; // @synthesize isObservingContextChanges;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned int)arg2;
- (void)getFilteredAssets:(id *)arg1 range:(struct _NSRange)arg2;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)objectInFilteredAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInFilteredAssetsOfObject:(id)arg1;
- (unsigned int)countOfFilteredAssets;
@property(readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (id)currentStateForChange;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)_editableBackingAlbum;
- (void)_commonInitWithBackingAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
- (void)backingContextDidChange:(id)arg1;
- (id)_cloudSharedBackingAlbum;
@property(readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property(nonatomic) NSMutableOrderedSet *_assets;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum; // @synthesize backingAlbum=_backingAlbum;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 filter:(int)arg2 parameters:(id)arg3;
@property(readonly, nonatomic) NSArray *filterParameters; // @synthesize filterParameters=_filterParameters;
@property(nonatomic) int filter; // @synthesize filter;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isInTrash;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isWallpaperAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
- (void)batchFetchAssets:(id)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
@property(nonatomic) BOOL cloudNotificationsEnabled;
@property(readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property(readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property(readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSString *cloudPersonID;
@property(retain, nonatomic) NSDate *cloudLastContributionDate;
@property(retain, nonatomic) NSDate *cloudCreationDate;
@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property unsigned int unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber *unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet *invitationRecords;
@property(retain, nonatomic) NSString *publicURL;
@property(retain, nonatomic) NSDate *cloudSubscriptionDate;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property(retain, nonatomic) NSString *cloudOwnerEmail;
@property(retain, nonatomic) NSString *cloudOwnerFullName;
@property(retain, nonatomic) NSString *cloudOwnerLastName;
@property(retain, nonatomic) NSString *cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary *cloudMetadata;
@property(retain, nonatomic) NSString *cloudGUID;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned int *)arg1 count:(unsigned int *)arg2 showsProgress:(char *)arg3;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) BOOL isUserLibraryAlbum;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSString *uuid;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (unsigned int)count;
- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned int batchSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned int hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

