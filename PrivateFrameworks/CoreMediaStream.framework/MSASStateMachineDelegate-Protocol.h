//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MSASAlbum, MSASAssetCollection, MSASComment, MSASSharingRelationship, MSASStateMachine, MSAsset, NSArray, NSDictionary, NSError, NSString;

@protocol MSASStateMachineDelegate
@property(nonatomic) MSASStateMachine *MSASCounterpartInstance;
- (void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(MSASStateMachine *)arg1;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFireScheduledEvent:(id)arg2 forAssetCollectionGUID:(NSString *)arg3 albumGUID:(NSString *)arg4 info:(NSDictionary *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishAddingComment:(MSASComment *)arg2 toAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishRemovingSharingRelationship:(MSASSharingRelationship *)arg2 fromOwnedAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishSendingInvitationByPhone:(NSString *)arg2 toOwnedAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishAddingSharingRelationships:(NSArray *)arg2 toOwnedAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishAddingAssetCollection:(MSASAssetCollection *)arg2 toAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didRequestAssetsForAddingAssetCollections:(NSArray *)arg2 inAlbum:(MSASAlbum *)arg3 specifications:(NSArray *)arg4 info:(NSDictionary *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishUpdatingAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishCreatingAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishDeletingComment:(MSASComment *)arg2 inAssetCollection:(MSASAssetCollection *)arg3 inAlbum:(MSASAlbum *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishDeletingAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishDeletingAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishRetrievingAsset:(MSAsset *)arg2 inAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishEnqueueingAssetsForDownload:(NSArray *)arg2 inAlbumWithGUID:(NSString *)arg3;
- (BOOL)MSASStateMachine:(MSASStateMachine *)arg1 didQueryIsAssetCollectionWithGUIDInModel:(NSString *)arg2;
- (NSString *)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (MSASAlbum *)MSASStateMachineDidRequestAlbumWithGUID:(NSString *)arg1;
- (NSString *)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (NSString *)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishSettingSyncedStateForAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 assetStateCtag:(NSString *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishSettingSyncedStateForAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4 newAlbumStateCtag:(NSString *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishCheckingForAlbumSyncedStateChangesInAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4 newAlbumStateCtag:(NSString *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindAlbumSyncedState:(NSDictionary *)arg2 forAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindAssetCollectionSyncedState:(NSDictionary *)arg2 forAssetCollectionGUID:(NSString *)arg3 inAlbum:(MSASAlbum *)arg4 assetCollectionStateCtag:(NSString *)arg5 info:(NSDictionary *)arg6;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 willCheckForAlbumSyncedStateChangesInAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishCheckingForCommentChangesInAssetCollectionWithGUID:(NSString *)arg2 largestCommentID:(int)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindCommentChanges:(NSArray *)arg2 inAssetCollectionWithGUID:(NSString *)arg3 inAlbumWithGUID:(NSString *)arg4 info:(NSDictionary *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishUnsubscribingFromAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishSubscribingToAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishUpdatingAssetCollections:(NSArray *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 willUpdateAssetCollections:(NSArray *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishGettingAccessControls:(NSArray *)arg2 forAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindNewURLString:(NSString *)arg2 forAlbumWithGUID:(NSString *)arg3 info:(NSDictionary *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishCheckingForUpdatesInAlbums:(NSArray *)arg2 info:(NSDictionary *)arg3;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishCheckingForUpdatesInAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindChangesInAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindAssetCollectionChanges:(NSArray *)arg2 forAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 willCheckForUpdatesInAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFinishCheckingForChangesInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(NSArray *)arg2 info:(NSDictionary *)arg3;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindAccessControlChangesForAlbumGUIDS:(NSArray *)arg2 info:(NSDictionary *)arg3;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindAlbumChanges:(NSArray *)arg2 info:(NSDictionary *)arg3;
- (void)MSASStateMachine:(MSASStateMachine *)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(NSArray *)arg2 albumChanges:(NSArray *)arg3 accessControlChangesForAlbumGUIDS:(NSArray *)arg4 info:(NSDictionary *)arg5;
- (void)MSASStateMachineDidFindGlobalResetSync:(MSASStateMachine *)arg1 info:(NSDictionary *)arg2;
- (void)MSASStateMachineDidStart:(MSASStateMachine *)arg1;
@end

