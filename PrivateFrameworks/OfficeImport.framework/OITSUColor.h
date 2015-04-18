//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface OITSUColor : NSObject <NSCopying>
{
    struct CGColor *mCGColor;
}

+ (id)colorWithRGBValue:(long)arg1;
+ (id)colorWithBGRValue:(long)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1:(unsigned char)arg2:(unsigned char)arg3;
+ (id)colorWithEshColor:(const struct EshColor *)arg1;
+ (id)colorWithCsColour:(const struct CsColour *)arg1;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithBGR:(unsigned long)arg1;
+ (id)colorWithCalibratedHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)whiteColor;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)clearColor;
+ (id)blackColor;
- (void)getRGBBytes:(char *)arg1:(char *)arg2:(char *)arg3;
- (struct EshColor)eshColor;
- (struct CsColour)csColour;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (unsigned long)toBGR;
- (id)solidColoredPngImage;
- (id)newSolidColoredBitmap:(struct CGSize)arg1;
- (CDStruct_a06f635e)ttColor;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)isNearlyWhite;
- (float)luminance;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (void)getRGBAComponents:(float *)arg1;
- (BOOL)isAlmostEqualToColor:(id)arg1;
- (id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)p_rgbComponentWithIndex:(unsigned char)arg1;
- (float)blueComponent;
- (float)greenComponent;
- (float)redComponent;
- (BOOL)isBlack;
- (id)initWithUIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (float)alphaComponent;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (BOOL)isOpaque;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)set;
- (id)colorWithAlphaComponent:(float)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
@property(readonly) struct CGColor *CGColor; // @synthesize CGColor=mCGColor;
- (void)dealloc;

@end

