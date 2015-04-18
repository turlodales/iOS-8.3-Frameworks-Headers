//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BSEqualsBuilder : NSObject
{
    BOOL _equal;
}

+ (id)builderWithObject:(id)arg1 ofExpectedClass:(Class)arg2;
+ (id)builder;
- (BOOL)isEqual;
- (id)appendInteger:(int)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendObject:(id)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGRect:(struct CGRect)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGSize:(struct CGSize)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGPoint:(struct CGPoint)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendBool:(BOOL)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendArray:(id)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendPointer:(void *)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendString:(id)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendEqualsBlocks:(CDUnknownBlockType)arg1;
- (id)appendUnsignedInteger:(unsigned int)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGFloat:(float)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)init;

@end

