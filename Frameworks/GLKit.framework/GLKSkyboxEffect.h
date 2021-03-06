//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLKNamedEffect.h"

@class GLKEffect, GLKEffectPropertyTexture, GLKEffectPropertyTransform, NSMutableArray, NSString;

@interface GLKSkyboxEffect : NSObject <GLKNamedEffect>
{
    union _GLKVector3 _center;
    float _xSize;
    float _ySize;
    float _zSize;
    GLKEffectPropertyTexture *_textureCubeMap;
    GLKEffectPropertyTransform *_transform;
    NSString *_label;
    unsigned char _effectStale;
    unsigned char _centerChanged;
    unsigned int _vao;
    unsigned int _positionVBO;
    unsigned int _texCoordVBO;
    NSMutableArray *_propertyArray;
    GLKEffect *_effect;
    unsigned int _programName;
}

@property(nonatomic) GLKEffect *effect; // @synthesize effect=_effect;
- (void)draw;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) union _GLKVector3 center; // @synthesize center=_center;
@property(readonly, nonatomic) GLKEffectPropertyTransform *transform; // @synthesize transform=_transform;
- (id)description;
- (id)init;
- (void)dealloc;
@property(nonatomic) unsigned char centerChanged; // @synthesize centerChanged=_centerChanged;
@property(nonatomic) unsigned int texCoordVBO; // @synthesize texCoordVBO=_texCoordVBO;
@property(nonatomic) unsigned int positionVBO; // @synthesize positionVBO=_positionVBO;
@property(nonatomic) unsigned int vao; // @synthesize vao=_vao;
@property(nonatomic) float zSize; // @synthesize zSize=_zSize;
@property(nonatomic) float ySize; // @synthesize ySize=_ySize;
@property(nonatomic) float xSize; // @synthesize xSize=_xSize;
@property(readonly, nonatomic) GLKEffectPropertyTexture *textureCubeMap; // @synthesize textureCubeMap=_textureCubeMap;
- (void)updateSkyboxEffect;
- (void)createAndBindVAOWithPositions:(float *)arg1 texCoords:(float *)arg2;
@property(nonatomic) unsigned int programName; // @synthesize programName=_programName;
@property(nonatomic) unsigned char effectStale; // @synthesize effectStale=_effectStale;
@property(readonly, nonatomic) NSMutableArray *propertyArray; // @synthesize propertyArray=_propertyArray;
- (void)prepareToDraw;

@end

