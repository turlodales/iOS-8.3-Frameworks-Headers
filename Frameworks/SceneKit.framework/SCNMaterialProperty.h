//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SCNAnimatable.h"

@class NSString, SCNOrderedDictionary, UIColor;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding>
{
    id _reserved;
    unsigned int _isPresentationInstance:1;
    unsigned int _isCommonProfileProperty:1;
    id _parent;
    long _propertyType;
    NSString *_customSlotName;
    SCNOrderedDictionary *_animations;
    UIColor *_borderColor;
    unsigned char _contentType;
    id _contents;
    int _mappingChannel;
    float _intensity;
    float _maxAnisotropy;
    int _minificationFilter;
    int _magnificationFilter;
    int _mipFilter;
    int _wrapS;
    int _wrapT;
    struct __C3DEffectSlot *_customSlot;
    struct __C3DImage *_c3dImage;
    struct __C3DTextureProxy *_textureProxy;
    struct SCNMatrix4 *_contentTransform;
}

+ (BOOL)supportsSecureCoding;
+ (id)materialPropertyWithContents:(id)arg1;
+ (id)_copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (struct __C3DImage *)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long)arg2;
+ (id)copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1;
+ (id)SCNJSExportProtocol;
- (void)setContent:(id)arg1;
- (id)parent;
@property(nonatomic) int minificationFilter;
- (id)attachment;
- (void)setAttachment:(id)arg1;
@property(retain, nonatomic) id borderColor;
- (id)content;
- (void)setColor:(id)arg1;
- (void)_setColor:(id)arg1;
- (id)color;
@property(nonatomic) struct SCNMatrix4 contentsTransform;
@property(retain, nonatomic) id contents;
- (void)removeAllAnimations;
@property(nonatomic) int magnificationFilter;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)setLayer:(id)arg1;
- (id)image;
- (void)addAnimation:(id)arg1;
- (void)_setParent:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)layer;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)proceduralContents;
- (void)setProceduralContents:(id)arg1;
- (id)skTexture;
- (id)skScene;
- (id)pvrtcData;
- (struct C3DColor4)color4;
- (struct __C3DImage *)getC3DImageRef;
- (void)synchronizeCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2;
- (id)initWithParent:(id)arg1 andCustomName:(id)arg2;
- (void)_didDecodeSCNMaterialProperty:(id)arg1;
- (void)_customDecodingOfSCNMaterialProperty:(id)arg1;
- (void)_customEncodingOfSCNMaterialProperty:(id)arg1;
@property(nonatomic) float maxAnisotropy;
- (void)_layerDidChange:(id)arg1;
- (struct C3DColor4)borderColor4;
- (id)initPresentationMaterialPropertyWithModelProperty:(id)arg1;
@property(nonatomic) int mappingChannel;
@property(nonatomic) float intensity;
@property(nonatomic) int wrapT;
@property(nonatomic) int wrapS;
@property(nonatomic) int mipFilter;
-     // Error parsing type: v72@0:4(C3DMatrix4x4=[16f][4])8, name: _updateMaterialPropertyTransform:
- (void)__allocateContentTransformIfNeeded;
- (void)_updateMaterialProceduralContents:(id)arg1;
- (struct __C3DEffectSlot *)effectSlotCreateIfNeeded:(BOOL)arg1;
- (void)setSkTexture:(id)arg1;
- (void)setSkScene:(id)arg1;
- (void)_updateMaterialLayer:(id)arg1;
- (void)_updateMaterialSKTexture:(id)arg1;
- (void)_updateMaterialSKScene:(id)arg1;
- (void)_updateMaterialImage:(id)arg1;
- (void)_updateMaterialAttachment:(id)arg1;
- (void)_updateMaterialBorderColor:(id)arg1;
- (int)_presentationMappingChannel;
- (void)_updateMaterialFilters;
- (struct __C3DTextureSampler *)textureSampler;
- (struct __C3DEffectSlot *)effectSlot;
- (void)_updateMaterialColor:(id)arg1;
- (id)_animationPathForKey:(id)arg1;
- (void)_clearContents;
- (long)propertyType;
- (id)slotName;
- (id)presentationMaterialProperty;
- (void)_setC3DImageRef:(struct __C3DImage *)arg1;
- (struct __C3DEffectCommonProfile *)commonProfile;
- (void)copyPropertiesFrom:(id)arg1;
- (id)initWithParent:(id)arg1 propertyType:(long)arg2;
- (void)parentWillDie:(id)arg1;
- (void)_syncObjCModel;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void)_syncObjCAnimations;
- (void *)__CFObject;
- (struct __C3DScene *)sceneRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

