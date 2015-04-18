//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableSet.h"

@interface NSCountedSet : NSMutableSet
{
    id _table;
    void *_reserved;
}

+ (BOOL)supportsSecureCoding;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned int)countForObject:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (id)initWithArray:(id)arg1;
- (id)objectEnumerator;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)addObject:(id)arg1;
- (id)init;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1 count:(unsigned int)arg2;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;

@end

