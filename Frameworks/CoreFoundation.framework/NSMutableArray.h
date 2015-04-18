//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSArray.h>

@interface NSMutableArray : NSArray
{
}

+ (id)arrayWithCapacity:(unsigned int)arg1;
- (void)setSet:(id)arg1;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned int)arg2;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)setArray:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectIdenticalTo:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange)arg3;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 range:(struct _NSRange)arg3;
- (void)setOrderedSet:(id)arg1;
- (void)rollObjectsInRange:(struct _NSRange)arg1 by:(int)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inArray:(id)arg2;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inOrderedSet:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inArray:(id)arg2 range:(struct _NSRange)arg3;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2 atIndex:(unsigned int)arg3;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2 atIndex:(unsigned int)arg3;
- (void)_mutate;
- (void)replaceObject:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned int)arg3;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned int)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)insertObjects:(const id *)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)addObjects:(const id *)arg1 count:(unsigned int)arg2;

@end

