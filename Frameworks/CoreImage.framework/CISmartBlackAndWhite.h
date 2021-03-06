//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISmartBlackAndWhite : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputNeutralGamma;
    NSNumber *inputTone;
    NSNumber *inputHue;
    NSNumber *inputGrain;
    NSNumber *inputScaleFactor;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(copy, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(copy, nonatomic) NSNumber *inputGrain; // @synthesize inputGrain;
@property(copy, nonatomic) NSNumber *inputHue; // @synthesize inputHue;
@property(copy, nonatomic) NSNumber *inputTone; // @synthesize inputTone;
@property(copy, nonatomic) NSNumber *inputNeutralGamma; // @synthesize inputNeutralGamma;
@property(copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
- (id)hueArrayImage:(float *)arg1;
- (float *)createHueArray;
- (void)getNonNormalizedSettings:(CDStruct_31328b19 *)arg1;
- (id)_kernel;

@end

