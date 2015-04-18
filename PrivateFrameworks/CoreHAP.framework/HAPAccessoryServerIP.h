//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

#import "HAPHTTPClientDebugDelegate.h"
#import "HAPHTTPClientDelegate.h"

@class HAPAccessory, HAPHTTPClient, NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate>
{
    struct MFiSAP *_mfiSAP;
    struct PairingSessionPrivate *_pairingSession;
    unsigned long long _featureFlags;
    BOOL _establishingSecureConnection;
    NSString *_deviceID;
    NSString *_model;
    NSString *_protocolVersion;
    NSString *_sourceVersion;
    unsigned int _configNumber;
    unsigned int _stateNumber;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDictionary *_bonjourDeviceInfo;
    id <HAPAccessoryServerIPDelegatePrivate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_accessoryServerName;
    NSArray *_ipServices;
    NSMutableArray *_queuedOperations;
    HAPAccessory *_primaryAccessoryForServer;
    HAPHTTPClient *_httpClient;
    CDUnknownBlockType _pairVerifyCompletionBlock;
    NSString *_controllerUsername;
    CDUnknownBlockType _netServiceResolveCompletionBlock;
}

- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)services;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) CDUnknownBlockType netServiceResolveCompletionBlock; // @synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock;
@property(retain, nonatomic) NSString *controllerUsername; // @synthesize controllerUsername=_controllerUsername;
@property(retain, nonatomic) NSArray *ipServices; // @synthesize ipServices=_ipServices;
@property(copy, nonatomic) NSString *accessoryServerName; // @synthesize accessoryServerName=_accessoryServerName;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)stopPairingWithError:(id *)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)continuePairingAfterAuthPrompt;
- (void)startPairing;
- (void)discoverAccessories;
- (int)linkType;
- (id)primaryAccessory;
- (void)updateWithBonjourDeviceInfo:(id)arg1;
- (id)_serverName;
- (id)briefDescription;
- (id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClientDidCloseConnectionDueToServer:(id)arg1;
- (void)httpClient:(id)arg1 didReceiveEvent:(id)arg2;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePairingsResponseObject:(id)arg1 type:(unsigned int)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(BOOL)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (long)_handlePairVerifyCompletionWithData:(id)arg1;
- (long)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (long)_handlePairSetupCompletionWithData:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
- (long)_ensureHTTPClientSetUp;
- (long)_pairVerifyStart;
- (BOOL)_mergeExistingService:(id)arg1 withNewService:(id)arg2;
- (BOOL)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2;
- (BOOL)_updateAccessories:(id)arg1;
@property(retain, nonatomic) HAPAccessory *primaryAccessoryForServer; // @synthesize primaryAccessoryForServer=_primaryAccessoryForServer;
- (void)_copyPropertiesForPrimaryAccessoryFromAccessory:(id)arg1;
- (id)_parseSerializedAccessory:(id)arg1;
- (void)_parseAttributeDatabase:(id)arg1;
- (void)_processQueuedOperationsWithError:(id)arg1;
@property(nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(nonatomic) unsigned int stateNumber; // @synthesize stateNumber=_stateNumber;
@property(nonatomic) unsigned int configNumber; // @synthesize configNumber=_configNumber;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
- (void)_setDeviceIDWithString:(id)arg1;
- (BOOL)_parseTXTRecordDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *bonjourDeviceInfo; // @synthesize bonjourDeviceInfo=_bonjourDeviceInfo;
- (BOOL)_processEvent:(id)arg1 matchedCharacteristic:(id *)arg2;
- (void)_handleEventResponseObject:(id)arg1 type:(unsigned int)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(BOOL)arg6 completion:(CDUnknownBlockType)arg7 queue:(id)arg8;
- (void)_queueEnableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_handleWriteResponseObject:(id)arg1 type:(unsigned int)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_queueWriteCharacteristicValues:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleHTTPClientErrors;
- (void)_handleReadResponseObject:(id)arg1 type:(unsigned int)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_queueReadCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSMutableArray *queuedOperations; // @synthesize queuedOperations=_queuedOperations;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_tearDownSession;
- (long)_pairSetupTryPassword:(id)arg1;
- (long)_continuePairingAfterAuthPrompt;
- (long)_pairSetupStart;
- (void)_isAccessoryPublicKeyPresent:(char *)arg1 registeredWithHomeKit:(char *)arg2;
- (void)_establishSecureSession;
@property BOOL establishingSecureConnection; // @synthesize establishingSecureConnection=_establishingSecureConnection;
- (id)_serverIdentifier;
- (void)_establishSecureConnectionAndFetchAttributeDatabase;
- (void)_getAttributeDatabase;
- (BOOL)_isSessionEstablished;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (BOOL)isPaired;
- (BOOL)hasPairings;
- (void)_updateWithBonjourDeviceInfo:(id)arg1;
- (BOOL)_checkPairedState;
@property(retain, nonatomic) HAPHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
- (id)_deviceID;
- (BOOL)_parseAndValidateTXTRecord;
@property(copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)identifier;
- (void)invalidate;
- (id)name;
@property(nonatomic) __weak id <HAPAccessoryServerIPDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

