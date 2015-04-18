//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSLock, NSObject<OS_dispatch_queue>;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
    NSHashTable *_observers;
    NSLock *_observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)forEachObserver:(CDUnknownBlockType)arg1 finished:(CDUnknownBlockType)arg2;
- (unsigned int)observersCount;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

