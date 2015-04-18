//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying>
{
    NSMutableArray *_problemStatus;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *problemStatus; // @synthesize problemStatus=_problemStatus;
- (id)problemStatusAtIndex:(unsigned int)arg1;
- (void)clearProblemStatus;
- (unsigned int)problemStatusCount;
- (void)addProblemStatus:(id)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

