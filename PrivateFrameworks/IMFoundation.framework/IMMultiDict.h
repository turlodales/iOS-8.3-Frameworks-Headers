//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface IMMultiDict : NSObject
{
    NSMutableDictionary *_dictionary;
    unsigned int _count;
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectsForKey:(id)arg1;
- (id)dequeueObjectForKey:(id)arg1;
- (id)headObjectForKey:(id)arg1;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)popObjectForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (void)removeAllObjects;
- (id)init;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *allKeys;
- (unsigned int)countForKey:(id)arg1;

@end

