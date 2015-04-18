//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFPGraphicsState : NSObject
{
    struct CGAffineTransform mPageTransform;
    struct CGAffineTransform mWorldTransform;
}

- (void)removeTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)pageTransform;
- (id)initWithGraphicsState:(id)arg1;
- (void)setPageTransform:(struct CGAffineTransform)arg1;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform)arg1 order:(int)arg2;
- (id)initWithDefaults;
- (id).cxx_construct;
- (void)dealloc;
- (struct CGAffineTransform)worldTransform;
- (void)setWorldTransform:(struct CGAffineTransform)arg1;

@end

