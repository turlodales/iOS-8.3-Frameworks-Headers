//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ODIPointIterator : NSObject
{
}

+ (BOOL)addPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (BOOL)isPoint:(id)arg1 ofType:(int)arg2;
+ (BOOL)isDoneForState:(struct ODIPointIteratorState *)arg1;
+ (void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (void)processChildAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (void)processSelfAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;
+ (id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3;
+ (id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3;

@end

