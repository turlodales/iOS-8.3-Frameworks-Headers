//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
    NSNumber *inputFalloff;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputFalloff; // @synthesize inputFalloff;
- (id)_negkernel;
- (id)_poskernel;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
- (BOOL)_isIdentity;

@end

