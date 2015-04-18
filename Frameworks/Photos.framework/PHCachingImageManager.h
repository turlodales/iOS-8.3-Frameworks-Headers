//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHImageManager.h>

@interface PHCachingImageManager : PHImageManager
{
    BOOL _allowsCachingHighQualityImages;
}

- (id)description;
- (id)init;
@property(nonatomic) BOOL allowsCachingHighQualityImages; // @synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(int)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(int)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(int)arg3 options:(id)arg4;
- (void)startCachingImagesForImageLoadingAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(int)arg3 options:(id)arg4;
- (id)_fireCloudDownloadOfImageForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)approximateThumbnailIndexesForAssets:(id)arg1;
- (BOOL)canAvoidTouchingAssetsWithTargetSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(id)arg3 outBestFormat:(int *)arg4 outBestFormatIsTable:(char *)arg5 outDegradedFormat:(int *)arg6 outDegradedFormatIsTable:(char *)arg7;
- (id)_highPriorityRequestWaitGroup;

@end

