//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPreheatItem.h>

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface PLJPEGPreheatItem : PLPreheatItem
{
    NSObject<OS_dispatch_queue> *_queue;
    UIImage *_cachedImage;
    BOOL _cachedImageCancelled;
    unsigned long _requestID;
    NSObject<OS_dispatch_group> *_requestGroup;
    NSObject<OS_dispatch_group> *_waitGroup;
    BOOL _dataIsLoading;
    unsigned int _loadingOptions;
    unsigned int _cancelled;
    unsigned int _hasCachedImage;
    NSString *_imagePath;
}

+ (id)jpegDataLoadSemaphore;
@property(readonly, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (BOOL)originalIsJpeg;
- (void)cancelPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initialDecodeSessionOptions;
- (BOOL)addImageHandler:(CDUnknownBlockType)arg1;
- (id)cachedImageIfAvailable:(char *)arg1;
- (id)cachedImage:(char *)arg1;
- (id)initWithImagePath:(id)arg1 format:(int)arg2 imageType:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4 options:(unsigned int)arg5;
- (void)loadPreheatDataWithHandler:(CDUnknownBlockType)arg1;
- (void)_leaveWaitGroupIfNeeded;
- (void)_uncancel;
- (id)preheatData;
@property(setter=_setHasCachedImage:) BOOL _hasCachedImage;
- (id)createDecodedImage:(struct CGImage *)arg1 data:(id)arg2;
- (struct __CFDictionary *)decodeSessionOptions;
- (void)_cacheImage;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cancel;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_loadingOptions;
- (BOOL)isCancelled;
- (void)dealloc;

@end

