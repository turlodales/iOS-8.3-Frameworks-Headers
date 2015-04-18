//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PLRevGeoPlace : NSObject
{
    NSMutableArray *_placeTypeInfoMap[15];
    BOOL _isHome;
}

+ (CDUnknownBlockType)sortedAdditionalPlaceInfoComparator;
- (id)_placeInfosForOrderType:(unsigned int)arg1 createIfNeeded:(BOOL)arg2;
- (void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned int)arg2;
- (void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned int)arg3;
- (unsigned int)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned int)arg2;
- (void)_mergeGEOMapItem:(id)arg1;
@property(nonatomic) BOOL isHome; // @synthesize isHome=_isHome;
- (id)placeInfosForOrderType:(unsigned int)arg1;
- (id)bestPlaceInfoForOrderType:(unsigned int)arg1;
- (id)initWithGEOMapItem:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

