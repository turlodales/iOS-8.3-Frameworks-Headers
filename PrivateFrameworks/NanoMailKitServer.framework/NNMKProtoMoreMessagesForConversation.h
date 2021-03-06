//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMoreMessagesForConversation : PBCodable <NSCopying>
{
    NSMutableArray *_addedMessages;
    NSString *_conversationId;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    CDStruct_a125a100 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *addedMessages; // @synthesize addedMessages=_addedMessages;
- (id)addedMessageAtIndex:(unsigned int)arg1;
- (void)clearAddedMessages;
- (unsigned int)addedMessagesCount;
- (void)addAddedMessage:(id)arg1;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(readonly, nonatomic) BOOL hasDateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(readonly, nonatomic) BOOL hasConversationId;
@property(nonatomic) BOOL hasFullSyncVersion;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

