//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOAddress, GEOMapRegion, NSArray, NSData, NSDate, NSDictionary, NSString;

@protocol GEOMapItem <NSObject>
@property(readonly, nonatomic) BOOL isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) BOOL contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) NSString *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property(readonly, nonatomic) NSData *encodedData;
@property(readonly, nonatomic) NSString *name;
- (NSString *)spokenNameForLocale:(NSString *)arg1;
@end

