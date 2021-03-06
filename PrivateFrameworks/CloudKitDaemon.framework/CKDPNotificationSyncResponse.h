//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying>
{
    NSData *_changeID;
    NSMutableArray *_pushMessages;
    BOOL _moreAvailable;
    struct {
        unsigned int moreAvailable:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(retain, nonatomic) NSMutableArray *pushMessages; // @synthesize pushMessages=_pushMessages;
@property(retain, nonatomic) NSData *changeID; // @synthesize changeID=_changeID;
@property(nonatomic) BOOL hasMoreAvailable;
@property(readonly, nonatomic) BOOL hasChangeID;
- (id)pushMessageAtIndex:(unsigned int)arg1;
- (void)clearPushMessages;
- (unsigned int)pushMessagesCount;
- (void)addPushMessage:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

