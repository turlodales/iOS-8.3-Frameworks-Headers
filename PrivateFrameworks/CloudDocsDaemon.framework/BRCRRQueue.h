//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSMapTable, NSMutableArray;

@interface BRCRRQueue : NSEnumerator
{
    NSMapTable *_objects;
    NSMutableArray *_array;
    unsigned int _pos;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithCapacity:(unsigned int)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned int count;
- (void)removeObject:(id)arg1;

@end

