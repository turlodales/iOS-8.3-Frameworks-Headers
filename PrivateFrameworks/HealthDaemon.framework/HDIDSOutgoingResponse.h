//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDNanoSyncDescription.h"

@class HDIDSIncomingRequest, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription>
{
    BOOL _doNotCompress;
    BOOL _forceLocalDelivery;
    BOOL _sent;
    unsigned short _messageID;
    HDIDSIncomingRequest *_request;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned int _priority;
    NSDictionary *_persistentUserInfo;
    id _pbResponse;
    double _sendTimeout;
}

@property(nonatomic) __weak HDIDSIncomingRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
- (void)configureWithStatus:(id)arg1 pairingInfo:(id)arg2;
- (void)configureWithActivationRestore:(id)arg1 pairingInfo:(id)arg2;
- (id)nanoSyncDescription;
@property(nonatomic) BOOL forceLocalDelivery; // @synthesize forceLocalDelivery=_forceLocalDelivery;
@property(nonatomic) BOOL doNotCompress; // @synthesize doNotCompress=_doNotCompress;
@property(getter=isSent) BOOL sent; // @synthesize sent=_sent;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
- (void).cxx_destruct;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
- (void)send;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

