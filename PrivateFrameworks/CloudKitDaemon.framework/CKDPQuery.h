//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying>
{
    NSMutableArray *_filters;
    int _queryOperator;
    NSMutableArray *_sorts;
    NSMutableArray *_types;
    BOOL _distinct;
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL distinct; // @synthesize distinct=_distinct;
@property(retain, nonatomic) NSMutableArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
@property(nonatomic) BOOL hasQueryOperator;
@property(nonatomic) int queryOperator; // @synthesize queryOperator=_queryOperator;
@property(nonatomic) BOOL hasDistinct;
- (id)sortsAtIndex:(unsigned int)arg1;
- (void)clearSorts;
- (unsigned int)sortsCount;
- (id)filtersAtIndex:(unsigned int)arg1;
- (void)clearFilters;
- (unsigned int)filtersCount;
- (id)typesAtIndex:(unsigned int)arg1;
- (void)clearTypes;
- (unsigned int)typesCount;
- (void)addSorts:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)addTypes:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

