//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorTile.h>

@class NSArray, NSData, NSMutableArray, VKTileKeyMap;

@interface VKTrafficTile : VKVectorTile
{
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer>> _trafficLayer;
    struct _GEOTileKey _dataKey;
    NSData *_data;
    VKTileKeyMap *_dynamicTiles;
    struct unordered_map<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>>>, std::__1::hash<vk::TrafficBatchKey>, std::__1::equal_to<vk::TrafficBatchKey>, std::__1::allocator<std::__1::pair<const vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>>>>>> *_trafficCollection;
    NSMutableArray *_incidents;
    struct TrafficSkeletonTile _trafficData;
}

@property(readonly, nonatomic) VKTileKeyMap *dynamicTiles; // @synthesize dynamicTiles=_dynamicTiles;
@property(readonly, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
- (void)buildTrafficMeshWithRoadData:(id)arg1 withDevice:(struct Device *)arg2;
- (void)enumerateTrafficRoadPiecesForTile:(id)arg1 usingFunction:(const function_ccedc87b *)arg2;
- (void)buildSkeletonMap;
- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 data:(id)arg3 styleManager:(id)arg4 sharedResources:(id)arg5 contentScale:(float)arg6 device:(struct Device *)arg7;
@property(nonatomic) const struct _GEOTileKey *dataKey;
- (void)buildTrafficMeshWithRoadData:(id)arg1 dynamicTile:(id)arg2 trafficAccum:(struct TrafficAccum *)arg3 styleSession:(StyleResolutionSession_7ac5772b *)arg4;
- (void)buildIncidentsForDynamic:(id)arg1 withRoadData:(id)arg2 styleSession:(StyleResolutionSession_7ac5772b *)arg3;
- (BOOL)_buildStartOffset:(float *)arg1 endOffset:(float *)arg2 forLine:(CDStruct_153464bf *)arg3 forSkeleton:(const struct Record *)arg4 forRange:(struct _NSRange)arg5 forFlow:(const struct Flow *)arg6 forPoints:(Matrix_8746f91e *)arg7;
@property(readonly, nonatomic) struct TrafficLayer *trafficLayer;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end

