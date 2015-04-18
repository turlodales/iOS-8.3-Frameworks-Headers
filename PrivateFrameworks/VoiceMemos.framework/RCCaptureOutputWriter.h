//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"

@class AVAssetWriter, AVCaptureAudioDataOutput, AVCaptureSession, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID;

@interface RCCaptureOutputWriter : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    BOOL _waitingForAVCaptureSessionDidStart;
    BOOL _handledAVCaptureSessionTerminatedAbnormally;
    BOOL _handledAVCaptureSessionFailedToStart;
    BOOL _isProcessingSamples;
    int _AVCaptureSessionStartupState;
    unsigned int _sampleBuffersWritten;
    NSMutableArray *_delegateBlocks;
    struct {
        long long value;
        int timescale;
        unsigned int flags;
        long long epoch;
    } _sampleBuffersWrittenDuration;
    BOOL _finalizedAssetEncounteredError;
    AVCaptureSession *_AVCaptureSession;
    int _writerState;
    id <RCCaptureOutputWriterDelegate> _captureOutputDelegate;
    NSURL *_finalizedAssetURL;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_recordingSessionID;
    NSURL *_activeOutputFileURL;
    NSDate *_recordingCreationDate;
    AVAssetWriter *_assetWriter;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    AVCaptureAudioDataOutput *_sampleBufferDataOutput;
    double _maxRecordedDuration;
    unsigned long long _maxRecordedFileSize;
    double _finalizedAssetDuration;
}

@property(retain, nonatomic) AVCaptureAudioDataOutput *sampleBufferDataOutput; // @synthesize sampleBufferDataOutput=_sampleBufferDataOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferQueue; // @synthesize sampleBufferQueue=_sampleBufferQueue;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) NSDate *recordingCreationDate; // @synthesize recordingCreationDate=_recordingCreationDate;
@property(retain, nonatomic) NSURL *activeOutputFileURL; // @synthesize activeOutputFileURL=_activeOutputFileURL;
@property(copy, nonatomic) NSUUID *recordingSessionID; // @synthesize recordingSessionID=_recordingSessionID;
@property(readonly, nonatomic) NSURL *finalizedAssetURL; // @synthesize finalizedAssetURL=_finalizedAssetURL;
@property(nonatomic) __weak id <RCCaptureOutputWriterDelegate> captureOutputDelegate; // @synthesize captureOutputDelegate=_captureOutputDelegate;
@property(nonatomic) int writerState; // @synthesize writerState=_writerState;
@property(readonly, nonatomic) AVCaptureSession *AVCaptureSession; // @synthesize AVCaptureSession=_AVCaptureSession;
- (void)_sessionErrored:(id)arg1;
- (void)_interruptionDidBegin:(id)arg1;
- (void)_sessionDidStopRunning:(id)arg1;
- (void)_sessionDidStartRunning:(id)arg1;
- (BOOL)_handleNotificationAsSessionStartFailure;
- (BOOL)_handleEncounteredFatalAssetWriterError;
@property(readonly, nonatomic) double assetWritingCheckpointInterval;
- (BOOL)_setupAssetWriter:(id *)arg1 sampleBufferRef:(struct opaqueCMSampleBuffer *)arg2;
- (void)_finalizeAssetWriting;
- (void)_scheduleMainThreadDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_setWriterState:(int)arg1;
- (void)_checkIfRecordingSessionEverStarted:(id)arg1;
- (void)_prepareCaptureSessionOutputsIfNecessary;
- (int)_writerState;
- (void)_clearSampleDataOutput;
- (void)_unregisterForCatpureSessionNotifications;
- (void)_registerForCatpureSessionNotifications;
- (BOOL)startCaptureSession;
- (id)initWithAVCaptureSession:(id)arg1;
- (void)stopCaptureSession;
- (BOOL)startWritingToOutputFileURL:(id)arg1 creationDate:(id)arg2 beginPaused:(BOOL)arg3 captureOutputDelegate:(id)arg4;
@property(readonly, nonatomic) double finalizedAssetDuration; // @synthesize finalizedAssetDuration=_finalizedAssetDuration;
@property(readonly, nonatomic) BOOL finalizedAssetEncounteredError; // @synthesize finalizedAssetEncounteredError=_finalizedAssetEncounteredError;
- (void)endWriting;
- (void)resumeWriting;
- (void)pauseWriting;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) unsigned long long maxRecordedFileSize; // @synthesize maxRecordedFileSize=_maxRecordedFileSize;
@property(nonatomic) double maxRecordedDuration; // @synthesize maxRecordedDuration=_maxRecordedDuration;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

