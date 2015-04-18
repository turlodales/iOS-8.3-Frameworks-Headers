//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOStep;

@interface GEOComposedRouteStep : NSObject
{
    GEOComposedRoute *_composedRoute;
    GEOStep *_geoStep;
    unsigned int _stepIndex;
    struct _NSRange _pointRange;
    struct _NSRange _maneuverPointRange;
    int _routeLegType;
}

@property(readonly, nonatomic) GEOStep *geoStep; // @synthesize geoStep=_geoStep;
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) unsigned int endPointIndex;
@property(nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) unsigned int startPointIndex;
@property(readonly, nonatomic) unsigned int distance;
@property(readonly, nonatomic) BOOL hasDuration;
@property(readonly, nonatomic) struct _NSRange maneuverPointRange; // @synthesize maneuverPointRange=_maneuverPointRange;
- (id)firstNameOrBranch;
@property(readonly, nonatomic, getter=getNextStep) GEOComposedRouteStep *nextStep;
@property(readonly, nonatomic, getter=getPreviousStep) GEOComposedRouteStep *previousStep;
@property(readonly, nonatomic) CDStruct_c3b9c2ee endGeoCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee startGeoCoordinate;
@property(readonly, nonatomic) BOOL isUncertainArrival;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 stepIndex:(unsigned int)arg3 pointRange:(struct _NSRange)arg4;
@property(readonly, nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property(readonly, nonatomic) int routeLegType; // @synthesize routeLegType=_routeLegType;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(int)arg3 stepIndex:(unsigned int)arg4 pointRange:(struct _NSRange)arg5 maneuverPointRange:(struct _NSRange)arg6;
@property(readonly, nonatomic) unsigned int maneuverStartPointIndex;
@property(readonly, nonatomic) unsigned int maneuverEndPointIndex;
@property(readonly, nonatomic) unsigned int stepIndex; // @synthesize stepIndex=_stepIndex;
@property(readonly, nonatomic) unsigned int duration;
- (id)description;
- (void)dealloc;

@end
