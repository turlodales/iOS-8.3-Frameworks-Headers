//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDAccessoryManagerDelegate.h"
#import "HMMessageReceiver.h"

@class HMDAccessoryManager, HMMessageDispatcher, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDAccessoryBrowser : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    HMMessageDispatcher *_messageDispatcher;
    HMDAccessoryManager *_accessoryManager;
    unsigned int _generationCounter;
    NSMutableSet *_browsingXPCConnections;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSMutableSet *browsingXPCConnections; // @synthesize browsingXPCConnections=_browsingXPCConnections;
@property(nonatomic) unsigned int generationCounter; // @synthesize generationCounter=_generationCounter;
- (void)_stopDiscoveringAccessories;
- (void)_stopSearchingWithXPCConnection:(id)arg1;
- (void)_startDiscoveringAccessories;
- (void)_handleInvalidatedXPCConnection:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (id)initWithMessageDispatcher:(id)arg1 accessoryManager:(id)arg2;
@property(retain, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerForMessages;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

