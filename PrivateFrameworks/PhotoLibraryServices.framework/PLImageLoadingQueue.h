//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, PLImageCache;

@interface PLImageLoadingQueue : NSObject
{
    id <PLImageLoadingQueueDelegate> _delegate;
    PLImageCache *_cache;
    NSLock *_lock;
}

- (void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4;
- (void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2;
- (void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(BOOL)arg4;
- (void)resumeLoading;
- (void)pauseLoading;
- (id)initWithImageCache:(id)arg1;
- (void)stopLoading;
@property(nonatomic) id <PLImageLoadingQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

