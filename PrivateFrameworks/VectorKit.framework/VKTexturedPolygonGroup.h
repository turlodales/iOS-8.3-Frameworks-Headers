//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKPolygonGroup.h>

@class GEOFeatureStyleAttributes, VKSharedResources;

@interface VKTexturedPolygonGroup : VKPolygonGroup
{
    VKSharedResources *_sharedResources;
    shared_ptr_479d1306 _texture;
    shared_ptr_479d1306 _textureVariant;
    BOOL _needsTextureUpdate;
}

- (shared_ptr_479d1306)_textureForName:(id)arg1;
- (id)initWithStyleQuery:(shared_ptr_6e6219d6 *)arg1 tile:(id)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4 sharedResources:(id)arg5;
- (void)updateTextures;
- (void)setNeedsTextureUpdate;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) struct Texture2D *textureVariant;
- (void)updateTexturesIfNecessary;
@property(readonly, nonatomic) struct Texture2D *texture;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end

