//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface PUCropOverlayView : UIView
{
    BOOL _cropGridVisible;
    BOOL _straightenGridVisible;
    BOOL _maskedContentVisible;
    NSArray *__oneThirdCropLines;
    NSArray *__oneNinthCropLines;
    NSArray *__maskViews;
    UIView *__cropWindowView;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic, setter=_setCropWindowView:) UIView *_cropWindowView; // @synthesize _cropWindowView=__cropWindowView;
@property(retain, nonatomic, setter=_setOneNinethLines:) NSArray *_oneNinthCropLines; // @synthesize _oneNinthCropLines=__oneNinthCropLines;
@property(retain, nonatomic, setter=_setOneThirdLines:) NSArray *_oneThirdCropLines; // @synthesize _oneThirdCropLines=__oneThirdCropLines;
@property(nonatomic, getter=isMaskedContentVisible) BOOL maskedContentVisible; // @synthesize maskedContentVisible=_maskedContentVisible;
@property(nonatomic, getter=isStraightenGridVisible) BOOL straightenGridVisible; // @synthesize straightenGridVisible=_straightenGridVisible;
@property(nonatomic, getter=isCropGridVisible) BOOL cropGridVisible; // @synthesize cropGridVisible=_cropGridVisible;
- (id)_createConstraintsForLine:(id)arg1 centerMultiplier:(float)arg2 vertical:(BOOL)arg3;
- (id)_createLineViewForCount:(unsigned int)arg1;
- (unsigned int)_subviewIndexForLineForCount:(unsigned int)arg1;
- (id)_addLinesSpacedForCount:(unsigned int)arg1 drawFirstAndLast:(BOOL)arg2 visible:(BOOL)arg3;
- (void)_setGridViews:(id)arg1 visible:(BOOL)arg2 iVarVisibilePtr:(char *)arg3 animated:(BOOL)arg4;
@property(retain, nonatomic, setter=_setMaskViews:) NSArray *_maskViews; // @synthesize _maskViews=__maskViews;
- (id)_createMaskView;
- (void)setMaskedContentVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCropGridVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStraightenGridVisible:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) id layoutReferenceItem;

@end

