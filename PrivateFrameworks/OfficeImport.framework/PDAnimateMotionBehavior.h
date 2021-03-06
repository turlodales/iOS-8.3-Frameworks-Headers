//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDAnimateScaleBehavior.h>

@class NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior
{
    NSString *mPath;
    BOOL mHasAngle;
    double mAngle;
    BOOL mHasPointType;
    int mPointType;
    BOOL mHasOriginType;
    int mOriginType;
    BOOL mHasRotationCenter;
    struct CGPoint mRotationCenter;
}

- (void)setRotationCenter:(struct CGPoint)arg1;
- (void)setOriginType:(int)arg1;
- (struct CGPoint)rotationCenter;
- (BOOL)hasRotationCenter;
- (int)originType;
- (BOOL)hasOriginType;
- (BOOL)hasPointType;
- (BOOL)hasAngle;
- (void)setPointType:(int)arg1;
- (int)pointType;
- (BOOL)hasPath;
- (double)angle;
- (void)setAngle:(double)arg1;
- (id).cxx_construct;
- (void)setPath:(id)arg1;
- (id)path;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

