//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "PUPhotoEditLayoutStaticAdaptable.h"

@class NSArray, NSString, PUAdjustmentsMode, PUAdjustmentsModeBadge, PUPhotoEditLevelSlider, UILabel;

@interface PUAdjustmentsModeSliderCell : UICollectionViewCell <PUPhotoEditLayoutStaticAdaptable>
{
    UILabel *_titleLabel;
    PUAdjustmentsModeBadge *_titleBackground;
    NSArray *_levelSliderConstraints;
    NSArray *_titleLabelConstraints;
    NSArray *_titleBackgroundConstraints;
    BOOL _toggleable;
    BOOL _enabled;
    int _layoutOrientation;
    PUAdjustmentsMode *_adjustmentsMode;
    NSString *_title;
    PUPhotoEditLevelSlider *_levelSlider;
    float _sliderShortSideLength;
    int _titleLabelPosition;
}

+ (float)sliderTopMarginVerticalForTitleLabelPosition:(int)arg1;
- (void).cxx_destruct;
- (void)updateConstraints;
@property(readonly, nonatomic) int layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int titleLabelPosition; // @synthesize titleLabelPosition=_titleLabelPosition;
@property(retain, nonatomic) PUPhotoEditLevelSlider *levelSlider; // @synthesize levelSlider=_levelSlider;
- (void)_updateTitleViews;
@property(nonatomic) float sliderShortSideLength; // @synthesize sliderShortSideLength=_sliderShortSideLength;
@property(nonatomic, getter=isToggleable) BOOL toggleable; // @synthesize toggleable=_toggleable;
@property(retain, nonatomic) PUAdjustmentsMode *adjustmentsMode; // @synthesize adjustmentsMode=_adjustmentsMode;
- (void)setupWithLayoutOrientation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

