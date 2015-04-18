//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView;

@interface GKRatingView : UIView
{
    float _value;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundImageView;
    NSLayoutConstraint *_foregroundWidthConstraint;
}

@property(retain, nonatomic) UIImageView *foregroundImageView; // @synthesize foregroundImageView=_foregroundImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSLayoutConstraint *foregroundWidthConstraint; // @synthesize foregroundWidthConstraint=_foregroundWidthConstraint;
- (void)commonSetup;
- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;
@property(nonatomic) float value; // @synthesize value=_value;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

