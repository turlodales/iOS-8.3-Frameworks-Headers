//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalContainer.h>

@class BRCPrivateServerZone, BRCRelativePath, BRContainer, NSMutableArray, NSString;

@interface BRCPrivateLocalContainer : BRCLocalContainer
{
    NSMutableArray *_syncBarriers;
    BOOL _containerMetadataNeedsSyncUp;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

- (BOOL)removeSyncDownForAliasData:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (BOOL)existsByParentID:(id)arg1 andName:(id)arg2;
@property(readonly, nonatomic) BRCRelativePath *documentsPath;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (void)scheduleContainerMetadataSyncUp;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(char *)arg4;
@property(nonatomic) BOOL containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)updateWithPlist:(id)arg1;
- (id)initWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5;
- (void)setServerZone:(id)arg1;
- (BOOL)recomputeSyncBlockState;
- (void)_updateContainerMetadataFromRecord:(id)arg1;
@property(readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property(retain, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
- (BOOL)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (BOOL)printStatusLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
@property(readonly, nonatomic) BRCPrivateServerZone *privateZone;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (void)signalFaultingWatchers:(id)arg1;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)pathRelativeToRoot;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (id)asPrivateContainer;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id *)arg2;
- (id)plist;
@property(readonly, nonatomic) BOOL isSharedContainer;
@property(readonly, nonatomic) BOOL isPrivateContainer;
- (void).cxx_destruct;
- (void)resume;

@end
