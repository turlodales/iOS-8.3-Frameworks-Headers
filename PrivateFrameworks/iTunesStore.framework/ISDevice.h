//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISSingleton.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface ISDevice : NSObject <ISSingleton>
{
    unsigned int _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
- (id)copyProtocolConditionalContext;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id *)arg2;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (void)resetLocationAndPrivacy;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)takePowerAssertion:(id)arg1;
@property(readonly) NSString *hardwareName;
- (int)_deviceClass;
@property(readonly) NSString *guid;
- (BOOL)releasePowerAssertion:(id)arg1;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *deviceName;
@property(readonly) NSString *systemName;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

