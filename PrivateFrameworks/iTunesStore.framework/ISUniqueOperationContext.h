//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject
{
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (BOOL)containsOperation:(id)arg1;
- (void)setUniqueOperation:(id)arg1 forKey:(id)arg2;
- (id)uniqueOperationForKey:(id)arg1;
- (unsigned int)countOfOperations;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;
- (void)dealloc;

@end
