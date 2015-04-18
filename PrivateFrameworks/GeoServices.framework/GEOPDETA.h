//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPDETA : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _time;
    int _transportType;
    struct {
        unsigned int distance:1;
        unsigned int time:1;
        unsigned int transportType:1;
    } _has;
}

+ (int)recommendedTransportTypeForPlaceData:(id)arg1;
+ (id)etaForPlaceData:(id)arg1 transportType:(int)arg2;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) BOOL hasTime;
- (id)dictionaryRepresentation;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

