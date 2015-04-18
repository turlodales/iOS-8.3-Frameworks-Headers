//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, SALocalSearchMapItem, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand
{
}

+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showMapPoints;
@property(nonatomic) BOOL showTraffic;
@property(nonatomic) BOOL showDirections;
@property(retain, nonatomic) SALocalSearchMapItem *itemSource;
@property(retain, nonatomic) SALocalSearchMapItem *itemDestination;
@property(copy, nonatomic) NSString *directionsType;
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *language;
- (id)groupIdentifier;
@property(retain, nonatomic) SALocalSearchMapItemList *searchItems;

@end

