//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKCoastlineGroup : NSObject
{
    shared_ptr_6e6219d6 _styleQuery;
    unsigned int _tilePointSize;
    struct unique_ptr<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh>>> _coastlineMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh>>> _innerGlowMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh>>> _outerGlowMeshVendor;
}

@property(readonly, nonatomic) const MeshVendor_43d71dca *outerGlowMeshVendor;
@property(readonly, nonatomic) const MeshVendor_43d71dca *innerGlowMeshVendor;
- (void)addCoastlineFeature:(CDStruct_153464bf *)arg1;
- (id)initWithStyleQuery:(shared_ptr_6e6219d6)arg1 tilePointSize:(unsigned int)arg2;
@property(readonly, nonatomic) const MeshVendor_82aa5b9e *coastlineMeshVendor;
@property(readonly, nonatomic) shared_ptr_6e6219d6 styleQuery; // @synthesize styleQuery=_styleQuery;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

