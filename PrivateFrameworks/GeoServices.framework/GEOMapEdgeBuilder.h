//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

@interface GEOMapEdgeBuilder : GEOMapRequest
{
    BOOL _buildAhead;
    BOOL _buildBehind;
    Matrix_8746f91e _firstTilePoint;
    Matrix_8746f91e _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;
    CDUnknownBlockType _edgeHandler;
    unordered_set_2ba6858f _tileKeysSeen;
    BOOL _searchDirection;
}

@property(readonly, nonatomic) GEOMapAccess *map;
@property(copy, nonatomic) CDUnknownBlockType edgeHandler; // @synthesize edgeHandler=_edgeHandler;
- (BOOL)_edgeStart:(const Matrix_8746f91e *)arg1 end:(const Matrix_8746f91e *)arg2 connectsTo:(const CDStruct_c3b9c2ee *)arg3 rect:(const CDStruct_02837cd9 *)arg4;
- (BOOL)_pointConnects:(const Matrix_8746f91e *)arg1 rect:(const CDStruct_02837cd9 *)arg2 to:(const CDStruct_c3b9c2ee *)arg3;
- (void)buildEdge:(CDUnknownBlockType)arg1;
- (id)initWithMap:(id)arg1;
- (BOOL)_findEdgeBehindInTile:(id)arg1;
- (BOOL)_findEdgeAheadInTile:(id)arg1;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (BOOL)_findNextEdge;
- (void)_buildCompleteEdge;
- (BOOL)_findEdgeBehind;
- (BOOL)_findEdgeAhead;
- (id)_lastTile;
- (Matrix_8746f91e)_lastPoint;
- (CDStruct_dde70fb6 *)_lastJunction;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const Matrix_8746f91e *)arg2 findAhead:(BOOL)arg3;
- (id)_firstTile;
- (Matrix_8746f91e)_firstPoint;
- (CDStruct_dde70fb6 *)_firstJunction;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)cancel;

@end

