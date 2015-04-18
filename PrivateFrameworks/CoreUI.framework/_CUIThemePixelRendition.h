//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, _CSIRenditionBlockData;

@interface _CUIThemePixelRendition : CUIThemeRendition
{
    unsigned int nimages;
    struct CGImage *image[16];
    struct CGImage *unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
    unsigned long _sourceRowbytes;
}

- (void)setSharedBlockData:(id)arg1;
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;
- (struct CGImage *)newImageFromCSIDataSlice:(struct _slice)arg1 ofBitmap:(struct _csibitmap *)arg2 usingColorspace:(struct CGColorSpace *)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (unsigned long)sourceRowbytes;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(int)arg3;
- (id)sliceInformation;
- (struct CGImage *)unslicedImage;
- (id)maskForSliceIndex:(int)arg1;
- (BOOL)isScaled;
- (id)imageForSliceIndex:(int)arg1;
- (BOOL)isTiled;
- (id)metrics;
- (void)dealloc;

@end

