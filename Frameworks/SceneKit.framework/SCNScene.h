//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary, SCNAuthoringEnvironment, SCNMaterialProperty, SCNNode, SCNPhysicsWorld, SCNSceneSource;

@interface SCNScene : NSObject <NSSecureCoding>
{
    id _reserved;
    struct __C3DScene *_scene;
    struct __C3DLibrary *_library;
    SCNSceneSource *_sceneSource;
    double _lastEvalTime;
    SCNPhysicsWorld *_physicsWorld;
    SCNNode *_rootNode;
    SCNMaterialProperty *_background;
    NSMutableDictionary *_userAttributes;
    float _fogStartDistance;
    float _fogEndDistance;
    float _fogDensityExponent;
    id _fogColor;
    BOOL _paused;
    SCNAuthoringEnvironment *_authoringEnvironment;
}

+ (BOOL)supportsSecureCoding;
+ (SEL)jsConstructor;
+ (id)sceneWithSceneRef:(struct __C3DScene *)arg1;
+ (id)sceneWithData:(id)arg1 atIndex:(int)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 atIndex:(int)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)SCNJSExportProtocol;
+ (id)scene;
- (double)endTime;
@property(nonatomic, getter=isPaused) BOOL paused;
- (id)attributeForKey:(id)arg1;
- (void)setLibrary:(struct __C3DLibrary *)arg1;
- (struct __C3DLibrary *)library;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)root;
- (double)startTime;
@property(readonly, nonatomic) SCNMaterialProperty *background;
- (id)valueForUndefinedKey:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)setStartTime:(double)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (void)_scaleSceneBy:(float)arg1;
- (id)sceneSource;
- (void)setSceneSource:(id)arg1;
- (id)_scenes;
- (void)setLastEvalTime:(double)arg1;
- (double)lastEvalTime;
- (void)setRootNode:(id)arg1;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
@property(retain, nonatomic) id fogColor;
@property(nonatomic) float fogDensityExponent;
@property(nonatomic) float fogEndDistance;
@property(nonatomic) float fogStartDistance;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (void)addParticleSystem:(id)arg1 withTransform:(struct SCNMatrix4)arg2;
- (id)initForJavascript:(id)arg1;
- (struct SCNVector3)upAxis;
- (void)setUpAxis:(struct SCNVector3)arg1;
- (void)setPlaybackSpeed:(float)arg1;
- (float)playbackSpeed;
- (void)setFrameRate:(double)arg1;
- (double)frameRate;
- (void)setEndTime:(double)arg1;
- (id)initWithSceneRef:(struct __C3DScene *)arg1;
- (void)_setRootNode:(id)arg1;
- (void)removeParticleSystem:(id)arg1;
- (void)removeAllParticleSystems;
@property(readonly, nonatomic) SCNNode *rootNode;
- (id)particleSystems;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (void)_syncObjCModel;
- (id)_physicsWorldCreateIfNeeded:(BOOL)arg1;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (void *)__CFObject;
- (struct __C3DScene *)sceneRef;
@property(readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
- (id)scene;

@end

