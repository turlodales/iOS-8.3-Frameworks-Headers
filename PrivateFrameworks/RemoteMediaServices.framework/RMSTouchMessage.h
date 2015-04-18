//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface RMSTouchMessage : PBCodable <NSCopying>
{
    int _direction;
    unsigned int _repeatCount;
    int _sessionIdentifier;
    struct {
        unsigned int direction:1;
        unsigned int repeatCount:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasRepeatCount;
@property(nonatomic) BOOL hasSessionIdentifier;
@property(nonatomic) int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) BOOL hasDirection;
- (id)dictionaryRepresentation;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned int repeatCount; // @synthesize repeatCount=_repeatCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

