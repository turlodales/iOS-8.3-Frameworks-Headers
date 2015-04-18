//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLMomentAssetData_Private.h"
#import "UIActivityItemSource.h"
#import "_PLImageLoadingAsset.h"

@class CLLocation, NSArray, NSData, NSDate, NSDictionary, NSError, NSManagedObject, NSNumber, NSObject<NSCopying>, NSOrderedSet, NSSet, NSString, NSURL, PLAdditionalAssetAttributes, PLCloudFeedAssetsEntry, PLCloudMaster, PLMoment, UIImage;

@interface PLManagedAsset : PLManagedObject <UIActivityItemSource, PLMomentAssetData_Private, _PLImageLoadingAsset>
{
    BOOL _didPrepareForDeletion;
    BOOL _isRegisteredForChanges;
    BOOL _needsMomentUpdate;
    BOOL _disableDupeAnalysis;
    BOOL _disableFileSystemPersistency;
    BOOL _didLoadReverseGeo;
    BOOL _isLocatedAtHome;
    BOOL _setCustomCreationDate;
    BOOL _setCustomLocation;
    NSString *_reverseGeoDescription;
    CLLocation *_cachedLocation;
    NSURL *cachedNonPersistedVideoPlaybackURL;
    NSDate *cachedNonPersistedVideoPlaybackURLExpiration;
    NSError *cachedNonPersistedVideoPlaybackURLError;
    UIImage *inflightImageInMemory;
    NSString *inflightImagePath;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

+ (void)markAssetAsRecentlyUsed:(id)arg1;
+ (id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)allCloudSharedAssetsInLibrary:(id)arg1;
+ (id)recentlyUsedGUIDsPath;
+ (id)cloudAssetsInLibrary:(id)arg1;
+ (unsigned int)numberOfCPLSupportedAssetsOfKind:(short)arg1 trashedSinceDate:(id)arg2 inPhotoLibrary:(id)arg3;
+ (id)_assetsWithCloudAssetUUIDs:(id)arg1 inLibrary:(id)arg2 fetchLimit:(unsigned int)arg3;
+ (short)PLPhotoHDRTypeFromCPLAssetHDRType:(unsigned int)arg1;
+ (unsigned int)CPLAssetHDRTypeFromPLPhotoHDRType:(short)arg1;
+ (int)pfAdjustmentsBaseVersionFromAdjustmentBaseVersion:(int)arg1;
+ (void)resetAssetsForCloudInLibrary:(id)arg1;
+ (id)predicateForSupportedAssetTypesForUpload;
+ (BOOL)assetTypeIsSupportedForUpload:(short)arg1;
+ (id)uuidFromAssetURL:(id)arg1;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (int)wildcatPhotoScrubberFormat;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;
+ (int)feedEntryThumbnailFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (BOOL)isValidFileExtensionForImport:(id)arg1;
+ (id)extensionForFullsizeThumbnailFile;
+ (int)imageFormatFromAdjustmentBaseVersion:(int)arg1;
+ (int)adjustmentBaseVersionFromImageFormat:(int)arg1;
+ (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (BOOL)guaranteedFlashOffForAssetAtURL:(id)arg1;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (struct CGSize)dimensionsForVideoAtURL:(id)arg1;
+ (void)ptpResetEventAndFilenameMapping;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)assetsWithSavedAssetType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchPredicateForLegacyRequiredResourcesLocallyAvailable;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (BOOL)_isPlayableVideoCloudResource:(id)arg1;
+ (BOOL)_isPlayableVideoUTI:(struct __CFString *)arg1;
+ (id)uuidFromAssetURL:(id)arg1 fileExtension:(id *)arg2 sidecarIndex:(id *)arg3;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id *)arg3;
+ (id)assetsLibraryURLWithUUID:(id)arg1 extension:(id)arg2;
+ (id)pathForAdjustmentDirectoryWithMutationsDirectory:(id)arg1;
+ (id)pathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
+ (void)ptpSetAssetIDForEventAndFilenameKey:(id)arg1 value:(id)arg2;
+ (id)ptpAssetIDForEventAndFilenameKey:(id)arg1;
+ (id)_ptpCalendar;
+ (id)createPTPEventKeyForImportSessionID:(id)arg1 createDate:(id)arg2 filename:(id)arg3 value:(id)arg4;
+ (id)dcfCompliantNameForFilename:(id)arg1 createDate:(id)arg2 size:(int)arg3;
+ (id)convertKey:(unsigned long)arg1 toBases:(id)arg2;
+ (id)dcfFormatChecker;
+ (id)eventInfoForPTP;
+ (id)_ptpEventInfoIsolationQueue;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (void)extractDirectory:(id *)arg1 andFilename:(id *)arg2 fromMainFileURL:(id)arg3;
+ (id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6 isPlaceholder:(BOOL)arg7;
+ (id)listOfSyncedProperties;
+ (short)_correctedOrientation:(short)arg1;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 includePendingChanges:(BOOL)arg2 inLibrary:(id)arg3;
+ (unsigned int)numberOfPushedAssetsInPhotoLibrary:(id)arg1;
+ (unsigned int)numberOfCPLSupportedAssetsOfKind:(short)arg1 inPhotoLibrary:(id)arg2 includingTrashedSinceDate:(id)arg3;
+ (unsigned int)numberOfUnpushedAssetsOfKind:(short)arg1 inPhotoLibrary:(id)arg2;
+ (id)createCloudPhotoLibraryAssetWithAssetRecord:(id)arg1 withCloudMaster:(id)arg2 inLibrary:(id)arg3;
+ (void)fixupCloudPhotoLibraryAsset:(id)arg1 withCloudMaster:(id)arg2 inLibrary:(id)arg3;
+ (id)assetsByCloudAssetUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithCloudAssetUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsToRetryInLibrary:(id)arg1 limit:(unsigned int)arg2;
+ (id)assetsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned int)arg2;
+ (BOOL)hasUnpushedAssetWithoutMasterInLibrary:(id)arg1;
+ (id)_supportedAssetTypesForUpload;
+ (int)largestNonJPEGThumbnailFormat;
+ (int)indexSheetUnbakedFormat;
+ (int)posterThumbnailFormat;
+ (int)formatForThumbnailGeneration;
+ (int)fullSizeImageFormat;
+ (int)masterThumbnailFormat;
+ (id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id *)arg2 creationDateString:(id *)arg3;
+ (id)assetWithCloudAssetUUID:(id)arg1 inLibrary:(id)arg2;
+ (int)adjustmentBaseVersionFromPFAdjustmentsBaseVersion:(int)arg1;
+ (int)wildcatIndexSheetFormat;
+ (int)wildcatStackFormat;
+ (short)assetTypeFromUniformTypeIdentifier:(id)arg1;
+ (id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(short)arg2;
+ (id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)diagnosticFilePathForMainFilePath:(id)arg1;
+ (struct CGSize)dimensionsForAVAsset:(id)arg1;
+ (id)_fakeGeo;
+ (id)baseSearchIndexPredicate;
+ (int)thumbnailFormat;
+ (int)indexSheetBakedFormat;
+ (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (unsigned int)countUsedAssetsWithKind:(short)arg1 excludeTrashed:(BOOL)arg2 excludeInvisible:(BOOL)arg3 excludeCloudShared:(BOOL)arg4 inManagedObjectContext:(id)arg5;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6 isPlaceholder:(BOOL)arg7;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)newImagePropertiesFromImageSource:(struct CGImageSource *)arg1;
+ (CDStruct_c3b9c2ee)locationFromAVAsset:(id)arg1;
+ (id)newLocationFromLocationData:(id)arg1 timestampIfMissing:(id)arg2;
+ (id)newLocationDataFromLocation:(id)arg1;
+ (int)_locationDataFormat:(id)arg1;
+ (id)extensionForMediumThumbnailFile;
+ (id)extensionForLargeThumbnailFile;
+ (id)sortedCloudSharedAssetsWithPlaceholderKind:(short)arg1 ascending:(BOOL)arg2 inLibrary:(id)arg3;
+ (id)persistedRecentlyUsedGUIDS;
- (double)aspectRatio;
@property(nonatomic) BOOL userCloudSharedLiked;
- (void)userReadAllCloudSharedComments;
- (void)userDeleteCloudSharedComment:(id)arg1;
- (id)userAddCloudSharedCommentWithText:(id)arg1;
- (BOOL)cloudHasSameOwnerAsAsset:(id)arg1;
- (int)cloudCommentsStatusForOwnedAsset:(BOOL)arg1;
- (void)addComment:(id)arg1;
- (void)deleteComment:(id)arg1;
@property(readonly, nonatomic) unsigned int totalCommentsCount;
- (id)descriptionForResources;
- (id)lastUploadAttemptDate;
- (id)nonAdjustedPathForCPLResourceType:(unsigned int)arg1;
- (id)adjustedPathForCPLResourceType:(unsigned int)arg1;
- (int)_plAdjustmentBaseVersionFromCPLAdjustmentSourceType:(unsigned int)arg1;
- (void)_cleanSubstandardFile;
- (BOOL)_isResourceType:(unsigned int)arg1 inResources:(id)arg2;
- (short)_plAssetSubtypeFromCPLAssetSubtype:(unsigned int)arg1;
- (int)_avalancheTypeFromCplBurstFlags:(unsigned int)arg1;
- (BOOL)_location:(id)arg1 isEqualToLocationForUpdating:(id)arg2;
- (void)createMasterResourcesIn:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)applyPropertiesFromCloudMaster:(id)arg1;
- (id)_localResourcePathForResource:(id)arg1;
- (void)_addSidecarFromResource:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)cplRelationsForAssetInLibrary:(id)arg1;
- (void)applyResourceChangeToCPLAsset:(id)arg1 withIdentifier:(id)arg2 forChangeType:(unsigned int)arg3 inLibrary:(id)arg4;
- (void)applyPropertiesChangeToCPLAssetChange:(id)arg1 withMasterID:(id)arg2 inLibrary:(id)arg3;
- (id)_createVideoResourceFromVideoURL:(id)arg1 withResourceType:(unsigned int)arg2 itemIdentifier:(id)arg3 applyVideoAdjustments:(BOOL)arg4 forMaster:(BOOL)arg5;
- (id)_generatePosterFrameForVideoAtURL:(id)arg1 withResourceType:(unsigned int)arg2 itemIdentifier:(id)arg3 forMaster:(BOOL)arg4;
- (id)_createImageResourceForResourceType:(unsigned int)arg1 withPreviewImagePath:(id)arg2 itemIdentifier:(id)arg3 forMaster:(BOOL)arg4;
- (unsigned int)_cplAdjustmentSourceTypeFromPLAdjustmentBaseVersion:(int)arg1;
- (void)_debugPrintAdjustmentState;
@property(retain, nonatomic) NSSet *cloudResources;
- (unsigned int)_cplAssetSubtypeFromPLAssetSubtype:(short)arg1;
- (unsigned int)_cplBurstFlagsForAsset;
- (id)utiForResourceType:(unsigned int)arg1;
- (struct CGSize)_sizeOfImageAtURL:(id)arg1 checkOrientationIsUp:(BOOL)arg2;
- (void)_migrateResourcePathForMaster:(id)arg1;
- (id)_cplMasterFromCloudMaster:(id)arg1 withCPLResources:(id)arg2;
- (void)_createVideoResourcesForMaster:(id)arg1 intoMasterResources:(id)arg2;
- (void)_createPhotoResourcesForMaster:(id)arg1 intoMasterResources:(id)arg2;
- (id)_generateVideoResourcesFromURL:(id)arg1 withIdentifier:(id)arg2 shouldGenerateVideoDerivatives:(BOOL)arg3 forMaster:(BOOL)arg4;
- (id)_createJPEGResourcesFromFullSizeJPEGPath:(id)arg1 withItemIdentifier:(id)arg2 forMaster:(BOOL)arg3;
- (struct CGSize)_targetSizeForInputSize:(struct CGSize)arg1 maxPixelSize:(unsigned int)arg2;
- (struct CGSize)_sizeOfImageAtURL:(id)arg1;
- (id)_createCPLResourceFromResourcePath:(id)arg1 withResourceType:(unsigned int)arg2 uniformTypeIdentifier:(id)arg3 itemIdentifier:(id)arg4;
@property(retain, nonatomic) PLCloudMaster *cloudMaster;
- (BOOL)createNewResourcesIn:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)pathForCPLResourceType:(unsigned int)arg1 adjusted:(BOOL)arg2;
@property(nonatomic) int locationHash;
@property(nonatomic) short embeddedThumbnailHeight;
@property(nonatomic) short embeddedThumbnailWidth;
@property(nonatomic) int embeddedThumbnailLength;
@property(nonatomic) int embeddedThumbnailOffset;
@property(readonly, retain, nonatomic) NSData *embeddedThumbnailData;
@property(readonly, nonatomic) BOOL hasEmbeddedThumbnail;
@property(nonatomic) long long externalUsageIntent;
@property(retain, nonatomic) NSString *editorBundleID;
- (void)_computePreCropThumbnailSize:(struct CGSize *)arg1 andPostCropSize:(struct CGSize *)arg2 forOrientedOriginalSize:(struct CGSize)arg3 andCroppedSize:(struct CGSize)arg4 isLargeThumbnail:(BOOL)arg5;
- (void)writeXMPWithProperties:(id)arg1 orientation:(int)arg2;
- (void)_writeXMPSidecarWithProperties:(id)arg1 orientation:(int)arg2;
- (BOOL)_writeXMPHeaderWithProperties:(id)arg1 orientation:(int)arg2;
@property(nonatomic) BOOL disableFileSystemPersistency; // @synthesize disableFileSystemPersistency=_disableFileSystemPersistency;
@property(nonatomic) BOOL disableDupeAnalysis; // @synthesize disableDupeAnalysis=_disableDupeAnalysis;
@property(nonatomic) BOOL needsMomentUpdate; // @synthesize needsMomentUpdate=_needsMomentUpdate;
@property(retain, nonatomic) NSError *cachedNonPersistedVideoPlaybackURLError; // @synthesize cachedNonPersistedVideoPlaybackURLError;
@property(retain, nonatomic) NSDate *cachedNonPersistedVideoPlaybackURLExpiration; // @synthesize cachedNonPersistedVideoPlaybackURLExpiration;
@property(retain, nonatomic) NSURL *cachedNonPersistedVideoPlaybackURL; // @synthesize cachedNonPersistedVideoPlaybackURL;
- (id)shortenedFilePath;
@property(readonly, retain, nonatomic) UIImage *wallpaperFullScreenImage;
@property(readonly, copy, nonatomic) NSString *textBadgeString;
- (id)newLowResolutionFullScreenImage;
- (id)newFullSizeImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary **)arg2;
@property(readonly, copy, nonatomic) NSString *pathForPrebakedPortraitScrubberThumbnails;
@property(readonly, copy, nonatomic) NSString *pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForPrebakedWildcatThumbnailsFile;
@property(readonly, copy, nonatomic) NSArray *allUniformTypeIdentifiers;
- (id)fileURLForSidecarFile:(id)arg1;
- (id)pathForSideCarImageFile;
@property(readonly, copy, nonatomic) NSString *pathForSmallVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForMediumVideoFile;
- (id)pathForAdjustedMediumThumbnailFile;
- (id)pathForNonAdjustedMediumThumbnailFile;
- (id)pathForLargeSizeImageFile;
- (id)pathForMediaMetadataFile;
- (BOOL)migrateLegacyVideoAdjustments;
- (BOOL)isRAWPlusJPEG;
- (BOOL)isRAWOnly;
- (unsigned int)CPLResourceTypeFromVideoFormat:(int)arg1;
- (unsigned int)CPLResourceTypeFromImageFormat:(int)arg1;
@property(readonly, copy, nonatomic) NSSet *filePathsWithoutThumbs;
- (BOOL)isSavedPhotosAsset;
- (BOOL)couldBeStoredInDCIM;
- (id)mutableSidecarFiles;
- (BOOL)hasJustBeenHidden;
- (BOOL)hasJustBeenShown;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
@property(readonly, nonatomic) BOOL allowsWallpaperEditing;
- (BOOL)isPanorama;
@property(readonly, nonatomic) BOOL isHDVideo;
@property(readonly, nonatomic) BOOL isUsedByiPhoto;
@property(nonatomic) CDStruct_c3b9c2ee gpsCoordinate;
@property(nonatomic) struct CGSize imageSize;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (id)imageProperties;
- (id)faceWithIdentifier:(short)arg1;
- (void)setCustomMetadataWithPersistedFileSystemAttributes;
- (void)synchronizeWithPersistedFileSystemAttributes;
- (void)didSetCustomLocation;
- (void)didSetCustomDateCreated;
- (BOOL)hasLegacyRequiredResourcesLocallyAvailable;
- (id)_prettyDescription;
- (id)_compactDebugDescription;
- (BOOL)_isValidUTI:(id)arg1 forService:(id)arg2;
- (id)pathToOriginalVideoFile;
- (BOOL)hasGPS;
@property(retain, nonatomic) PLManagedAsset *originalAsset;
- (id)mutableAlbumsBeingCustomKeyAssetFor;
- (id)adjustmentsXMPRepresentation;
- (void)removeLegacyAdjustments;
- (void)deleteFromDatabaseOnly;
- (BOOL)isEditableFromAssetsLibrary;
- (id)decodedFaceRegions;
- (BOOL)isLocatedAtHome;
- (id)reverseGeoDescription;
- (id)avalanchePickDescription;
- (BOOL)isLocatedAtCoordinates:(CDStruct_c3b9c2ee)arg1;
- (BOOL)isFavorite;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (BOOL)isTimelapsePlaceholder;
- (id)managedAssetForPhotoLibrary:(id)arg1;
@property(readonly, nonatomic) BOOL isCloudPhotoLibraryAsset;
- (int)cloudSharedAssetPlaceholderKind;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)pathForAdjustmentDataFile;
- (BOOL)isPartOfBurst;
- (BOOL)isRAW;
- (id)debugFilename;
- (int)originalImageOrientation;
- (id)assetsLibraryURL;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(nonatomic) BOOL reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *reverseLocationData;
- (id)globalUUID;
- (BOOL)visibilityStateIsEqualToState:(short)arg1;
- (int)compareToAsset:(id)arg1;
- (BOOL)isInterestingForAvalanche;
- (id)pasteBoardRepresentation;
@property(readonly, copy, nonatomic) NSString *fileExtension;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)allFileExtensions;
- (id)largestAvailableDataRepresentationAndType:(id *)arg1;
- (void)_getLargestAvailableDataRepresentation:(id *)arg1 type:(id *)arg2;
- (id)newFullScreenImage:(const struct __CFDictionary **)arg1;
@property(readonly, retain, nonatomic) UIImage *inflightImage;
- (void)synchronouslyFetchAdjustmentDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_asyncGenerateRenderImageFileWithSize:(struct CGSize)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 adjustmentDataBlob:(id)arg4 originalImageFilePath:(id)arg5 originalImageEXIFOrientation:(int)arg6 renderedImageFilePath:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)calculateReturnPathForForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int *)arg3;
- (void)synchronouslyGenerateFullsizeRenderImageIfNecessaryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)pathForNonAdjustedLargeThumbnailFile;
- (id)pathForAdjustedLargeThumbnailFile;
@property(readonly, copy, nonatomic) NSArray *sortedSidecarFiles;
- (id)pathForNonAdjustedSmallVideoFile;
- (id)pathForAdjustedSmallVideoFile;
- (id)pathForNonAdjustedMediumVideoFile;
- (id)pathForAdjustedMediumVideoFile;
- (id)fileURLForAdjustedMediumThumbnailFile;
- (id)fileURLForMediumThumbnailFile;
- (id)fileURLForMetadataWithExtension:(id)arg1;
- (id)fileURLForAdjustedLargeThumbnailFile;
- (id)pathForNonAdjustedLargeSizeImageFile;
- (id)pathForAdjustedLargeSizeImageFile;
- (id)pathForNonAdjustedFullsizeImageFile;
- (id)pathForAdjustedFullsizeImageFile;
- (id)pathForMetadataWithExtension:(id)arg1;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pathForXMPFile;
- (BOOL)_migrateKeyedArchiverAdjustmentsToPropertyListSerializationFormat;
- (BOOL)_migrateLegacySLMAdjustments;
- (BOOL)_setDefaultSlowMotionAdjustments;
- (void)_updateOriginalResourceChoice;
- (void)markCloudResourceOfType:(unsigned int)arg1 asLocallyAvailable:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSString *pathForAdjustmentDirectory;
- (BOOL)_isResourceAvailableForResourceType:(unsigned int)arg1 outResource:(id *)arg2;
- (BOOL)isPlayableVideo;
- (BOOL)isResourceAvailableForResourceType:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSString *pathForLegacySlalomRegionsArchive;
@property(readonly, copy, nonatomic) NSURL *fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly, copy, nonatomic) NSURL *fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForNonAdjustedLargeThumbnailFile;
- (id)fileURLForNonAdjustedMediumThumbnailFile;
- (id)pathForMutationsDirectory;
@property(readonly, copy, nonatomic) NSString *pathForMediumThumbnailFile;
- (id)pathForFullsizeImageFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
@property(retain, nonatomic) NSData *faceRegions;
- (void)_createTHMFileWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2;
- (void)generateThumbnailsWithImageSource:(struct CGImageSource *)arg1 imageData:(id)arg2 updateExistingLargePreview:(BOOL)arg3 allowMediumPreview:(BOOL)arg4 outSmallThumbnail:(id *)arg5 outLargeThumbnail:(id *)arg6;
- (id)_imageDataForThumbGeneration;
- (void)_setLocationFromCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(nonatomic) short originalHeight;
@property(nonatomic) short originalWidth;
@property(nonatomic) short originalOrientation;
- (id)pathForAdjustmentFile;
@property(readonly, nonatomic) BOOL isAudio;
@property(nonatomic) int originalFilesize;
@property(retain, nonatomic) NSString *originalPath;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setOriginalSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setFaceRegionsFromImageMetadata:(struct CGImageMetadata *)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)updateAssetKindFromUniformTypeIdentifier;
@property(retain, nonatomic) NSString *longDescription;
@property(retain, nonatomic) NSString *customMomentUUID;
@property(retain, nonatomic) NSString *customMomentName;
@property(retain, nonatomic) NSString *customCollectionUUID;
@property(retain, nonatomic) NSString *customCollectionName;
- (BOOL)_isSavedAssetTypeValid:(short)arg1;
@property(retain, nonatomic) NSString *creatorBundleID;
- (BOOL)hasOriginalFile;
- (id)_highDynamicRangeTypeDescription;
- (id)_savedAssetTypeDescription;
- (id)_kindDescription;
- (id)filteredImage:(id)arg1 withCIContext:(id)arg2;
@property(readonly, copy, nonatomic) NSString *pathForLargeDisplayableImageFile;
@property(retain, nonatomic) NSDictionary *inflightMetadata; // @synthesize inflightMetadata;
@property(retain, nonatomic) UIImage *inflightIndexSheetImage; // @synthesize inflightIndexSheetImage;
@property(retain, nonatomic) NSString *inflightImagePath; // @synthesize inflightImagePath;
@property(retain, nonatomic) UIImage *inflightImageInMemory; // @synthesize inflightImageInMemory;
@property(retain, nonatomic) NSString *originalAssetsUUID;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (id)addAdjustment;
- (id)_settingsDictionaryFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;
- (id)_settingsDictionaryFromFilter:(id)arg1;
- (id)_serializedPropertyDataFromFilter:(id)arg1;
- (id)mutableAdjustments;
- (id)addedDateData;
- (id)dateCreatedData;
- (BOOL)isValidTypeForPersistence;
- (void)updatePanoramosity;
- (BOOL)_needToSetModificationDate:(id)arg1;
- (void)setOriginalResourceChoice:(unsigned int)arg1;
- (unsigned int)originalResourceChoice;
- (BOOL)_hasPanoramaDimensions;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)isDeletableFromAssetsLibrary;
- (void)_loadReverseGeoIfNeeded;
@property(retain, nonatomic) CLLocation *cachedLocation; // @synthesize cachedLocation=_cachedLocation;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
@property(nonatomic) BOOL isInFlight;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (id)mutableAlbumsBeingTertiaryKeyAssetFor;
- (id)mutableAlbumsBeingSecondaryKeyAssetFor;
- (id)mutableAlbumsBeingKeyAssetFor;
- (void)didSave;
- (void)willSave;
- (void)prepareForDeletion;
- (void)awakeFromInsert;
- (void)applyResourcesFromAssetChange:(id)arg1 inLibrary:(id)arg2;
- (void)applyPropertiesFromAssetChange:(id)arg1 inLibrary:(id)arg2;
- (id)createResourcesForAssetInPhotoLibrary:(id)arg1;
- (id)createResourcesForMaster:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)setUploadAttempts:(short)arg1;
@property(readonly, nonatomic) BOOL isMogul;
- (id)pathForFullsizeRenderVideoFile;
- (id)pathForFullsizeRenderImageFile;
- (BOOL)supportsCloudUpload;
- (short)uploadAttempts;
- (void)setLastUploadAttemptDate:(id)arg1;
- (void)incrementUploadAttempts;
- (id)cplAssetChangeWithMasterID:(id)arg1 withChangeType:(unsigned int)arg2 inLibrary:(id)arg3;
- (id)cplMasterChangeInLibrary:(id)arg1;
- (id)existingCloudMaster;
- (void)createMasterIfNecessaryInLibrary:(id)arg1;
- (id)cplResourceForResourceType:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSURL *fileURLForLargeThumbnailFile;
- (BOOL)isCloudPlaceholder;
@property(readonly, nonatomic) BOOL isStreamedVideo;
- (id)thumbnailIdentifier;
- (id)indexSheetImage;
@property(readonly, nonatomic) BOOL isJPEG;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int *)arg3;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (BOOL)hasLegacyAdjustments;
- (id)imageWithFormat:(int)arg1;
- (id)pl_photoLibrary;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
- (id)cloudResourceForResourceType:(unsigned int)arg1;
- (id)itemIdentifier;
- (BOOL)setDefaultAdjustmentsIfNecessary;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(int)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7;
- (BOOL)setVideoInfoFromFileAtURL:(id)arg1 fullSizeRenderURL:(id)arg2 overwriteOriginalProperties:(BOOL)arg3;
- (void)generateLargeThumbnailFileIfNecessary;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(int)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7 isSubstandardRender:(BOOL)arg8 fullSizeRenderSize:(struct CGSize)arg9 shouldUpdateAttributes:(BOOL)arg10 inManagedObjectContext:(id)arg11;
@property(retain, nonatomic) NSData *originalHash;
@property(readonly, copy, nonatomic) NSString *pathForVideoFile;
@property(retain, nonatomic) NSData *searchCategoryData;
@property(nonatomic, setter=setSearchDataValid:) BOOL isSearchDataValid;
- (id)_searchDataCreateIfNeeded;
- (void)getSearchIndexContents:(id)arg1 dateFormatter:(id)arg2 keywords:(id)arg3;
- (void)_appendDateCreatedToAsset:(id)arg1 dateFormatter:(id)arg2;
- (void)_appendAssetTextDataToAsset:(id)arg1;
- (void)_appendPersonNamesToAsset:(id)arg1;
- (void)_appendKeywords:(id)arg1 toAsset:(id)arg2;
- (void)_appendGEODataToAsset:(id)arg1;
@property unsigned int effectiveThumbnailIndex;
- (id)addFaceWithRelativeRect:(struct CGRect)arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (void)persistMetadataToFilesystem;
- (BOOL)avalanchePickTypeIsVisible;
- (void)generateAndUpdateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 fromImageSource:(struct CGImageSource *)arg3 imageData:(id)arg4 thumbnailDataByFormatID:(struct __CFDictionary *)arg5 updateExistingLargePreview:(BOOL)arg6;
@property(retain, nonatomic) NSString *publicGlobalUUID;
- (BOOL)migrateLegacyPhotoAdjustments;
@property(retain, nonatomic) NSString *originalFilename;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 fullSizeRenderURL:(id)arg2 savedAssetType:(short)arg3 isPlaceholder:(BOOL)arg4 overwriteOriginalProperties:(BOOL)arg5 imageSource:(struct CGImageSource **)arg6 imageData:(id *)arg7;
- (void)setLocationFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (void)revertToOriginal;
@property(readonly, copy, nonatomic) NSString *pathForLargeThumbnailFile;
@property(readonly, nonatomic) BOOL isPhoto;
@property(readonly, copy, nonatomic) NSURL *fileURLForThumbnailFile;
@property(readonly, copy, nonatomic) NSString *pathForVideoPreviewFile;
@property(readonly, copy, nonatomic) NSString *pathForMetadataDirectory;
- (id)pathForDiagnosticFile;
@property(readonly, retain, nonatomic) NSURL *assetURL;
- (id)assetURLWithExtension:(id)arg1;
- (BOOL)isAvalanchePhoto;
- (BOOL)isAvalancheStackPhoto;
- (void)deleteWithReason:(id)arg1;
@property(readonly, nonatomic) BOOL isPhotoStreamPhoto;
- (void)applyTrashedState:(short)arg1;
- (BOOL)canMoveToTrash;
- (void)delete;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
@property(retain, nonatomic) NSString *importSessionID;
- (BOOL)isInTrash;
@property(readonly, nonatomic) NSString *cloudOwnerEmail;
@property(readonly, nonatomic) NSString *cloudOwnerFullName;
@property(readonly, nonatomic) NSString *cloudOwnerLastName;
@property(readonly, nonatomic) NSString *cloudOwnerFirstName;
- (BOOL)migrateLocationDataIfNeededAfterOTARestore:(BOOL)arg1;
- (id)_newLocationFromFileURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *mainFileURL;
@property(retain, nonatomic) CLLocation *location;
@property(readonly, copy, nonatomic) NSString *pathForOriginalFile;
@property(readonly, nonatomic) id <PLCloudSharedAlbumProtocol> cloudShareAlbum;
@property(readonly, copy, nonatomic) NSSet *allFileURLs;
@property(readonly, nonatomic) BOOL isCloudSharedAsset;
@property(readonly, nonatomic) BOOL isVideo;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (BOOL)isEditable;
@property(retain, nonatomic) NSString *title;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSDate *addedDate; // @dynamic addedDate;
@property(retain, nonatomic) PLAdditionalAssetAttributes *additionalAttributes; // @dynamic additionalAttributes;
@property(retain, nonatomic) NSOrderedSet *adjustments; // @dynamic adjustments;
@property(retain, nonatomic) NSSet *albumOrders; // @dynamic albumOrders;
@property(retain, nonatomic) NSSet *albums; // @dynamic albums;
@property(retain, nonatomic) NSSet *albumsBeingCustomKeyAssetFor; // @dynamic albumsBeingCustomKeyAssetFor;
@property(retain, nonatomic) NSSet *albumsBeingKeyAssetFor; // @dynamic albumsBeingKeyAssetFor;
@property(retain, nonatomic) NSSet *albumsBeingSecondaryKeyAssetFor; // @dynamic albumsBeingSecondaryKeyAssetFor;
@property(retain, nonatomic) NSSet *albumsBeingTertiaryKeyAssetFor; // @dynamic albumsBeingTertiaryKeyAssetFor;
@property(nonatomic) int avalanchePickType; // @dynamic avalanchePickType;
@property(retain, nonatomic) NSString *avalancheUUID; // @dynamic avalancheUUID;
@property(readonly, retain, nonatomic) NSString *cloudAssetGUID;
@property(retain, nonatomic) NSString *cloudBatchID; // @dynamic cloudBatchID;
@property(retain, nonatomic) NSDate *cloudBatchPublishDate; // @dynamic cloudBatchPublishDate;
@property(retain, nonatomic) NSString *cloudCollectionGUID; // @dynamic cloudCollectionGUID;
@property(retain, nonatomic) NSOrderedSet *cloudComments; // @dynamic cloudComments;
@property(retain, nonatomic) NSNumber *cloudDownloadRequests; // @dynamic cloudDownloadRequests;
@property(retain, nonatomic) PLCloudFeedAssetsEntry *cloudFeedAssetsEntry; // @dynamic cloudFeedAssetsEntry;
@property(nonatomic) BOOL cloudHasCommentsByMe; // @dynamic cloudHasCommentsByMe;
@property(nonatomic) BOOL cloudHasCommentsConversation; // @dynamic cloudHasCommentsConversation;
@property(nonatomic) BOOL cloudHasUnseenComments; // @dynamic cloudHasUnseenComments;
@property(nonatomic) BOOL cloudIsDeletable; // @dynamic cloudIsDeletable;
@property(nonatomic) BOOL cloudIsMyAsset; // @dynamic cloudIsMyAsset;
@property(retain, nonatomic) NSDate *cloudLastViewedCommentDate; // @dynamic cloudLastViewedCommentDate;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID; // @dynamic cloudOwnerHashedPersonID;
@property(nonatomic) short cloudPlaceholderKind; // @dynamic cloudPlaceholderKind;
@property(retain, nonatomic) NSDate *cloudServerPublishDate; // @dynamic cloudServerPublishDate;
@property(nonatomic) short cloudServerState; // @dynamic cloudServerState;
@property(nonatomic) BOOL complete; // @dynamic complete;
@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *directory; // @dynamic directory;
@property(nonatomic) double duration; // @dynamic duration;
@property(retain, nonatomic) NSSet *faces; // @dynamic faces;
@property(nonatomic) BOOL favorite; // @dynamic favorite;
@property(retain, nonatomic) NSString *filename; // @dynamic filename;
@property(nonatomic) BOOL hasAdjustments; // @dynamic hasAdjustments;
@property(readonly) unsigned int hash;
@property(nonatomic) short height; // @dynamic height;
@property(nonatomic) BOOL hidden; // @dynamic hidden;
@property(nonatomic) short highDynamicRangeType; // @dynamic highDynamicRangeType;
@property(nonatomic) short kind; // @dynamic kind;
@property(nonatomic) short kindSubtype; // @dynamic kindSubtype;
@property(retain, nonatomic) NSDate *lastSharedDate; // @dynamic lastSharedDate;
@property(retain, nonatomic) NSOrderedSet *likeComments; // @dynamic likeComments;
@property(retain, nonatomic) NSData *locationData; // @dynamic locationData;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) PLMoment *moment; // @dynamic moment;
@property(nonatomic) short orientation; // @dynamic orientation;
@property(nonatomic) short savedAssetType; // @dynamic savedAssetType;
@property(retain, nonatomic) NSManagedObject *searchData; // @dynamic searchData;
@property(retain, nonatomic) NSSet *sidecarFiles; // @dynamic sidecarFiles;
@property(nonatomic) double sortToken; // @dynamic sortToken;
@property(readonly) Class superclass;
@property(nonatomic) int thumbnailIndex; // @dynamic thumbnailIndex;
@property(retain, nonatomic) NSDate *trashedDate; // @dynamic trashedDate;
@property(nonatomic) short trashedState; // @dynamic trashedState;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(retain, nonatomic) id uuid; // @dynamic uuid;
@property(nonatomic) short visibilityState; // @dynamic visibilityState;
@property(nonatomic) short width; // @dynamic width;

@end

