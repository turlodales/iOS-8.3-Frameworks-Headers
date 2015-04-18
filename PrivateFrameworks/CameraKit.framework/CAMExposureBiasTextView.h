//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMBadgeTextView.h>

@class NSString;

@interface CAMExposureBiasTextView : CAMBadgeTextView
{
    float _exposureBias;
    NSString *__lastText;
}

@property(retain, nonatomic) NSString *_lastText; // @synthesize _lastText=__lastText;
@property(nonatomic) float exposureBias; // @synthesize exposureBias=_exposureBias;
- (float)_textVerticalInset;
- (float)_textHorizontalKerningOffset;
- (float)_textHorizontalInset;
- (id)_textForExposureBias:(float)arg1;
- (id)_textAttributes;
- (struct CGSize)_textSize;
- (void).cxx_destruct;
- (id)_text;

@end

