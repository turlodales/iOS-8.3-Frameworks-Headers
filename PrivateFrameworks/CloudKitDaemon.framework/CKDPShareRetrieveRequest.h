//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPRecordZoneIdentifier, CKDPShareIdentifier;

@interface CKDPShareRetrieveRequest : PBRequest <NSCopying>
{
    CKDPShareIdentifier *_shareId;
    CKDPRecordZoneIdentifier *_zoneId;
}

+ (id)options;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneId; // @synthesize zoneId=_zoneId;
@property(readonly, nonatomic) BOOL hasZoneId;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(readonly, nonatomic) BOOL hasShareId;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

