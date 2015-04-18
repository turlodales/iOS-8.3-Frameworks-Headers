//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    void *_impl;
    unsigned long _normalization;
    long _subdivisionSteps;
}

+ (id)meshTransformWithVertexCount:(unsigned long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;
@property(readonly) unsigned long vertexCount;
- (struct CAMeshVertex)vertexAtIndex:(unsigned long)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (float)CA_distanceToValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_subdivideToDepth:(int)arg1;
@property(readonly) int subdivisionSteps;
- (struct CAMeshFace)faceAtIndex:(unsigned long)arg1;
@property(readonly) unsigned long faceCount;
- (BOOL)_constructWithData:(id)arg1;
@property(readonly, copy) NSString *depthNormalization;
- (id)_initWithMeshTransform:(id)arg1;
- (id)initWithVertexCount:(unsigned long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
- (id)meshTransformForLayer:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (struct Object *)CA_copyRenderValue;
- (id)_data;
- (void)encodeWithCAMLWriter:(id)arg1;

@end

