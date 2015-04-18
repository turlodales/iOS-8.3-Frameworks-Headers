//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSString, TUCallModelState, TUProxyCall;

@protocol TUCallServicesDaemonObserver
- (void)handleCallModelStateChanged:(TUCallModelState *)arg1;
- (void)handleCurrentProxyCallsChanged:(NSArray *)arg1;
- (void)handleCallContinuityStateChangedForProxyCall:(TUProxyCall *)arg1;
- (void)handleCallStatusChangedForProxyCall:(TUProxyCall *)arg1;
- (void)handleHardPauseDigitsAvailibilityChangedTo:(unsigned short)arg1 digits:(NSString *)arg2;
- (void)handleMutedChangedTo:(BOOL)arg1;
- (void)handleRemoteFrequencyChangedTo:(NSData *)arg1;
- (void)handleLocalFrequencyChangedTo:(NSData *)arg1;
- (void)handleShouldSuppressRingtoneChangedTo:(BOOL)arg1 forCallWithUUID:(NSString *)arg2;
- (void)handleDisconnectedReasonChangedTo:(int)arg1 forCallWithUUID:(NSString *)arg2;
- (void)handleEndpointOnCurrentDeviceChangedTo:(BOOL)arg1 forCallWithUUID:(NSString *)arg2;
- (void)handleWantsHoldMusicChangedTo:(BOOL)arg1 forCallWithUUID:(NSString *)arg2;
@end

