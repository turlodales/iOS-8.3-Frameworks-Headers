//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FigCameraViewfinderSession, FigDelegateStorage, NSObject<OS_dispatch_queue>;

@interface FigCameraViewfinder : NSObject
{
    FigCameraViewfinderSession *_delegateActiveViewfinderSession;
    FigDelegateStorage *_delegateStorage;
}

+ (id)cameraViewfinder;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(retain, nonatomic) FigCameraViewfinderSession *delegateActiveViewfinderSession; // @synthesize delegateActiveViewfinderSession=_delegateActiveViewfinderSession;
- (void)startWithOptions:(id)arg1;
- (void)stop;
@property(readonly) id <FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> delegate;
- (id)init;
- (void)dealloc;

@end

