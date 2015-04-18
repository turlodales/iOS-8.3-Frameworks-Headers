//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class LocalizerParameters, NSMutableArray;

@interface CLAvailabilityTile : PBCodable <NSCopying>
{
    double _availabilityZScoreConfidenceInterval;
    unsigned int _locationOfInterestMergeRadiusKM;
    LocalizerParameters *_parameterOverrides;
    unsigned int _preferPredictionWithinNActivityCycles;
    unsigned int _prefetchMaxFloorCount;
    unsigned int _prefetchRadiusKM;
    NSMutableArray *_venues;
    struct {
        unsigned int availabilityZScoreConfidenceInterval:1;
        unsigned int locationOfInterestMergeRadiusKM:1;
        unsigned int preferPredictionWithinNActivityCycles:1;
        unsigned int prefetchMaxFloorCount:1;
        unsigned int prefetchRadiusKM:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) LocalizerParameters *parameterOverrides; // @synthesize parameterOverrides=_parameterOverrides;
@property(retain, nonatomic) NSMutableArray *venues; // @synthesize venues=_venues;
@property(nonatomic) BOOL hasPreferPredictionWithinNActivityCycles;
@property(nonatomic) unsigned int preferPredictionWithinNActivityCycles; // @synthesize preferPredictionWithinNActivityCycles=_preferPredictionWithinNActivityCycles;
@property(nonatomic) BOOL hasLocationOfInterestMergeRadiusKM;
@property(nonatomic) unsigned int locationOfInterestMergeRadiusKM; // @synthesize locationOfInterestMergeRadiusKM=_locationOfInterestMergeRadiusKM;
@property(nonatomic) BOOL hasPrefetchMaxFloorCount;
@property(nonatomic) unsigned int prefetchMaxFloorCount; // @synthesize prefetchMaxFloorCount=_prefetchMaxFloorCount;
@property(nonatomic) BOOL hasPrefetchRadiusKM;
@property(nonatomic) unsigned int prefetchRadiusKM; // @synthesize prefetchRadiusKM=_prefetchRadiusKM;
@property(nonatomic) BOOL hasAvailabilityZScoreConfidenceInterval;
@property(nonatomic) double availabilityZScoreConfidenceInterval; // @synthesize availabilityZScoreConfidenceInterval=_availabilityZScoreConfidenceInterval;
@property(readonly, nonatomic) BOOL hasParameterOverrides;
- (id)venuesAtIndex:(unsigned int)arg1;
- (void)clearVenues;
- (unsigned int)venuesCount;
- (void)addVenues:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

