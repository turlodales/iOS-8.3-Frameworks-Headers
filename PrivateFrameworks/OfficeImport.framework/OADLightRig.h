//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)rotation;
- (void)setRotation:(id)arg1;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;

@end

