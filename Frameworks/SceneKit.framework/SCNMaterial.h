//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNAnimatable.h"
#import "SCNShadable.h"

@class NSDictionary, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding>
{
    id _reserved;
    struct __C3DMaterial *_material;
    SCNMaterialProperty *_ambient;
    SCNMaterialProperty *_diffuse;
    SCNMaterialProperty *_specular;
    SCNMaterialProperty *_emission;
    SCNMaterialProperty *_reflective;
    SCNMaterialProperty *_transparent;
    SCNMaterialProperty *_multiply;
    SCNMaterialProperty *_normal;
    SCNOrderedDictionary *_animations;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
    float _shininess;
    float _transparency;
    float _indexOfRefraction;
    float _fresnelExponent;
    int _transparencyMode;
    NSString *_lightingModelName;
    int _cullMode;
    SCNShadableHelper *_shadableHelper;
    BOOL _isPresentationInstance;
    BOOL _litPerPixel;
    BOOL _doubleSided;
    BOOL _locksAmbientWithDiffuse;
    BOOL _avoidsOverLighting;
    BOOL _writesToDepthBuffer;
    BOOL _readsFromDepthBuffer;
    int _fillMode;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)materialWithContents:(id)arg1;
+ (id)materialWithColor:(id)arg1;
+ (id)materialWithMaterialRef:(struct __C3DMaterial *)arg1;
+ (id)material;
+ (id)SCNJSExportProtocol;
- (int)fillMode;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setContent:(id)arg1;
@property(nonatomic, getter=isDoubleSided) BOOL doubleSided;
- (id)properties;
- (id)content;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setContents:(id)arg1;
- (void)removeAllAnimations;
- (void)setIdentifier:(id)arg1;
- (void)setFillMode:(int)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)contents;
- (void)removeAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addAnimation:(id)arg1;
- (id)identifier;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (struct __C3DMaterial *)materialRefCreateIfNeeded;
- (void)_customDecodingOfSCNMaterial:(id)arg1;
- (void)_customEncodingOfSCNMaterial:(id)arg1;
- (void)setIndexOfRefraction:(float)arg1;
- (float)indexOfRefraction;
@property(nonatomic) BOOL readsFromDepthBuffer;
@property(nonatomic) BOOL writesToDepthBuffer;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_setupShadableHelperIfNeeded;
- (id)shaderModifiersUniformNames;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
@property(nonatomic) float fresnelExponent;
- (void)setAvoidsOverLighting:(BOOL)arg1;
- (BOOL)avoidsOverLighting;
@property(nonatomic) BOOL locksAmbientWithDiffuse;
@property(retain, nonatomic) SCNProgram *program;
@property(nonatomic) int cullMode;
@property(nonatomic, getter=isLitPerPixel) BOOL litPerPixel;
@property(copy, nonatomic) NSString *lightingModelName;
@property(nonatomic) int transparencyMode;
@property(nonatomic) float transparency;
@property(nonatomic) float shininess;
- (void)_setAttributes:(id)arg1;
- (id)_property:(id *)arg1;
- (void)_setupMaterialProperty:(id *)arg1;
@property(readonly, nonatomic) SCNMaterialProperty *normal;
@property(readonly, nonatomic) SCNMaterialProperty *multiply;
@property(readonly, nonatomic) SCNMaterialProperty *reflective;
@property(readonly, nonatomic) SCNMaterialProperty *transparent;
@property(readonly, nonatomic) SCNMaterialProperty *emission;
@property(readonly, nonatomic) SCNMaterialProperty *specular;
@property(readonly, nonatomic) SCNMaterialProperty *diffuse;
@property(readonly, nonatomic) SCNMaterialProperty *ambient;
- (Class)_materialPropertyClass;
- (struct __C3DEffectCommonProfile *)commonProfile;
- (id)presentationMaterial;
- (id)initPresentationMaterialWithMaterialRef:(struct __C3DMaterial *)arg1;
- (struct __C3DMaterial *)materialRef;
- (id)initWithMaterialRef:(struct __C3DMaterial *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void)_syncObjCAnimations;
- (void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (id)scene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

