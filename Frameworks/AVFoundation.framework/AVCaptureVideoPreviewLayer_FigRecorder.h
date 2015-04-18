//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class AVCaptureConnection_FigRecorder, AVCaptureSession_FigRecorder, AVCaptureVideoPreviewLayerInternal_FigRecorder, NSString;

@interface AVCaptureVideoPreviewLayer_FigRecorder : CALayer
{
    AVCaptureVideoPreviewLayerInternal_FigRecorder *_internal;
}

+ (void)initialize;
+ (id)layerWithSession:(id)arg1;
@property(copy) NSString *videoGravity;
- (BOOL)isPaused;
@property(nonatomic, getter=isMirrored) BOOL mirrored;
- (id)initWithSession:(id)arg1;
@property(retain, nonatomic) AVCaptureSession_FigRecorder *session;
@property(readonly, nonatomic) AVCaptureConnection_FigRecorder *connection;
- (void)layoutSublayers;
- (id)initWithLayer:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) int orientation;
- (id)_input;
- (void)setBounds:(struct CGRect)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)init;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)connections;
- (id)subLayer;
- (void)updateInternalStateForCaptureOptions:(id)arg1;
- (void)centerSublayer;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (struct CGRect)rectForMetadataObject:(id)arg1;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (id)activeConnections;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
@property(nonatomic) BOOL automaticallyAdjustsMirroring;
@property(readonly, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;
- (struct CGRect)rectForCaptureDeviceFaceRect:(struct CGRect)arg1;
- (BOOL)isChromaNoiseReductionSupported;
@property(readonly, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;
- (void)_updateCaptureDeviceTransform;
- (BOOL)_isMirrored;
- (BOOL)_automaticallyAdjustsMirroring;
- (int)_orientation;
- (float)previewRotationDegrees;
- (void)bumpChangeSeed;
- (id)notReadyError;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (int)changeSeed;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)liveConnections;

@end

