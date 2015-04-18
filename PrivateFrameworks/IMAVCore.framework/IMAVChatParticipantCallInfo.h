//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface IMAVChatParticipantCallInfo : NSObject
{
    NSDictionary *_relayInitiate;
    NSDictionary *_relayUpdate;
    NSDictionary *_relayCancel;
    NSData *_remoteNATIP;
    NSData *_localNATIP;
    NSData *_remoteICEData;
    NSData *_localICEData;
    NSString *_peerCN;
    NSNumber *_localNATType;
    NSNumber *_remoteNATType;
    unsigned int _callID;
    int _state;
    BOOL _isBeingHandedOff;
    BOOL _isAudioPaused;
    BOOL _isVideoPaused;
    BOOL _isReinitiate;
    unsigned int _localConnectionType;
    unsigned int _remoteConnectionType;
    BOOL _inviteNeedsDelivery;
    NSData *_localSKEData;
    NSData *_remoteSKEData;
}

@property(nonatomic) unsigned int remoteConnectionType; // @synthesize remoteConnectionType=_remoteConnectionType;
@property(nonatomic) unsigned int localConnectionType; // @synthesize localConnectionType=_localConnectionType;
@property(nonatomic) BOOL isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(readonly, nonatomic) BOOL isAudioPaused; // @synthesize isAudioPaused=_isAudioPaused;
@property(retain, nonatomic) NSData *remoteSKEData; // @synthesize remoteSKEData=_remoteSKEData;
@property(retain, nonatomic) NSDictionary *relayCancel; // @synthesize relayCancel=_relayCancel;
@property(retain, nonatomic) NSDictionary *relayInitiate; // @synthesize relayInitiate=_relayInitiate;
@property(retain, nonatomic) NSData *localICEData; // @synthesize localICEData=_localICEData;
@property(retain, nonatomic) NSData *localSKEData; // @synthesize localSKEData=_localSKEData;
@property(retain, nonatomic) NSData *localNATIP; // @synthesize localNATIP=_localNATIP;
@property(retain, nonatomic) NSNumber *localNATType; // @synthesize localNATType=_localNATType;
@property(retain, nonatomic) NSData *remoteNATIP; // @synthesize remoteNATIP=_remoteNATIP;
@property(retain, nonatomic) NSNumber *remoteNATType; // @synthesize remoteNATType=_remoteNATType;
@property(nonatomic) BOOL isReinitiate; // @synthesize isReinitiate=_isReinitiate;
@property(nonatomic) BOOL inviteNeedsDelivery; // @synthesize inviteNeedsDelivery=_inviteNeedsDelivery;
@property(nonatomic) BOOL isBeingHandedOff; // @synthesize isBeingHandedOff=_isBeingHandedOff;
@property(retain, nonatomic) NSData *remoteICEData; // @synthesize remoteICEData=_remoteICEData;
@property(retain, nonatomic) NSString *peerCN; // @synthesize peerCN=_peerCN;
@property(retain, nonatomic) NSDictionary *relayUpdate; // @synthesize relayUpdate=_relayUpdate;
@property(nonatomic) unsigned int callID; // @synthesize callID=_callID;
@property(readonly, nonatomic) BOOL isFinished;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)description;
- (id)init;
- (void)dealloc;

@end

