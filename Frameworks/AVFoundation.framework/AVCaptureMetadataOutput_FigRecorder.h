//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput_FigRecorder.h>

@class AVCaptureMetadataOutputInternal_FigRecorder, NSArray, NSObject<OS_dispatch_queue>;

@interface AVCaptureMetadataOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureMetadataOutputInternal_FigRecorder *_internal;
}

+ (void)initialize;
- (id)_input;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic) struct CGRect rectOfInterest;
@property(copy, nonatomic) NSArray *metadataObjectTypes;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureMetadataOutputObjectsDelegate_FigRecorder> metadataObjectsDelegate;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (void)applyLiveSourceProperties;
- (BOOL)_faceMetadataIsActive;
@property(readonly, nonatomic) NSArray *availableMetadataObjectTypes;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)didStartForSessionWithoutGraphRebuild:(id)arg1;
- (void)didStartForSession:(id)arg1;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;

@end

