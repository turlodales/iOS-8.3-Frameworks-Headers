//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKColorPalette.h>

@class NSArray;

@interface GKImageColorPalette : GKColorPalette
{
    unsigned long _hueSpread;
    unsigned long _saturationSpread;
    unsigned long _brightnessSpread;
    unsigned long _grayscaleSpread;
    struct HSVColor *_imageHSVMap;
    struct CGSize _imageSize;
    float _borderPercentageForBorderDetection;
    unsigned long _hueHistogram[360];
    unsigned long _saturationHistogram[256];
    unsigned long _brightnessHistogram[256];
    NSArray *_bubbleColors;
}

@property(retain) NSArray *bubbleColors; // @synthesize bubbleColors=_bubbleColors;
- (void)printHistogram:(unsigned int *)arg1 ofSize:(unsigned long)arg2;
- (BOOL)analyzeImage:(struct CGImage *)arg1;
- (void)findBrightColors;
- (void)generateHSVMapWithContext:(struct CGContext *)arg1;
- (unsigned long)weightHistogram:(unsigned int *)arg1 size:(unsigned long)arg2 spread:(unsigned long)arg3;
- (void)iterateOverPixelsWithBlock:(CDUnknownBlockType)arg1 forHue:(unsigned long)arg2;
- (void)clearSaturationAndBrightnessHistograms;
- (void)clearMainHistograms;
- (void)reset;
- (id)initWithImage:(id)arg1;

@end

