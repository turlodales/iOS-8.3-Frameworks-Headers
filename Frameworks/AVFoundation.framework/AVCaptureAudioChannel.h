//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject
{
    AVCaptureAudioChannelInternal *_internal;
}

- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)dealloc;
@property(readonly, nonatomic) float peakHoldLevel;
@property(readonly, nonatomic) float averagePowerLevel;

@end

