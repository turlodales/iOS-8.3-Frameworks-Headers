//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPMediaLibraryDataProvider.h"

@class MIPMultiverseIdentifier, NSArray, NSDate, NSDictionary, NSIndexSet, NSString;

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>

@optional
@property(readonly, nonatomic) BOOL companionDeviceActiveStoreAccountIsDynamiteEligible;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property(readonly, nonatomic) id <MPArtworkDataSource> completeMyCollectionArtworkDataSource;
@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property(readonly, nonatomic) NSArray *preferredAudioLanguages;
@property(readonly, nonatomic) BOOL isGeniusEnabled;
@property(readonly, nonatomic) NSString *databasePath;
- (MIPMultiverseIdentifier *)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2;
- (MIPMultiverseIdentifier *)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(NSString *)arg2;
- (id)valueForDatabaseProperty:(NSString *)arg1;
- (NSString *)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (void)updateEntitesToCurrentRevision;
- (BOOL)supportsEntityChangeTrackingForMediaEntityType:(unsigned int)arg1 collectionGroupingType:(int)arg2 dataProviderClass:(out Class *)arg3;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(NSString *)arg2;
- (void)releaseGeniusClusterPlaylist:(void *)arg1;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned int *)arg2 error:(id *)arg3;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned int)arg2 error:(id *)arg3;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL))arg4;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long *)arg1 atFilteredIndexes:(NSIndexSet *)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL))arg4;
- (void)addItemsWithIdentifiers:(long long *)arg1 count:(unsigned int)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL))arg4;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(BOOL))arg3;
- (BOOL)removePlaylistWithIdentifier:(long long)arg1;
- (BOOL)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned int)arg2 hideFromPurchaseHistory:(BOOL)arg3;
- (long long)addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(int)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (BOOL)isCurrentThreadInTransaction;
- (void)performReadTransactionWithBlock:(void (^)(void))arg1;
- (BOOL)performTransactionWithBlock:(BOOL (^)(void))arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(int)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithName:(NSString *)arg1 groupingType:(int)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long)arg2 groupingType:(int)arg3 existentPID:(unsigned long long *)arg4;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (BOOL)hasUbiquitousBookmarkableItems;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(unsigned int)arg1;
- (NSDate *)lastModifiedDate;
@end

