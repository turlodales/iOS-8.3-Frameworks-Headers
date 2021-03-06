//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNTorus : SCNGeometry
{
    id _reserved;
    float _torusringRadius;
    float _toruspipeRadius;
    float _torusradialSpan;
    int _torusringSegmentCount;
    int _toruspipeSegmentCount;
    int _torusprimitiveType;
}

+ (BOOL)supportsSecureCoding;
+ (id)torusWithRingRadius:(float)arg1 pipeRadius:(float)arg2;
+ (id)SCNJSExportProtocol;
- (int)primitiveType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) int pipeSegmentCount;
@property(nonatomic) int ringSegmentCount;
@property(nonatomic) float pipeRadius;
@property(nonatomic) float ringRadius;
- (id)presentationTorus;
- (void)setRadialSpan:(float)arg1;
- (float)radialSpan;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (void)setPrimitiveType:(int)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)presentationGeometry;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;

@end

