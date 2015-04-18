//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSString;

@interface _MTLCommandQueue : NSObject
{
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    struct _opaque_pthread_mutex_t _pendingQueueLock;
    struct _opaque_pthread_mutex_t _submittedQueueLock;
    NSObject<OS_dispatch_group> *_submittedGroup;
    NSObject<OS_dispatch_queue> *_commandQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    NSString *_label;
    int _backgroundTrackingPID;
    BOOL _profilingEnabled;
    BOOL _executionEnabled;
    BOOL _skipRender;
}

- (void)finish;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)description;
- (void)dealloc;
- (void)insertDebugCaptureBoundary;
- (id)initWithDevice:(id)arg1;
- (void)completeCommandBuffers:(id *)arg1 count:(unsigned int)arg2;
- (void)_submitAvailableCommandBuffers;
- (void)commitCommandBuffer:(id)arg1;
- (void)enqueueCommandBuffer:(id)arg1;
- (void)submitCommandBuffers:(const id *)arg1 count:(unsigned int)arg2;
- (void)commandBufferDidComplete:(id)arg1 timestamp:(unsigned long long)arg2 error:(unsigned int)arg3;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long)arg2;
@property(getter=isProfilingEnabled) BOOL profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property BOOL executionEnabled; // @synthesize executionEnabled=_executionEnabled;
@property BOOL skipRender; // @synthesize skipRender=_skipRender;
@property int backgroundTrackingPID; // @synthesize backgroundTrackingPID=_backgroundTrackingPID;

@end

