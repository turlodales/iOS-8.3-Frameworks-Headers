//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSTimer;

@interface WorldClockManager : NSObject
{
    BOOL _dirty;
    NSMutableArray *_cities;
    NSTimer *_weatherUpdateTimer;
    NSDate *lastModified;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
- (void)removeAllCities;
- (id)weatherReachabilityURL;
- (void)updateWeatherDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)moveCityFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)removeCityAtIndex:(unsigned int)arg1;
- (void)removeCity:(id)arg1;
- (unsigned int)addCity:(id)arg1;
- (id)cityWithIdUrl:(id)arg1;
- (BOOL)checkIfCitiesModified;
- (void)loadCities;
- (void)updateWeatherDataForCities:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)canAddCity;
- (void)saveCities;
- (id)fixUpCityProperties:(id)arg1;
- (id)worldClockCityFromPersistenceArray:(id)arg1;
- (id)worldClockCityFromPersistenceDictionary:(id)arg1;
- (void)_notifyNano;
- (void)pushCityPropertiesToPreferences;
- (id)worldClockCityFromPersistenceRepresentation:(id)arg1;
- (void)addDefaultCitiesIfNeeded;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;

@end

