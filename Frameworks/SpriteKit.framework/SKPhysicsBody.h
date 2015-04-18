//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSCoding>
{
    BOOL _dynamic;
    BOOL _usesPreciseCollisionDetection;
    BOOL _allowsRotation;
    BOOL _pinned;
    BOOL _resting;
    BOOL _affectedByGravity;
    float _friction;
    float _charge;
    float _restitution;
    float _linearDamping;
    float _angularDamping;
    float _density;
    float _mass;
    float _area;
    unsigned int _fieldBitMask;
    unsigned int _categoryBitMask;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    NSArray *_joints;
    SKNode *_node;
    float _angularVelocity;
    struct CGVector _velocity;
}

+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithCircleOfRadius:(float)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)bodyWithTexture:(id)arg1 size:(struct CGSize)arg2;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize)arg3;
+ (id)bodyWithCircleOfRadius:(float)arg1 center:(struct CGPoint)arg2;
@property(readonly, nonatomic) float area; // @synthesize area=_area;
@property(nonatomic) BOOL affectedByGravity; // @synthesize affectedByGravity=_affectedByGravity;
@property(nonatomic, getter=isResting) BOOL resting; // @synthesize resting=_resting;
@property(nonatomic) BOOL usesPreciseCollisionDetection; // @synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection;
@property(nonatomic, getter=isDynamic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(nonatomic) unsigned int contactTestBitMask; // @synthesize contactTestBitMask=_contactTestBitMask;
@property(nonatomic) unsigned int categoryBitMask; // @synthesize categoryBitMask=_categoryBitMask;
@property(nonatomic) unsigned int collisionBitMask; // @synthesize collisionBitMask=_collisionBitMask;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak SKNode *node; // @synthesize node=_node;
- (id).cxx_construct;
- (void)applyImpulse:(struct CGVector)arg1;
@property(nonatomic) float mass; // @synthesize mass=_mass;
@property(nonatomic) float angularDamping; // @synthesize angularDamping=_angularDamping;
@property(nonatomic) float linearDamping; // @synthesize linearDamping=_linearDamping;
@property(nonatomic) float restitution; // @synthesize restitution=_restitution;
@property(nonatomic) float angularVelocity; // @synthesize angularVelocity=_angularVelocity;
@property(nonatomic) struct CGVector velocity; // @synthesize velocity=_velocity;
@property(nonatomic) BOOL allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic) float density; // @synthesize density=_density;
@property(nonatomic) float friction; // @synthesize friction=_friction;
@property(nonatomic) BOOL pinned; // @synthesize pinned=_pinned;
@property(nonatomic) float charge; // @synthesize charge=_charge;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allContactedBodies;
- (void)applyAngularImpulse:(float)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyTorque:(float)arg1;
- (void)applyForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyForce:(struct CGVector)arg1;
@property(nonatomic) unsigned int fieldBitMask; // @synthesize fieldBitMask=_fieldBitMask;
@property(readonly, nonatomic) NSArray *joints; // @synthesize joints=_joints;

@end

