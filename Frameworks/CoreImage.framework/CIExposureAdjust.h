//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputEV;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputEV; // @synthesize inputEV;
- (BOOL)_isIdentity;

@end

