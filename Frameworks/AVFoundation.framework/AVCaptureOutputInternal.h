//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureSession, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface AVCaptureOutputInternal : NSObject
{
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession *figCaptureSession;
    AVCaptureSession *session;
    NSString *sinkID;
    NSMutableArray *connections;
    int changeSeed;
    struct CGAffineTransform metadataTransform;
    float rollAdjustment;
    BOOL physicallyMirrorsVideo;
}

- (id)init;
- (void)dealloc;

@end

