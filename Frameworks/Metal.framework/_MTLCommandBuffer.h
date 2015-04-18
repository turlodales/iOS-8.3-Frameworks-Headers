//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLError, NSDictionary, NSError, NSString, _MTLCommandQueue<MTLCommandQueue>;

@interface _MTLCommandBuffer : NSObject
{
    id <MTLCommandEncoder> _currentCommandEncoder;
    _MTLCommandQueue<MTLCommandQueue> *_queue;
    struct MTLDispatch *_scheduledDispatchList;
    struct MTLDispatch *_completedDispatchList;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } _cond;
    unsigned long long _creationTime;
    unsigned long long _enqueueTime;
    unsigned long long _commitTime;
    unsigned long long _submitToKernelTime;
    unsigned long long _kernelScheduledTime;
    unsigned long long _submitToHardwareTime;
    unsigned long long _completionInterruptTime;
    unsigned long long _kernelCompleteTime;
    unsigned long long _completionHandlerEnqueueTime;
    unsigned long long _completionHandlerExecutionTime;
    unsigned int _status;
    MTLError *_error;
    NSString *_label;
    _Bool _skipRender;
    _Bool _profilingEnabled;
    _Bool _scheduledCallbacksDone;
    _Bool _completedCallbacksDone;
    BOOL _strongObjectReferences;
    NSDictionary *_profilingResults;
    BOOL _retainedReferences;
    BOOL _synchronousDebugMode;
}

+ (void)initialize;
@property(readonly) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_queue;
@property(readonly) NSError *error;
@property(readonly) unsigned int status; // @synthesize status=_status;
@property(copy) NSString *label; // @synthesize label=_label;
- (void)commit;
- (id)description;
- (void)dealloc;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
@property(readonly) BOOL synchronousDebugMode; // @synthesize synchronousDebugMode=_synchronousDebugMode;
@property(readonly) NSDictionary *profilingResults;
- (void)setCommitted:(BOOL)arg1;
- (BOOL)isCommitted;
- (void)kernelSubmitTime;
- (void)didSchedule:(unsigned long long)arg1 error:(unsigned int)arg2;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
- (BOOL)skipRender;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (void)enqueue;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;
@property(readonly) BOOL retainedReferences; // @synthesize retainedReferences=_retainedReferences;
- (void)commitAndReset;
- (void)didComplete:(unsigned long long)arg1 error:(unsigned int)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3;

@end

