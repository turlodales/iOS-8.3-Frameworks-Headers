//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CIFilter, NSArray, NSString, SKTextureCache;

@interface SKTexture : NSObject <NSCopying, NSCoding>
{
    BOOL _shouldGenerateMipmaps;
    BOOL _didGenerateMipmaps;
    BOOL _isPath;
    BOOL _isData;
    NSString *_imgName;
    NSArray *_searchPaths;
    struct CGRect _textRect;
    struct CGRect _textCoords;
    BOOL _disableAlpha;
    BOOL _isRotated;
    struct CGPoint _cropScale;
    struct CGPoint _cropOffset;
    int _alignment;
    int _rowLength;
    BOOL _isCompressed;
    int _compressedSize;
    unsigned int _compressedFormat;
    CIFilter *_filter;
    SKTexture *_originalTexture;
    unsigned int _textureTarget;
    NSString *_originalAtlasName;
    NSString *_subTextureName;
    SKTextureCache *_textureCache;
    unsigned int *_alphaMap;
    struct CGSize _alphaMapSize;
}

+ (void)updateTextures;
+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize)arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(BOOL)arg4;
+ (id)compressedTextureWithData:(id)arg1;
+ (void)preloadTextures;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithCGImage:(struct CGImage *)arg1;
+ (id)textureNoiseWithSmoothness:(float)arg1 size:(struct CGSize)arg2 grayscale:(BOOL)arg3;
+ (id)textureVectorNoiseWithSmoothness:(float)arg1 size:(struct CGSize)arg2;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect)arg2;
+ (void)_addTextureToPreloadlist:(id)arg1;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2;
+ (id)textureWithCGImage:(struct CGImage *)arg1 pointSize:(struct CGSize)arg2;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (id)textureWithRect:(struct CGRect)arg1 inTexture:(id)arg2;
+ (id)textureWithImageNamed:(id)arg1;
+ (id)_textureWithImageNamed:(id)arg1;
+ (void)deleteUnusedTextures;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(nonatomic) int wrapMode;
- (void)unload;
- (void).cxx_destruct;
- (void)load;
- (void)commonInit;
- (id).cxx_construct;
@property(nonatomic) BOOL isRotated;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)size;
- (void)dealloc;
- (void)_savePngFromGLCache:(id)arg1;
@property(nonatomic) unsigned int textureTarget;
- (struct CGImage *)_rotateCGImage:(struct CGImage *)arg1;
- (struct CGImage *)_newTextureFromGLCache;
- (id)_initWithGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2;
- (struct CGImage *)_createCGImage;
@property(copy, nonatomic) NSString *subTextureName; // @synthesize subTextureName=_subTextureName;
@property(copy, nonatomic) NSString *originalAtlasName; // @synthesize originalAtlasName=_originalAtlasName;
@property(nonatomic) struct CGPoint cropOffset; // @synthesize cropOffset=_cropOffset;
@property(nonatomic) struct CGPoint cropScale; // @synthesize cropScale=_cropScale;
- (void)preload;
@property(readonly, nonatomic) BOOL isRepeatable;
- (void)_loadOnTextureQueue;
@property(nonatomic) BOOL usesMipmaps;
- (id)textureByApplyingCIFilter:(id)arg1;
- (BOOL)isInMemory;
@property(nonatomic) BOOL disableAlpha;
@property(readonly, nonatomic) BOOL useAlpha;
- (id)initWithImagePath:(id)arg1;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setTextureDimension:(const struct CGSize *)arg1 withPixelSize:(const struct CGSize *)arg2;
- (struct CGImage *)alphaMask;
- (BOOL)alphaTestX:(float)arg1 y:(float)arg2;
- (void)generateAlphaMapOfSize:(struct CGSize)arg1 fromImage:(struct CGImage *)arg2;
- (id)textureByGeneratingNormalMap;
- (id)_textureCache;
- (id)initWithImageNamed:(id)arg1;
- (id)_copyImageData;
- (void)initTextureCacheWithImageData;
- (void)loadImageDataFromCGImage:(struct CGImage *)arg1 pointsSize:(struct CGSize)arg2;
- (BOOL)loadImageDataFromPVRGZData:(id)arg1;
- (void)loadImageData;
- (BOOL)loadImageDataFromPVRData:(id)arg1;
- (void)_ensureImageData;
- (id)_generateNormalMap:(float)arg1 contrast:(float)arg2 multiPass:(unsigned long)arg3;
- (id)textureByGeneratingNormalMapWithSmoothness:(float)arg1 contrast:(float)arg2;
- (id)imgName;
@property(readonly, nonatomic) struct CGSize alphaMapSize; // @synthesize alphaMapSize=_alphaMapSize;
@property(readonly, nonatomic) unsigned int *alphaMap; // @synthesize alphaMap=_alphaMap;
@property(nonatomic) int filteringMode;
@property(readonly, nonatomic) NSString *imageNameOrPath;
@property(readonly, nonatomic) BOOL hasAlpha;
- (int)glTextureId;
- (struct CGRect)textureRect;

@end

