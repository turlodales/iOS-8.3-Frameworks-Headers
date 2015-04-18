//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, SCNNode, SCNScene, SKScene;

@protocol SCNSceneRenderer <NSObject>
@property(readonly, nonatomic) void *context;
@property(retain, nonatomic) SKScene *overlaySKScene;
@property(nonatomic) BOOL showsStatistics;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property(nonatomic) BOOL autoenablesDefaultLighting;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL loops;
@property(getter=isPlaying) BOOL playing;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
@property(nonatomic) double sceneTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)prepareObjects:(NSArray *)arg1 withCompletionHandler:(void (^)(BOOL))arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(BOOL (^)(void))arg2;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (BOOL)isNodeInsideFrustum:(SCNNode *)arg1 withPointOfView:(SCNNode *)arg2;
- (NSArray *)hitTest:(struct CGPoint)arg1 options:(NSDictionary *)arg2;
@end

