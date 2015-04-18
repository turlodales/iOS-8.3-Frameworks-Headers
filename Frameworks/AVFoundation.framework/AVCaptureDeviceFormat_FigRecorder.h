//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDeviceFormatInternal_FigRecorder, NSArray, NSString;

@interface AVCaptureDeviceFormat_FigRecorder : NSObject
{
    AVCaptureDeviceFormatInternal_FigRecorder *_internal;
}

+ (void)initialize;
+ (id)deviceFormatWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *mediaType;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (int)visCompanionSupportedFormatsArrayIndex;
- (int)supportedFormatsArrayIndex;
- (BOOL)usesPreviewSizedThumbnail;
- (BOOL)needsPhotoPreviewDPCC;
- (BOOL)needsPhotoTNR;
- (BOOL)isHighResPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (int)rawBitDepth;
- (BOOL)supportsDynamicCrop;
- (struct CGSize)_maxVideoDimensions;
- (BOOL)supportsVideoZoom;
- (CDStruct_1ef3fb1f)outputDimensions;
- (BOOL)supportsLowLightBoost;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg1 frameRateRanges:(id)arg2;
- (BOOL)isExperimental;
@property(readonly, nonatomic) float videoZoomFactorUpscaleThreshold;
- (int)supportedStabilizationMethod;
@property(readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property(readonly, nonatomic) float videoFieldOfView;
- (id)formatDictionary;
- (BOOL)supportsHighProfileH264;
- (id)vtScalingMode;
- (CDStruct_1ef3fb1f)sensorDimensions;
- (BOOL)isSISSupported;
@property(readonly, nonatomic) float videoMaxZoomFactor;
- (BOOL)isDefaultActiveFormat;
@property(readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
- (BOOL)isPhotoFormat;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
- (BOOL)isVideoStabilizationModeSupported:(int)arg1;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription;

@end

