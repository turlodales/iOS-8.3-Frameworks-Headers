//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSPredicate;

@interface _UIDocumentContainerObserver : NSObject
{
    NSMutableSet *_added;
    NSMutableSet *_removed;
    NSMutableDictionary *_moved;
    NSArray *_descriptors;
    NSOrderedSet *_lastSnapshot;
    NSDate *_lastSnapshotDate;
    CDUnknownBlockType _handler;
    NSPredicate *_predicate;
}

+ (id)_observerForDirectories:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2;
- (id)_predicateForItemsInDirectory:(id)arg1;
- (id)initWithDirectories:(id)arg1 sortDescriptors:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)moveURL:(id)arg1 toURL:(id)arg2;
- (void)removeURL:(id)arg1;
- (void)addURL:(id)arg1;
- (void)processResults:(id)arg1;
@property(retain, nonatomic) NSOrderedSet *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDate *lastSnapshotDate; // @synthesize lastSnapshotDate=_lastSnapshotDate;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void)dealloc;

@end

