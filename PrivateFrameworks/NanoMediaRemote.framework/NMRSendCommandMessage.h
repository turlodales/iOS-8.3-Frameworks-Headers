//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMRMediaRemoteProtobufCodable.h"

@class NSDate, NSDictionary, NSString, _NMRSendCommandMessageProtobuf;

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable>
{
    _NMRSendCommandMessageProtobuf *_protobuf;
}

+ (id)messageWithCommand:(unsigned int)arg1 options:(id)arg2;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2;
@property(readonly, nonatomic) NSDate *serializationDate;
- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) unsigned int command;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

