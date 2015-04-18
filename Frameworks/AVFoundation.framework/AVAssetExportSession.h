//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetExportSessionInternal, AVAudioMix, AVMetadataItemFilter, AVVideoComposition, NSArray, NSError, NSString, NSURL;

@interface AVAssetExportSession : NSObject
{
    AVAssetExportSessionInternal *_exportSession;
}

+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
+ (id)_videoCompressionPropertiesForVideoSetting:(id)arg1;
+ (id)_utTypesForTemporalMetadataPresets;
+ (BOOL)_disablePassthrough;
+ (id)_figRemakerNotificationNames;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (BOOL)_isPassthroughExportPresetCompatibleWithAsset:(id)arg1 outputFileType:(id)arg2;
+ (BOOL)_disableExportCompatibilityCheck;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAssetContainingPlayableAudio:(BOOL)arg2 playableVideo:(BOOL)arg3 outputFileType:(id)arg4;
+ (BOOL)_failsAudioPassthroughRestrictions:(id)arg1 outputFileType:(id)arg2;
+ (id)_utTypesForAudioOnly;
+ (BOOL)_isPassthroughExportSupportedForAudioFormatDescription:(struct opaqueCMFormatDescription *)arg1 forFileType:(struct __CFString *)arg2 asChapterTrack:(BOOL)arg3 usingModifiedFormatDescription:(const struct opaqueCMFormatDescription **)arg4;
+ (id)_utTypesForDefaultPassthroughPreset;
+ (id)_audioOnlyPresets;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+ (CDStruct_1b6d18a9)maximumDurationForPreset:(id)arg1 properties:(id)arg2;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (BOOL)_canWriteMediaOfAsset:(id)arg1 toFileType:(id)arg2;
+ (id)_utTypesForPresets;
+ (BOOL)_isPassthroughExportSupportedForFormatDescription:(struct opaqueCMFormatDescription *)arg1 forFileType:(struct __CFString *)arg2 asChapterTrack:(BOOL)arg3;
+ (id)_mediaTypesToFailPassthroughExport;
+ (id)_mediaTypesToStripOnPassthroughExport;
+ (id)_settingForPreset:(id)arg1;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
+ (CDStruct_1b6d18a9)_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (BOOL)_isExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (id)_asynchronousDispatchQueue;
+ (int)_getPassthroughExportPolicyForAssetTrack:(id)arg1 fileType:(id)arg2 asChapterTrack:(BOOL)arg3;
+ (id)_audioVideoPresets;
+ (id)allExportPresets;
- (void)finalize;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) CDStruct_e83c9415 timeRange;
@property(retain, nonatomic) AVMetadataItemFilter *metadataItemFilter;
@property(nonatomic) BOOL shouldOptimizeForNetworkUse;
@property(copy, nonatomic) NSURL *outputURL;
@property(copy, nonatomic) NSString *outputFileType;
@property(readonly, nonatomic) NSArray *supportedFileTypes;
@property(readonly, nonatomic) NSString *presetName;
@property(copy, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) int status;
@property(readonly, retain, nonatomic) AVAsset *asset;
@property(readonly, nonatomic) float progress;
- (id)description;
- (id)init;
- (void)dealloc;
- (struct CGSize)_getSourceDimension;
- (void)_handleFigRemakerNotificationAsync:(id)arg1 payload:(id)arg2;
- (id)_actualSettingForPresetAppleM4VAppleTV:(id)arg1;
- (void)_transferTrackProperties:(struct OpaqueFigRemaker *)arg1 sourceTrackID:(int)arg2 destinationTrackID:(int)arg3;
- (id)_audioProcessingOptions;
- (id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)arg1 fromAudioSetting:(id)arg2;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (BOOL)_isAudioMixdownRequired:(struct __CFString *)arg1 error:(id *)arg2;
- (id)_addTracksAndPropertiesToFigRemakerForPassthroughExport:(struct OpaqueFigRemaker *)arg1;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (BOOL)_canPassThroughTemporalMetadata;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (BOOL)_canPassThroughVideo:(id)arg1 remaker:(struct OpaqueFigRemaker *)arg2 checkEnabled:(BOOL)arg3 checkAll:(BOOL)arg4 checkProtected:(BOOL)arg5;
- (id)_settingForFigRemaker;
- (id)_remakerOptionsForFileFormat:(id)arg1;
- (void)_createFormatWriterOptions:(id *)arg1 forFileFormat:(id)arg2;
- (id)_addAudioPassthroughTrack:(id)arg1 asChapterTrack:(BOOL)arg2 toFigRemaker:(struct OpaqueFigRemaker *)arg3 returningTrackID:(int *)arg4;
- (int)_averageBitRateForSourceAndPreset:(id)arg1 targetFrameRate:(float)arg2;
- (float)_getSourceVideoFrameRate;
- (id)_actualSettingForPreset:(id)arg1;
- (void)_handleFigRemakerNotification:(id)arg1 payload:(id)arg2;
- (struct CGSize)_getUntransformedSourceDimension;
@property(nonatomic) BOOL canPerformMultiplePassesOverSourceMediaData;
@property(nonatomic) long long fileLengthLimit;
@property(readonly, nonatomic) long long estimatedOutputFileLength;
- (BOOL)_canPerformFastFrameRateConversionWithPreset:(id)arg1 usingRemaker:(struct OpaqueFigRemaker *)arg2;
- (void)setVideoFrameRateConversionAlgorithm:(id)arg1;
- (void)setMinVideoFrameDuration:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxDuration;
- (void)cancelExport;
- (void)determineCompatibleFileTypesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_addListeners;
- (id)_createFigRemaker:(struct OpaqueFigRemaker **)arg1;
- (BOOL)_validateSettablePropertiesReturningError:(id *)arg1;
- (void)_createRemakerAndBeginExport;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (void)_validateOutputFileTypeForExport;
- (id)_actualOutputFileType;
- (void)_updateProgress;
- (id)_determineCompatibleFileTypes;
- (id)_actualPresetName;
- (void)_removeListeners;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (id)videoFrameRateConversionAlgorithm;
- (CDStruct_1b6d18a9)minVideoFrameDuration;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(copy, nonatomic) AVAudioMix *audioMix;
@property(readonly, nonatomic) id <AVVideoCompositing> customVideoCompositor;
@property(copy, nonatomic) AVVideoComposition *videoComposition;

@end

