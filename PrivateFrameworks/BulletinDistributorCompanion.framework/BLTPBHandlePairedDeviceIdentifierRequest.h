//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString;

@interface BLTPBHandlePairedDeviceIdentifierRequest : PBRequest <NSCopying>
{
    NSString *_identifier;
    BOOL _carry;
    struct {
        unsigned int carry:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(nonatomic) BOOL hasCarry;
@property(nonatomic) BOOL carry; // @synthesize carry=_carry;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

