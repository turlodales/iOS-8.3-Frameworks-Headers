//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSUUID;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    int _type;
    id <GEOMapItem> _geoMapItem;
    NSArray *_visits;
    double _latitude;
    double _longitude;
    double _uncertainty;
    double _confidence;
}

+ (id)locationOfInterestTypeToString:(int)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(int)arg6 geoMapItem:(id)arg7 visits:(id)arg8;
- (int)frequencyCompare:(id)arg1;
- (int)recentCompare:(id)arg1;
- (id)localizedAllVisitsDescription;
- (id)localizedLastVisitDescription;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
- (id)preciseName;
- (id)relativeNameToMapItem:(id)arg1;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mapItem;

@end

