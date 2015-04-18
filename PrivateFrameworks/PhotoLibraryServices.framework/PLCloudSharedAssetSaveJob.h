//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, MSASAssetCollection, NSArray, NSDictionary, NSString;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob
{
    BOOL _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    BOOL _isVideo;
    NSString *_currentFilePath;
    NSString *_currentCloudAssetGUID;
    unsigned int _currentCloudAssetMediaAssetType;
    NSString *_cloudAlbumGUID;
    NSString *_cloudPersonID;
    MSASAssetCollection *_currentCloudAssetCollection;
    NSArray *_assetCollectionInfos;
    NSArray *_cloudAssetGUIDsToDelete;
    NSDictionary *_mstreamdInfoDictionary;
    long long _jobType;
}

+ (id)placeholderImageProperties;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollectionWithGUID:(id)arg2 mediaAssetType:(unsigned int)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(BOOL)arg7;
+ (void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2;
+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned int)arg2;
+ (BOOL)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3;
@property(retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection; // @synthesize currentCloudAssetCollection=_currentCloudAssetCollection;
- (short)attemptLightweightReimportAssetData;
- (BOOL)_createPlaceHolderInSharedAlbum:(id)arg1;
- (BOOL)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2;
- (void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3;
- (unsigned int)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (BOOL)_parseISO6709String:(id)arg1 outLatitude:(double *)arg2 outLongitude:(double *)arg3;
- (void)saveJobAssetWithPlaceholderKind:(short)arg1;
- (short)placeHolderKindFromAssetMetadataType:(unsigned int)arg1;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationSaveAssetJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (BOOL)isProcessingThumbnail;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(retain, nonatomic) NSArray *assetCollectionInfos; // @synthesize assetCollectionInfos=_assetCollectionInfos;
@property(retain, nonatomic) NSArray *cloudAssetGUIDsToDelete; // @synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete;
@property(retain, nonatomic) NSString *cloudAlbumGUID; // @synthesize cloudAlbumGUID=_cloudAlbumGUID;
@property(retain, nonatomic) NSString *currentCloudAssetGUID; // @synthesize currentCloudAssetGUID=_currentCloudAssetGUID;
@property(nonatomic) unsigned int currentCloudAssetMediaAssetType; // @synthesize currentCloudAssetMediaAssetType=_currentCloudAssetMediaAssetType;
@property(retain, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
@property(nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSString *cloudPersonID; // @synthesize cloudPersonID=_cloudPersonID;
- (void)run;
- (id)description;
- (id)init;
- (void)dealloc;

@end

