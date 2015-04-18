//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FigCaptureRecordingSettings, FigCaptureStillImageSettings, NSString;

@interface BWNodeError : NSObject
{
    int _uniqueID;
    long _errorCode;
    NSString *_sourceNodeDescription;
    FigCaptureStillImageSettings *_stillImageSettings;
    FigCaptureRecordingSettings *_recordingSettings;
}

+ (id)newError:(long)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;
+ (id)newError:(long)arg1 sourceNode:(id)arg2;
+ (id)newError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3;
@property(readonly) long errorCode;
@property(readonly) NSString *sourceNodeDescription;
- (id)_initWithError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3 recordingSettings:(id)arg4;
@property(readonly) FigCaptureRecordingSettings *recordingSettings;
@property(readonly) FigCaptureStillImageSettings *stillImageSettings;
- (unsigned int)hash;
- (void)dealloc;

@end

