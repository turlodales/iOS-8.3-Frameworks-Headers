//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MIPArtist, MIPSeries, NSString;

@interface MIPTVShow : PBCodable <NSCopying>
{
    MIPArtist *_artist;
    NSString *_episodeId;
    NSString *_episodeSortId;
    NSString *_networkName;
    int _seasonNumber;
    MIPSeries *_series;
    int _videoQuality;
    struct {
        unsigned int seasonNumber:1;
        unsigned int videoQuality:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(retain, nonatomic) NSString *episodeSortId; // @synthesize episodeSortId=_episodeSortId;
@property(retain, nonatomic) NSString *episodeId; // @synthesize episodeId=_episodeId;
@property(nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) BOOL hasNetworkName;
@property(nonatomic) BOOL hasVideoQuality;
@property(readonly, nonatomic) BOOL hasEpisodeSortId;
@property(readonly, nonatomic) BOOL hasEpisodeId;
@property(nonatomic) BOOL hasSeasonNumber;
@property(readonly, nonatomic) BOOL hasSeries;
@property(readonly, nonatomic) BOOL hasArtist;
- (void).cxx_destruct;
@property(nonatomic) int videoQuality; // @synthesize videoQuality=_videoQuality;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

