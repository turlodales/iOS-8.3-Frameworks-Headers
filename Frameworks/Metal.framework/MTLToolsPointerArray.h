//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSPointerArray;

@interface MTLToolsPointerArray : NSObject
{
    unsigned int _pointerAdditions;
    NSPointerArray *_pointerArray;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (id)initWithOptions:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)addPointer:(void *)arg1;
- (void)_addPointer:(void *)arg1;
- (void)removeObjectAssociatedWithBaseObject:(id)arg1;
- (void)enumeratePointersUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

