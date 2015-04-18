//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior
{
    SCNPhysicsBody *_chassisBody;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
    struct btRaycastVehicle *_vehicle;
    float _speedKmHour;
}

+ (BOOL)supportsSecureCoding;
+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;
+ (id)SCNJSExportProtocol;
- (void)_update;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;
@property(readonly, nonatomic) SCNPhysicsBody *chassisBody;
@property(readonly, nonatomic) NSArray *wheels;
@property(readonly, nonatomic) float speedInKilometersPerHour;
- (void)applyBrakingForce:(float)arg1 forWheelAtIndex:(int)arg2;
- (void)setSteeringAngle:(float)arg1 forWheelAtIndex:(int)arg2;
- (void)applyEngineForce:(float)arg1 forWheelAtIndex:(int)arg2;
- (id)wheelAtIndex:(unsigned int)arg1;
- (void)_createWheel:(id)arg1;
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;
- (void)_initializeWheelsArray;
- (struct btRaycastVehicle *)btVehicle;
- (void)_handleCreateIfNeeded:(BOOL)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (id)physicsWorld;

@end

