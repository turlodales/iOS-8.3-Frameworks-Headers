//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoBoothEffects/PBContext.h>

@class CIContext, EAGLContext;

@interface PBCoreImageContext : PBContext
{
    EAGLContext *_glesContext;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_inputTexture;
    struct __CVBuffer *_outputTexture;
    struct __CVPixelBufferPool *_smallPool;
    struct __CVPixelBufferPool *_largePool;
    struct CGSize _smallPoolSize;
    struct CGSize _largePoolSize;
    struct _CAImageQueue *_outputImageQueue;
    CIContext *_ciContext;
    struct __CVBuffer *_inputPixelBuffer;
    struct __CVBuffer *_outputPixelBuffer;
    _Bool _render9Up;
    _Bool _renderForSave;
    struct CGSize _outputSize;
}

- (void)setOutputPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_createPixelBuffer:(struct __CVBuffer **)arg1 withSize:(struct CGSize)arg2;
- (void)setRenderForSave:(_Bool)arg1;
- (void)setRender9Up:(_Bool)arg1;
- (void)setInputPixelBuffer:(struct __CVBuffer *)arg1;
- (void)setOutputPixelBuffer:(struct __CVBuffer *)arg1 mapTexture:(BOOL)arg2;
- (void)setInputPixelBuffer:(struct __CVBuffer *)arg1 mapTexture:(BOOL)arg2;
- (void)setSmallPool:(struct __CVPixelBufferPool *)arg1;
- (struct __CVPixelBufferPool *)smallPool;
- (void)setLargePool:(struct __CVPixelBufferPool *)arg1;
- (struct __CVPixelBufferPool *)largePool;
- (void)setOutputImageQueue:(struct _CAImageQueue *)arg1;
- (struct _CAImageQueue *)outputImageQueue;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (unsigned int)outputTexture;
- (_Bool)render9Up;
- (struct __CVBuffer *)outputPixelBuffer;
- (id)ciContext;
- (_Bool)renderForSave;
- (struct __CVBuffer *)inputPixelBuffer;
- (id)initWithOptions:(id)arg1;
- (void)setOutputSize:(struct CGSize)arg1;
- (struct CGSize)outputSize;
- (void)dealloc;
- (unsigned int)inputTexture;

@end

