//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>
{
    struct __CFDictionary *mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}

- (void)insertFirstObject:(id)arg1;
- (BOOL)hasObjects;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (id)objectEnumerator;
- (id)reverseObjectEnumerator;
- (BOOL)containsObject:(id)arg1;
- (id)array;
- (BOOL)isEqual:(id)arg1;
- (id)firstObject;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)init;
- (unsigned int)count;
- (void)removeObject:(id)arg1;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;

@end
