//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveCorrection : CIFilter
{
    CIImage *inputImage;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property(retain, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property(retain, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;
@property(retain, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
- (id)_kernel;

@end

