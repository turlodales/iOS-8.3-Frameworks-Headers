//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileWatcherObservations, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface NSFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    CDUnknownBlockType _observer;
    BOOL _isWatching;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned long long _lastObservedEventID;
    struct __FSEventStream *_eventStream;
    BOOL _eventsAreAboutDirectory;
    BOOL _isUnsettled;
    NSFileWatcherObservations *_itemObservations;
    NSMutableDictionary *_subitemObservationsByEventPath;
    NSURL *_fileReferenceURL;
    NSString *_formerPath;
    NSURL *_formerURL;
}

- (void)setURL:(id)arg1;
- (void)start;
- (void)setObserver:(CDUnknownBlockType)arg1;
- (void)stop;
- (id)initWithQueue:(id)arg1;
- (void)dealloc;
- (void)unsettle;
- (void)handleFSEventPath:(id)arg1 flags:(unsigned long)arg2 id:(unsigned long long)arg3;
- (void)_coalesceSubitemObservations;
- (void)watchItem;
- (void)settle;
- (void)setLastObservedEventID:(unsigned long long)arg1;

@end

