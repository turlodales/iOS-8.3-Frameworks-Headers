//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPQueryFilter : PBCodable <NSCopying>
{
    CKDPLocationBound *_bounds;
    CKDPRecordFieldIdentifier *_fieldName;
    CKDPRecordFieldValue *_fieldValue;
    int _type;
    CDStruct_f953fb60 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasType;
@property(retain, nonatomic) CKDPRecordFieldValue *fieldValue; // @synthesize fieldValue=_fieldValue;
@property(readonly, nonatomic) BOOL hasFieldValue;
@property(readonly, nonatomic) BOOL hasBounds;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldName; // @synthesize fieldName=_fieldName;
@property(readonly, nonatomic) BOOL hasFieldName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) CKDPLocationBound *bounds; // @synthesize bounds=_bounds;

@end

