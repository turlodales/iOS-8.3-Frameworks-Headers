//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface AVCaptureFileOutputDelegateWrapper_FigRecorder : NSObject
{
    id <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> _delegate;
    NSURL *_outputFileURL;
    BOOL _receivedDidStartRecording;
    BOOL _receivedDidStopRecording;
    long _didStopRecordingError;
    NSArray *_metadata;
    NSArray *_connections;
}

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
@property(retain) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly) id <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(readonly) NSArray *connections; // @synthesize connections=_connections;
@property long didStopRecordingError; // @synthesize didStopRecordingError=_didStopRecordingError;
@property BOOL receivedDidStopRecording; // @synthesize receivedDidStopRecording=_receivedDidStopRecording;
@property BOOL receivedDidStartRecording; // @synthesize receivedDidStartRecording=_receivedDidStartRecording;
@property(readonly) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

@end

