//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVCaptureVideoDataOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSDictionary *videoSettings;
    CDStruct_1b6d18a9 deprecatedMinFrameDuration;
    BOOL alwaysDiscardsLateVideoFrames;
    NSObject<OS_dispatch_queue> *bufferQueue;
    struct OpaqueFigSimpleMutex *remoteQueueMutex;
    struct remoteQueueReceiverOpaque *remoteReceiverQueue;
}

- (id)init;
- (void)dealloc;

@end

