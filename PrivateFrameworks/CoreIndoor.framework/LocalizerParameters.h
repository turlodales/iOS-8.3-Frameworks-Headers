//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class BodyFixedDetectorParameters, InjectionParameters, MotionTruthParameters, MultiphoneDbmParameters, PdrParameters, PedometryCompassMotionParameters, WifiParameters;

@interface LocalizerParameters : PBCodable <NSCopying>
{
    unsigned long long _notifyIntervalNanos;
    int _bilinearWifi;
    BodyFixedDetectorParameters *_bodyFixed;
    float _confidenceFactor;
    InjectionParameters *_injection;
    int _localizerType;
    int _modeEstimator;
    float _motionPdrUnmodelledHeadingVariancePerSecond;
    MotionTruthParameters *_motionTruth;
    MultiphoneDbmParameters *_multiphoneDbm;
    unsigned int _numParticles;
    PdrParameters *_pdr;
    PedometryCompassMotionParameters *_pedomCompassMotion;
    float _time2dMotionVariancePerSecond;
    WifiParameters *_wifi;
    struct {
        unsigned int notifyIntervalNanos:1;
        unsigned int bilinearWifi:1;
        unsigned int confidenceFactor:1;
        unsigned int localizerType:1;
        unsigned int modeEstimator:1;
        unsigned int motionPdrUnmodelledHeadingVariancePerSecond:1;
        unsigned int numParticles:1;
        unsigned int time2dMotionVariancePerSecond:1;
    } _has;
}

@property(retain, nonatomic) WifiParameters *wifi; // @synthesize wifi=_wifi;
@property(readonly, nonatomic) BOOL hasWifi;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)initEmpty;
@property(retain, nonatomic) BodyFixedDetectorParameters *bodyFixed; // @synthesize bodyFixed=_bodyFixed;
@property(retain, nonatomic) PdrParameters *pdr; // @synthesize pdr=_pdr;
@property(nonatomic) float time2dMotionVariancePerSecond; // @synthesize time2dMotionVariancePerSecond=_time2dMotionVariancePerSecond;
@property(retain, nonatomic) InjectionParameters *injection; // @synthesize injection=_injection;
@property(retain, nonatomic) PedometryCompassMotionParameters *pedomCompassMotion; // @synthesize pedomCompassMotion=_pedomCompassMotion;
@property(retain, nonatomic) MultiphoneDbmParameters *multiphoneDbm; // @synthesize multiphoneDbm=_multiphoneDbm;
@property(retain, nonatomic) MotionTruthParameters *motionTruth; // @synthesize motionTruth=_motionTruth;
@property(nonatomic) float motionPdrUnmodelledHeadingVariancePerSecond; // @synthesize motionPdrUnmodelledHeadingVariancePerSecond=_motionPdrUnmodelledHeadingVariancePerSecond;
@property(nonatomic) float confidenceFactor; // @synthesize confidenceFactor=_confidenceFactor;
@property(nonatomic) int modeEstimator; // @synthesize modeEstimator=_modeEstimator;
@property(nonatomic) int bilinearWifi; // @synthesize bilinearWifi=_bilinearWifi;
@property(nonatomic) int localizerType; // @synthesize localizerType=_localizerType;
@property(nonatomic) unsigned int numParticles; // @synthesize numParticles=_numParticles;
@property(nonatomic) unsigned long long notifyIntervalNanos; // @synthesize notifyIntervalNanos=_notifyIntervalNanos;
@property(readonly, nonatomic) BOOL hasBodyFixed;
@property(readonly, nonatomic) BOOL hasPdr;
@property(nonatomic) BOOL hasTime2dMotionVariancePerSecond;
@property(readonly, nonatomic) BOOL hasInjection;
@property(readonly, nonatomic) BOOL hasPedomCompassMotion;
@property(readonly, nonatomic) BOOL hasMultiphoneDbm;
@property(readonly, nonatomic) BOOL hasMotionTruth;
@property(nonatomic) BOOL hasMotionPdrUnmodelledHeadingVariancePerSecond;
@property(nonatomic) BOOL hasConfidenceFactor;
@property(nonatomic) BOOL hasModeEstimator;
@property(nonatomic) BOOL hasBilinearWifi;
@property(nonatomic) BOOL hasLocalizerType;
@property(nonatomic) BOOL hasNumParticles;
@property(nonatomic) BOOL hasNotifyIntervalNanos;
- (void)updateDeepTo:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

