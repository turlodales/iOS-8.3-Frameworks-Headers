//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (id)orderedSetWithSet:(id)arg1;
+ (id)orderedSetWithObjects:(const id *)arg1 count:(unsigned int)arg2;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSet;
+ (id)orderedSetWithArray:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
+ (id)newOrderedSetWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithOrderedSet:(id)arg1;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)countForObject:(id)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)initWithSet:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)initWithObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned int)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)initWithArray:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)objectEnumerator;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)reverseObjectEnumerator;
- (id)allObjects;
- (id)initWithObjects:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)set;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)array;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndex:(unsigned int)arg1;
@property(readonly) unsigned int count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned int)countForObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned int)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)objectWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)reversedOrderedSet;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)getObjects:(id *)arg1;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (BOOL)isNSOrderedSet__;

@end

