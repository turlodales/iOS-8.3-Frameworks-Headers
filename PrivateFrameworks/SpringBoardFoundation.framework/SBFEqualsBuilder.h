//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBFEqualsBuilder : NSObject
{
}

+ (BOOL)isSize:(struct CGSize)arg1 equalToOther:(struct CGSize)arg2;
+ (BOOL)isBool:(BOOL)arg1 equalToOther:(BOOL)arg2;
+ (BOOL)isObject:(id)arg1 equalToOther:(id)arg2;
+ (BOOL)isObject:(id)arg1 memberOfSameClassAndEqualTo:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;
+ (BOOL)isObject:(id)arg1 memberOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (BOOL)isObject:(id)arg1 kindOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (BOOL)isObject:(id)arg1 equalToOther:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;
+ (BOOL)evaluateBuilderBlock:(CDUnknownBlockType)arg1 remainingBlocks:(void *)arg2;

@end

