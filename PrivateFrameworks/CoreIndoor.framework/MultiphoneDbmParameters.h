//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface MultiphoneDbmParameters : PBCodable <NSCopying>
{
    float _searchWidth;
    float _variancePerSecond;
    struct {
        unsigned int searchWidth:1;
        unsigned int variancePerSecond:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) float searchWidth; // @synthesize searchWidth=_searchWidth;
@property(nonatomic) float variancePerSecond; // @synthesize variancePerSecond=_variancePerSecond;
@property(nonatomic) BOOL hasSearchWidth;
@property(nonatomic) BOOL hasVariancePerSecond;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

