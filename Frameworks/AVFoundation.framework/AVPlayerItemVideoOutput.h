//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal, NSObject<OS_dispatch_queue>;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput
{
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2;
- (BOOL)hasNewPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)finalize;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) id <AVPlayerItemOutputPullDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)_setTagBuffersWithConversionInformation;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg1;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_detachFromPlayerItem;
- (void)_setTimebase:(struct OpaqueCMTimebase *)arg1;
- (BOOL)_attachToPlayerItem:(id)arg1;
- (id)_pixelBufferAttributes;
- (struct OpaqueFigVisualContext *)_visualContext;
- (BOOL)suppressesPlayerRendering;

@end

