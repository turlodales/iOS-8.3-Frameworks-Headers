//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RadioUI/RUTableViewCell.h>

@class MPUEmphasizedText, SKUICircleProgressIndicator, UIImageView, UILabel;

@interface RUSearchStationTableViewCell : RUTableViewCell
{
    SKUICircleProgressIndicator *_activityIndicator;
    UIImageView *_imageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    BOOL _showActivityIndicator;
    MPUEmphasizedText *_stationDescriptionEmphasizedText;
    MPUEmphasizedText *_stationNameEmphasizedText;
}

+ (struct CGSize)artworkSize;
+ (id)_regularTextColor;
+ (id)_textAttributesWithFont:(id)arg1 textColor:(id)arg2;
+ (id)_emphasizedTextColor;
+ (id)_emphasizedTitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_regularTitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_emphasizedSubtitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_regularSubtitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_subtitleLabelFontForTraitCollection:(id)arg1 withEmphasis:(BOOL)arg2;
+ (float)defaultHeightForTraitCollection:(id)arg1;
+ (id)_titleLabelFont;
@property(copy, nonatomic) MPUEmphasizedText *stationNameEmphasizedText; // @synthesize stationNameEmphasizedText=_stationNameEmphasizedText;
@property(copy, nonatomic) MPUEmphasizedText *stationDescriptionEmphasizedText; // @synthesize stationDescriptionEmphasizedText=_stationDescriptionEmphasizedText;
- (id)stationImage;
@property(nonatomic) BOOL showsArtwork;
@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

