//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject
{
    AVCaptureSessionInternal *_internal;
}

+ (id)alloc;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversOfRunning;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (id)publicSessionPresets;
+ (id)dotString;
+ (id)allSessionPresets;
- (void)addOutput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)_setRunning:(BOOL)arg1;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (id)valueForUndefinedKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)stopRunning;
- (void)startRunning;
@property(nonatomic) BOOL automaticallyConfiguresApplicationAudioSession;
@property(nonatomic) BOOL usesApplicationAudioSession;
- (void)addConnection:(id)arg1;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)_addVideoPreviewLayerWithNoConnection:(id)arg1;
- (void)_addVideoPreviewLayer:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)_handleServerConnectionDiedNotification;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_notifyMediaServerdDied;
- (void)_notifySessionStarted;
- (void)_setInterrupted:(BOOL)arg1;
- (void)_notifySessionStopped;
- (void)_stopAndTearDownGraph;
- (BOOL)_startFigCaptureSession;
- (id)_figCaptureSessionConfiguration;
- (void)_updateActiveConnections;
- (void)_updateDeviceActiveFormats;
@property(copy, nonatomic) NSString *sessionPreset;
- (BOOL)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;
- (void)_rebuildGraph;
- (BOOL)_stopFigCaptureSession;
- (void)_postRuntimeError:(id)arg1;
- (id)_stopError;
- (BOOL)isBeingConfigured;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)commitConfiguration;
- (BOOL)canAddConnection:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (void)beginConfiguration;
- (void)_removeAllPreviewLayers;
- (BOOL)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id *)arg2;
- (void)_removeConnection:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id *)arg2;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_addConnection:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id *)arg2;
- (void)_setMasterClock:(struct OpaqueCMClock *)arg1;
- (void)_determineMasterClock;
- (BOOL)_buildAndRunGraph;
- (id)sessionVideoCaptureDevices;
- (void)_commitConfiguration;
- (BOOL)canSetSessionPreset:(id)arg1;
- (void)_teardownFigCaptureSession;
- (void)_makeConfigurationLive:(id)arg1;
- (void)_beginConfiguration;
- (long)_createFigCaptureSession;
- (void)removeInput:(id)arg1;
- (BOOL)notifiesOnMainThread;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
@property(readonly, nonatomic) struct OpaqueCMClock *masterClock;
- (void)removeConnection:(id)arg1;
@property(readonly, nonatomic) NSArray *inputs;
@property(readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property(readonly, nonatomic) NSArray *outputs;

@end

