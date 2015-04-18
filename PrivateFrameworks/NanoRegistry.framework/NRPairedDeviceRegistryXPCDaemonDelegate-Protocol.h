//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRPropertyXPCDaemonDelegate.h"

@class NSData, NSNumber, NSString, NSUUID;

@protocol NRPairedDeviceRegistryXPCDaemonDelegate <NRPropertyXPCDaemonDelegate>
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(void (^)(void))arg1;
- (void)xpcAddRemoveRecoveryStepIDSFinalize:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepObliterate:(BOOL)arg1 withStatePath:(NSString *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepResetNVRAM:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepICloudDeletePaymentCards:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepStockholmReset:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepIDSUnpair:(BOOL)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepUnpairBluetooth:(BOOL)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepDeletePairingStore:(BOOL)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepRemoteUnpair:(BOOL)arg1 withAdvertisedName:(NSString *)arg2 andPairedDeviceID:(NSUUID *)arg3 block:(void (^)(void))arg4;
- (void)xpcAddRemoveRecoveryStepIDSUnpairStart:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepDeleteAccounts:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcAddRemoveRecoveryStepBackup:(BOOL)arg1 withPairingDeviceID:(NSUUID *)arg2 block:(void (^)(void))arg3;
- (void)xpcAddRemoveRecoveryStepDisableDaemons:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcSetObliterationEnabled:(BOOL)arg1 block:(void (^)(void))arg2;
- (void)xpcTriggerRecovery:(void (^)(void))arg1;
- (void)xpcRecoveryDescription:(void (^)(NSString *))arg1;
- (void)xpcResumePairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcSuspendPairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcPairingShouldContinue;
- (void)xpcUnpairWithDeviceID:(NSUUID *)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(void (^)(NSError *, unsigned int))arg3;
- (void)xpcNotifyPasscode:(NSNumber *)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcNotifyActivationCompleted:(NSUUID *)arg1 withSuccess:(BOOL)arg2;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcAbortPairingReason:(NSString *)arg1 withBlock:(void (^)(unsigned int))arg2;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *, unsigned int))arg2;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *, unsigned int))arg2;
- (void)xpcCompanionPasscodePairWithDeviceID:(NSUUID *)arg1 operationHasBegun:(void (^)(NSError *, unsigned int))arg2;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(NSString *)arg1 withOutOfBandPairingKey:(NSData *)arg2 operationHasBegun:(void (^)(NSError *, unsigned int))arg3;
- (void)xpcQueryStatus:(NSUUID *)arg1 statusData:(void (^)(unsigned int, NSDictionary *, NSUUID *, NRDevice *, BOOL, unsigned short, int, unsigned int))arg2;
@end

