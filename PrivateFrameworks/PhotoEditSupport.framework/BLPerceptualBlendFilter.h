//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage;

@interface BLPerceptualBlendFilter : CIFilter
{
    CIImage *_inputImage;
    CIImage *_inputBackgroundImage;
    CIImage *_inputMaskImage;
}

- (id)outputImage;
- (void).cxx_destruct;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
@property(retain) CIImage *inputMaskImage; // @synthesize inputMaskImage=_inputMaskImage;
@property(retain) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage=_inputBackgroundImage;

@end

