//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush
{
    struct CGRect mBounds;
    OITSUColor *mStartColor;
    OITSUColor *mEndColor;
}

- (id)endColor;
- (id)startColor;
- (void)createShading;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (id).cxx_construct;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

