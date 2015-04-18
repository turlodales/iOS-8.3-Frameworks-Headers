//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface PdrParameters : PBCodable <NSCopying>
{
    float _biasVariancePerSecond;
    float _gyroVariance;
    float _magnetometerReliability;
    float _omegaVariancePerSecond;
    float _pdrVsWifi;
    struct {
        unsigned int biasVariancePerSecond:1;
        unsigned int gyroVariance:1;
        unsigned int magnetometerReliability:1;
        unsigned int omegaVariancePerSecond:1;
        unsigned int pdrVsWifi:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) float omegaVariancePerSecond; // @synthesize omegaVariancePerSecond=_omegaVariancePerSecond;
@property(nonatomic) float magnetometerReliability; // @synthesize magnetometerReliability=_magnetometerReliability;
@property(nonatomic) float gyroVariance; // @synthesize gyroVariance=_gyroVariance;
@property(nonatomic) float biasVariancePerSecond; // @synthesize biasVariancePerSecond=_biasVariancePerSecond;
@property(nonatomic) float pdrVsWifi; // @synthesize pdrVsWifi=_pdrVsWifi;
@property(nonatomic) BOOL hasOmegaVariancePerSecond;
@property(nonatomic) BOOL hasMagnetometerReliability;
@property(nonatomic) BOOL hasGyroVariance;
@property(nonatomic) BOOL hasBiasVariancePerSecond;
@property(nonatomic) BOOL hasPdrVsWifi;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

