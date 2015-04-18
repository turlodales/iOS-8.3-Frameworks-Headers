//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVCaptureVideoDataOutput : AVCaptureOutput
{
    AVCaptureVideoDataOutputInternal *_internal;
}

+ (id)alloc;
+ (void)initialize;
+ (id)supportedVideoSettingsKeys;
- (id)init;
- (void)dealloc;
- (int)outputFormat;
@property(nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)_setMinFrameDuration:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property(readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (int)requiredOutputFormatForConnection:(id)arg1;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (BOOL)hasRequiredOutputFormatForConnection:(id)arg1;
@property(copy, nonatomic) NSDictionary *videoSettings;
- (BOOL)usesPreviewSizedBuffers;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg1;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (id)connectionMediaTypes;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;

@end

