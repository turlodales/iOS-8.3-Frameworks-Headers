//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

#import "_CIFilterProperties.h"

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    NSNumber *inputOrigI;
    NSNumber *inputOrigQ;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputWarmth; // @synthesize inputWarmth;
@property(retain, nonatomic) NSNumber *inputOrigQ; // @synthesize inputOrigQ;
@property(retain, nonatomic) NSNumber *inputOrigI; // @synthesize inputOrigI;
@property(retain, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
- (id)_kernel;
- (BOOL)_isIdentity;

@end

