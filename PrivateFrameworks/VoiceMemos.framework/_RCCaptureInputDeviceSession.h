//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, RCCaptureInputDevice, RCCaptureSession;

@interface _RCCaptureInputDeviceSession : NSObject
{
    NSMutableArray *_sessionFinishedBlocks;
    BOOL _useStartSoundEffect;
    BOOL _captureSessionWasActivated;
    RCCaptureInputDevice *_captureInputDevice;
    RCCaptureSession *_captureSession;
    CDUnknownBlockType _sessionPreparedBlock;
}

@property(readonly, nonatomic) __weak RCCaptureInputDevice *captureInputDevice; // @synthesize captureInputDevice=_captureInputDevice;
@property(nonatomic) BOOL captureSessionWasActivated; // @synthesize captureSessionWasActivated=_captureSessionWasActivated;
@property(nonatomic) BOOL useStartSoundEffect; // @synthesize useStartSoundEffect=_useStartSoundEffect;
@property(copy, nonatomic) CDUnknownBlockType sessionPreparedBlock; // @synthesize sessionPreparedBlock=_sessionPreparedBlock;
@property(retain, nonatomic) RCCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (id)initWithCaptureInputDevice:(id)arg1;
- (void)invokeSessionFinishedBlocksWithError:(id)arg1;
- (void)addSessionFinishedBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

