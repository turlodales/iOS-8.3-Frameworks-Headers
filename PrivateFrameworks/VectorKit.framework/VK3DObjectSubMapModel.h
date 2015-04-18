//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKBuildingFootprintMapModel;

@interface VK3DObjectSubMapModel : NSObject
{
    struct unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup>>> _objectShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedBuilding::Shader::Setup>>> _foggedObjectShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object2DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object3DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object2DRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object3DRenderStateWithBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _objectRenderItemPool;
    VKBuildingFootprintMapModel *_buildingMapModel;
    int _vectorType;
}

@property(nonatomic) VKBuildingFootprintMapModel *buildingMapModel; // @synthesize buildingMapModel=_buildingMapModel;
- (void)resetPools;
- (void)flushPools;
- (id)initWithBuildingMapModel:(id)arg1;
@property(nonatomic) int vectorType; // @synthesize vectorType=_vectorType;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

