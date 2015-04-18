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

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)dictionary;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
+ (id)newDictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
- (BOOL)containsKey:(id)arg1;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned int)countForObject:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (id)allKeysForObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyEnumerator;
- (id)allValues;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allObjects;
- (BOOL)containsObject:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)allKeys;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueUsingComparator:(CDUnknownBlockType)arg1;
- (id)keyOfEntryPassingTest:(CDUnknownBlockType)arg1;
- (id)invertedDictionary;
- (id)keysSortedByValueWithOptions:(unsigned int)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)keysOfEntriesWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)keyOfEntryWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned int)arg3;
- (unsigned long)_cfTypeID;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (BOOL)__getValue:(id *)arg1 forKey:(id)arg2;
- (unsigned int)countForKey:(id)arg1;
- (void)getKeys:(id *)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)getObjects:(id *)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (BOOL)isNSDictionary__;

@end

