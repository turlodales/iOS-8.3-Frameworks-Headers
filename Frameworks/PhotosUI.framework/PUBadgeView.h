//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface PUBadgeView : UIView
{
    BOOL _flattensSubviews;
    int _badgeType;
    UIImage *__badgeImage;
    UIImageView *__badgeImageView;
    UIImageView *__backgroundImageView;
    NSString *__bannerText;
    UILabel *__textLabel;
    double _videoDuration;
}

- (void)_updateTextLabel;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setTextLabel:) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
- (void)_updateBackgroundView;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL flattensSubviews; // @synthesize flattensSubviews=_flattensSubviews;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic, setter=_setBackgroundImageView:) UIImageView *_backgroundImageView; // @synthesize _backgroundImageView=__backgroundImageView;
@property(retain, nonatomic, setter=_setBadgeImage:) UIImage *_badgeImage; // @synthesize _badgeImage=__badgeImage;
- (void)_updateBadgeImageView;
- (void)_updateFlattenSubviews;
@property(retain, nonatomic, setter=_setBannerText:) NSString *_bannerText; // @synthesize _bannerText=__bannerText;
- (void)_updateBadgeImage;
- (void)_updateSubviewsOrdering;
@property(nonatomic) int badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic, setter=_setBadgeImageView:) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;
- (void)setBadgeType:(int)arg1 videoDuration:(double)arg2;

@end

