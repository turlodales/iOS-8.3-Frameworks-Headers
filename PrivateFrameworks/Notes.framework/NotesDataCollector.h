//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSDictionary, NSObject<OS_dispatch_group>, NotesDataCollectorLogger;

@interface NotesDataCollector : NSObject
{
    BOOL _automaticCollectionOn;
    NotesDataCollectorLogger *_logger;
    ACAccountStore *_accountStore;
    NSDictionary *_accountTypesPerIdentifierCache;
    NSObject<OS_dispatch_group> *_logDispatchGroup;
}

+ (void)clearSharedCollector;
+ (id)sharedCollector;
@property(retain, nonatomic) NotesDataCollectorLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *logDispatchGroup; // @synthesize logDispatchGroup=_logDispatchGroup;
- (void)logNoteActivityType:(id)arg1;
- (void)stopAutomaticCollection;
- (id)classifyStoresByType:(id)arg1;
- (id)freshContext;
- (void)logStoreDeltaCount:(int)arg1 forType:(id)arg2;
- (void)logNoteDeltaCount:(int)arg1 forStoreType:(id)arg2;
- (void)logNoteCreationDeltaCountWithAppIdentifier:(int)arg1;
- (void)logNoteDeltaCount:(int)arg1;
- (void)browseAddedAndDeletedObjectsWithEntity:(id)arg1 inManagedObjectContext:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;
- (id)existingStoreForNote:(id)arg1;
- (void)logDeltaCountForChangedStoresInContext:(id)arg1;
- (void)logDeltaCountForChangedNotesInContext:(id)arg1;
- (id)storeTypeForAccountType:(int)arg1 accountIdentifier:(id)arg2;
- (id)existingAccountForStore:(id)arg1;
@property(copy) NSDictionary *accountTypesPerIdentifierCache; // @synthesize accountTypesPerIdentifierCache=_accountTypesPerIdentifierCache;
- (BOOL)isAppleAccountIdentifier:(id)arg1;
- (void)logNoteCountPerStore;
- (void)logStoreCount;
- (void)logTotalNoteCount;
- (void)performInitialCollectionIfNeeded;
- (void)noteContextWillSaveNotification:(id)arg1;
@property(nonatomic, getter=isAutomaticCollectionOn) BOOL automaticCollectionOn; // @synthesize automaticCollectionOn=_automaticCollectionOn;
- (void)startAutomaticCollection;
- (void)logChanges:(id)arg1;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

