//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FTServices/IDSFaceTimeMessage.h>

#import "NSCopying.h"

@class NSData, NSNumber, NSString;

@interface IDSRelayCancelMessage : IDSFaceTimeMessage <NSCopying>
{
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSNumber *_reason;
    NSData *_relayConnectionID;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

- (id)requiredKeys;
@property(copy) NSNumber *reason; // @synthesize reason=_reason;
- (id)messageBody;
- (id)bagKey;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;

@end

