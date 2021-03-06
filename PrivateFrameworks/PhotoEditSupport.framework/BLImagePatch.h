//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLImagePatch : NSObject
{
    struct CGImage *_imageRef;
    struct CGImage *_maskRef;
    struct CGRect _rect;
}

+ (id)patchFromRect:(struct CGRect)arg1 inImage:(struct CGImage *)arg2 withMask:(struct CGImage *)arg3;
+ (id)patchFromRect:(struct CGRect)arg1 inImage:(struct CGImage *)arg2;
- (void)translateOriginByPoint:(struct CGPoint)arg1;
- (id)initWithImageRef:(struct CGImage *)arg1 andRect:(struct CGRect)arg2;
- (id)initWithImageRef:(struct CGImage *)arg1 andRect:(struct CGRect)arg2 andMask:(struct CGImage *)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)rect;
- (struct CGPoint)origin;
- (struct CGImage *)image;
- (id)description;
- (struct CGSize)size;
- (void)dealloc;

@end

