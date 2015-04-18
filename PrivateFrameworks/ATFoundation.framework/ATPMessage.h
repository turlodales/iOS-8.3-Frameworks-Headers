//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class ATPError, ATPRequest, ATPResponse, NSData;

@interface ATPMessage : PBCodable <NSCopying>
{
    unsigned int _messageID;
    int _messageType;
    NSData *_parameters;
    NSData *_paramsSignature;
    NSData *_payload;
    NSData *_payloadSignature;
    ATPRequest *_request;
    ATPResponse *_response;
    unsigned int _sessionID;
    ATPError *_streamError;
    BOOL _additionalPayload;
    struct {
        unsigned int messageID:1;
        unsigned int messageType:1;
        unsigned int sessionID:1;
        unsigned int additionalPayload:1;
    } _has;
}

@property(retain, nonatomic) ATPRequest *request; // @synthesize request=_request;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(retain, nonatomic) NSData *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) unsigned int messageID; // @synthesize messageID=_messageID;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) BOOL hasPayload;
@property(readonly, nonatomic) BOOL hasRequest;
@property(readonly, nonatomic) BOOL hasResponse;
@property(retain, nonatomic) ATPResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) ATPError *streamError; // @synthesize streamError=_streamError;
- (id)formattedDescription;
@property(nonatomic) BOOL additionalPayload; // @synthesize additionalPayload=_additionalPayload;
@property(retain, nonatomic) NSData *payloadSignature; // @synthesize payloadSignature=_payloadSignature;
@property(retain, nonatomic) NSData *paramsSignature; // @synthesize paramsSignature=_paramsSignature;
@property(readonly, nonatomic) BOOL hasStreamError;
@property(nonatomic) BOOL hasAdditionalPayload;
@property(readonly, nonatomic) BOOL hasPayloadSignature;
@property(readonly, nonatomic) BOOL hasParamsSignature;
@property(readonly, nonatomic) BOOL hasParameters;
@property(nonatomic) BOOL hasMessageID;
@property(nonatomic) BOOL hasMessageType;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;

@end

