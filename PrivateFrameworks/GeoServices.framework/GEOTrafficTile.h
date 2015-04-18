//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

@interface GEOTrafficTile : PBCodable <NSCopying>
{
    NSMutableArray *_trafficIncidents;
    NSMutableArray *_trafficSegments;
    NSData *_vertices;
}

@property(retain, nonatomic) NSMutableArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(retain, nonatomic) NSData *vertices; // @synthesize vertices=_vertices;
@property(retain, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (CDStruct_1ef3fb1f *)createUnpackedVerticesWithGutterSize:(int)arg1;
@property(readonly, nonatomic) BOOL hasVertices;
- (id)trafficIncidentAtIndex:(unsigned int)arg1;
- (void)clearTrafficIncidents;
- (unsigned int)trafficIncidentsCount;
- (id)trafficSegmentAtIndex:(unsigned int)arg1;
- (void)clearTrafficSegments;
- (unsigned int)trafficSegmentsCount;
- (void)addTrafficIncident:(id)arg1;
- (void)addTrafficSegment:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

