//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying>
{
    long long _size;
    NSData *_signature;
    BOOL _lastSection;
    struct {
        unsigned int size:1;
        unsigned int lastSection:1;
    } _has;
}

@property(nonatomic) BOOL hasSize;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL lastSection; // @synthesize lastSection=_lastSection;
@property(nonatomic) BOOL hasLastSection;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) BOOL hasSignature;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(nonatomic) long long size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

