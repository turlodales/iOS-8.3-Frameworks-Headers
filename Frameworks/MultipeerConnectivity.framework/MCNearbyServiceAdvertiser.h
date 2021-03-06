//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"

@class MCPeerID, NSData, NSDictionary, NSMutableDictionary, NSNetService, NSObject<OS_dispatch_queue>, NSString;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate>
{
    id <MCNearbyServiceAdvertiserDelegate> _delegate;
    BOOL _isAdvertising;
    BOOL _wasAdvertising;
    MCPeerID *_myPeerID;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    NSString *_formattedServiceType;
    NSNetService *_networkServer;
    NSData *_TXTRecordData;
    NSMutableDictionary *_peers;
    int _outgoingInviteID;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_invites;
}

@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *peers; // @synthesize peers=_peers;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
@property(nonatomic) __weak id <MCNearbyServiceAdvertiserDelegate> delegate;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *invites; // @synthesize invites=_invites;
@property(nonatomic) int outgoingInviteID; // @synthesize outgoingInviteID=_outgoingInviteID;
@property(copy, nonatomic) NSString *formattedServiceType; // @synthesize formattedServiceType=_formattedServiceType;
@property(copy, nonatomic) NSDictionary *discoveryInfo; // @synthesize discoveryInfo=_discoveryInfo;
- (void)startAdvertisingPeer;
- (id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3;
- (void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)parseIDString:(id *)arg1 displayName:(id *)arg2 fromIdentifier:(id)arg3;
- (void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2;
- (void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL wasAdvertising; // @synthesize wasAdvertising=_wasAdvertising;
- (void)stopAdvertisingPeer;
- (void)syncStopAdvertisingPeer;
- (void)syncStartAdvertisingPeer;
@property(nonatomic) BOOL isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(retain, nonatomic) NSNetService *networkServer; // @synthesize networkServer=_networkServer;
- (id)makeTXTRecordDataWithDiscoveryInfo:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (id)txtRecordDataWithDiscoveryInfo:(id)arg1;
@property(readonly, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
- (void)netServiceDidPublish:(id)arg1;
@property(retain, nonatomic) NSData *TXTRecordData; // @synthesize TXTRecordData=_TXTRecordData;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

