//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSMutableArray, PKPhysicsWorld;

@interface PKPhysicsBody : NSObject <NSCopying, NSCoding>
{
    id <NSObject> _representedObject;
    struct b2BodyDef _bodyDef;
    struct b2Body *_body;
    struct PKCField *_field;
    int _dynamicType;
    vector_4360c5cc _shapes;
    PKPhysicsWorld *_world;
    NSMutableArray *_joints;
    BOOL _inUse;
    int _shapeType;
    shared_ptr_2aaf3a07 _pathPtr;
    shared_ptr_639e7c03 _quadTree;
    struct CGPoint _p0;
    struct CGPoint _p1;
    struct CGSize _size;
    float _radius;
    float _edgeRadius;
    struct CGImage *_mask;
    shared_ptr_2aaf3a07 _outline;
    BOOL _isPinned;
    BOOL _allowsRotation;
    CDUnknownBlockType _postStepBlock;
}

+ (id)initWithMarchingCubes:(struct PKCGrid *)arg1 pixelFrame:(struct CGRect)arg2;
+ (id)initWithQuadTree:(id)arg1;
+ (id)bodyWithOutline:(shared_ptr_2aaf3a07)arg1 offset:(struct CGPoint)arg2;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithCircleOfRadius:(float)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(float)arg3;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 edgeRadius:(float)arg2;
+ (id)bodyWithCircleOfRadius:(float)arg1 center:(struct CGPoint)arg2;
@property(nonatomic) shared_ptr_2aaf3a07 outline;
@property(nonatomic) struct b2Body *_body;
@property(nonatomic) struct b2BodyDef _bodyDef;
- (void)set_inUse:(BOOL)arg1;
- (void)set_joints:(id)arg1;
- (void)set_world:(id)arg1;
- (shared_ptr_639e7c03)_quadTree;
@property(copy, nonatomic) CDUnknownBlockType postStepBlock; // @synthesize postStepBlock=_postStepBlock;
- (BOOL)_allowSleep;
- (void)clearBox2DData;
- (id)_descriptionFormat;
- (id)initWithBodies:(id)arg1;
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(float)arg3;
@property(readonly, nonatomic) vector_4360c5cc *_shapes;
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
- (id)initWithCircleOfRadius:(float)arg1 center:(struct CGPoint)arg2;
@property(readonly, nonatomic) float area;
@property(nonatomic) float radius;
@property(nonatomic) BOOL affectedByGravity;
@property(nonatomic, getter=isResting) BOOL resting;
@property(nonatomic) BOOL usesPreciseCollisionDetection;
@property(nonatomic, getter=isDynamic) BOOL dynamic;
- (void)set_allowSleep:(BOOL)arg1;
- (id)initWithEdgeLoopFromPath:(struct CGPath *)arg1;
- (id)initWithEdgeChainFromPath:(struct CGPath *)arg1;
- (id)initWithPolygonFromPath:(struct CGPath *)arg1;
- (id)initWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
- (id)initWithCircleOfRadius:(float)arg1;
- (void)applyUnscaledForce:(struct CGVector)arg1;
- (void)applyUnscaledImpulse:(struct CGVector)arg1;
- (void)applyUnscaledForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyUnscaledImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
@property(nonatomic) unsigned int contactTestBitMask;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) unsigned int collisionBitMask;
@property(nonatomic) __weak id <NSObject> representedObject;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)applyImpulse:(struct CGVector)arg1;
@property(nonatomic) float mass;
@property(nonatomic) float angularDamping;
@property(nonatomic) float linearDamping;
@property(nonatomic) float restitution;
@property(nonatomic) float angularVelocity;
@property(nonatomic) float rotation;
@property(nonatomic) struct CGVector velocity;
@property(nonatomic) BOOL allowsRotation;
@property(nonatomic) float density;
@property(nonatomic) float friction;
- (void)setActive:(BOOL)arg1;
- (id)_world;
@property(nonatomic) BOOL pinned;
- (BOOL)active;
@property(nonatomic) float charge;
@property(nonatomic) struct CGPoint position;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)allContactedBodies;
- (void)applyAngularImpulse:(float)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyTorque:(float)arg1;
- (void)applyForce:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyForce:(struct CGPoint)arg1;
- (void)reapplyScale:(float)arg1 yScale:(float)arg2;
- (BOOL)_inUse;
@property(nonatomic) unsigned int fieldBitMask;
- (id)_joints;
- (id)_descriptionClassName;
@property(readonly, nonatomic) NSArray *joints;

@end

