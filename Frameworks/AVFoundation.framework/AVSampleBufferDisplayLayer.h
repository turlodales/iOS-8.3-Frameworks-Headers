//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "AVMediaDataRequesterConsumer.h"
#import "AVQueuedSampleBufferRendering.h"
#import "AVQueuedSampleBufferRenderingInternal.h"

@class AVSampleBufferDisplayLayerInternal, NSError, NSString;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal>
{
    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;
}

+ (BOOL)automaticallyNotifiesObserversOfError;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
@property(copy) NSString *videoGravity;
- (void)finalize;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) int status;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)flush;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;
- (id)videoPerformanceMetrics;
- (void)flushAndRemoveImage;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopRequestingMediaData;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
- (BOOL)setRenderSynchronizer:(id)arg1;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;
- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3;
- (void)_removeFigVideoQueueListeners;
- (void)_addFigVideoQueueListeners;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(BOOL)arg1;
- (void)_resetStatusWithOSStatus:(long)arg1;
- (void)_updatePresentationSize:(struct CGSize)arg1;
- (long)_createVideoQueue;
- (long)_initializeTimebases;
- (void)_setSynchronizerTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_setControlTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_setStatus:(int)arg1 error:(id)arg2;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(struct CGRect)arg2 presentationSize:(struct CGSize)arg3;
- (void)_refreshAboveHighWaterLevel;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (void)_didFinishSuspension:(id)arg1;
- (id)_weakReference;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;
- (id)_transformToAbsoluteAnimationOfBounds:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

