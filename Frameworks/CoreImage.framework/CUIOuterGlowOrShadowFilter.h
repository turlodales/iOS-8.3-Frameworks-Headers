//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

@interface CUIOuterGlowOrShadowFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputRadius;
    NSNumber *inputSize;
    NSNumber *inputSpread;
    CIColor *inputColor;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputSpread; // @synthesize inputSpread;
@property(retain, nonatomic) NSNumber *inputRange; // @synthesize inputRange;
@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property(retain, nonatomic) NSNumber *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
- (id)_kernel;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

@end

