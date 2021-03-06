//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPCopying.h"
#import "NSCopying.h"

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying>
{
    struct CGRect bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    BOOL isHorizontal;
    BOOL hasForwardVector;
    BOOL hasBackwardVector;
    float overhangMin;
    float overhangMax;
}

+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;
+ (struct CGRect)extendRect:(struct CGRect)arg1;
+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect)arg3;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (void)outerVertices:(struct CGPoint *)arg1 fromBorders:(id)arg2 swollenBy:(float)arg3;
- (void)combine:(id)arg1;
- (BOOL)crosses:(id)arg1;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 startingAtIndex:(unsigned int)arg3;
- (BOOL)hasVectorGoingForward:(BOOL)arg1 startingAtIndex:(unsigned int *)arg2;
- (void)instantiateVectors;
- (BOOL)intersectsWith:(id)arg1 atRect:(struct CGRect *)arg2;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (BOOL)hasBackwardVector;
- (void)setHasBackwardVector:(BOOL)arg1;
- (BOOL)hasForwardVector;
- (void)setHasForwardVector:(BOOL)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (id)ownerArray;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithGraphicObject:(id)arg1;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (void)removeFromArray;
- (void)addNeighbor:(id)arg1;
- (void)trimToLastIntersections;
- (void)addToArray:(id)arg1;
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (BOOL)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (id)copyWithoutIntersections;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect *)arg5;
- (BOOL)continues:(id)arg1;
- (BOOL)windsClockwiseOnto:(id)arg1;
- (unsigned int)intersectionCount;
- (void)addGraphicObject:(id)arg1;
- (id)graphicObjects;
- (BOOL)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (id)neighborAtIndex:(unsigned int)arg1;
- (unsigned int)neighborCount;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (BOOL)hasNeighborShape:(id)arg1;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (unsigned int)graphicObjectCount;
- (id)initSuper;
- (int)compareYBounds:(id)arg1;
- (int)compareXBounds:(id)arg1;
- (long)zOrder;
- (BOOL)isHorizontal;
- (id)page;
- (BOOL)isVertical;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
- (struct CGRect)bounds;
- (void)dealloc;

@end

