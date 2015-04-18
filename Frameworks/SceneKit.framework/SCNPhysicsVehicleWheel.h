//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    SCNNode *_node;
    SCNPhysicsVehicle *_vehicle;
    int _wheelIndex;
    float _suspensionStiffness;
    float _suspensionCompression;
    float _suspensionDamping;
    float _maximumSuspensionTravel;
    float _frictionSlip;
    float _maximumSuspensionForce;
    struct SCNVector3 _connectionPosition;
    struct SCNVector3 _steeringAxis;
    struct SCNVector3 _axle;
    float _radius;
    float _suspensionRestLength;
    BOOL _isFront;
}

+ (BOOL)supportsSecureCoding;
+ (id)wheelWithNode:(id)arg1;
+ (id)SCNJSExportProtocol;
@property float radius;
- (void)setNode:(id)arg1;
@property(readonly) SCNNode *node;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setWheelIndex:(int)arg1;
- (void)_setVehicle:(id)arg1;
- (void)setIsFront:(BOOL)arg1;
- (BOOL)isFront;
@property float suspensionRestLength;
@property struct SCNVector3 axle;
@property struct SCNVector3 steeringAxis;
@property struct SCNVector3 connectionPosition;
@property float maximumSuspensionForce;
@property float frictionSlip;
@property float maximumSuspensionTravel;
@property float suspensionDamping;
@property float suspensionCompression;
@property float suspensionStiffness;

@end

