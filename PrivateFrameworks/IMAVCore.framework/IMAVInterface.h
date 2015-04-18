//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMAVInterface : NSObject
{
    id _delegate;
}

+ (id)alloc;
+ (id)sharedInstance;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2;
- (int)_runPingTestForChat:(id)arg1;
- (int)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2;
- (BOOL)_submitEndCallMetric:(id)arg1 forCallID:(int)arg2;
- (BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize)arg2 localPortraitAspectRatio:(struct CGSize)arg3;
- (void)endInterruptionForChat:(id)arg1;
@property(nonatomic) BOOL shouldKeepCameraRunning;
@property(readonly, nonatomic) id _controller;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
@property(readonly, nonatomic) BOOL supportsRelay;
@property(nonatomic) unsigned int maxBitrate;
@property(nonatomic) void *localVideoBackLayer;
- (void)setRemoteVideoBackLayer:(void *)arg1 forChat:(id)arg2;
- (void *)remoteVideoBackLayerForChat:(id)arg1;
- (void)setRemoteVideoLayer:(void *)arg1 forChat:(id)arg2;
- (void *)remoteVideoLayerForChat:(id)arg1;
@property(readonly, nonatomic) BOOL supportsLayers;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned int)arg3 shouldFindExternalIP:(BOOL)arg4;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(BOOL)arg3;
- (id)getNatIPFromICEData:(id)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (BOOL)startPreviewWithError:(id *)arg1;
@property(readonly, nonatomic) unsigned long long capabilitiesOfCPU;
@property(readonly, nonatomic) unsigned long long capabilitiesOfNetwork;
- (void)avChat:(id)arg1 setValidatedIdentity:(struct __SecIdentity *)arg2;
- (void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2;
- (BOOL)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2;
- (BOOL)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setRemoteMute:(BOOL)arg2;
- (BOOL)isRemoteMuteForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(BOOL)arg2;
- (BOOL)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(BOOL)arg2;
- (BOOL)isMuteForAVChat:(id)arg1;
@property(readonly, nonatomic) BOOL systemSupportsBackFacingCamera;
@property(readonly, nonatomic) BOOL systemSupportsFrontFacingCamera;
@property(readonly, nonatomic) unsigned int overallChatState;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (void)cleanupAVInterface;
- (BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)endAVConferenceWithChat:(id)arg1 callID:(int)arg2;
- (id)natTypeForAVChat:(id)arg1;
- (void)updateInterruptionForChat:(id)arg1;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void)initAVInterface;
@property(readonly, nonatomic) BOOL isAVInterfaceReady;
- (int)endConferenceForAVChat:(id)arg1;
- (void)chatStateUpdated;
- (void)unsetDelegate:(id)arg1;
- (void)_avChatDealloc:(id)arg1;
@property(readonly, nonatomic) BOOL systemCanAudioChat;
@property(readonly, nonatomic) BOOL systemCanVideoChat;
- (void)startInterruptionForChat:(id)arg1;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2;
@property(nonatomic) void *localVideoLayer;
- (BOOL)stopPreview;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) id controller;
@property id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

