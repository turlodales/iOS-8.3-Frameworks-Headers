//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface PSSoftwareUpdateAnimatedIcon : UIView
{
    UIImageView *_innerGearView;
    UIImageView *_outerGearShadowView;
    UIImageView *_outerGearView;
    BOOL _animating;
}

@property(readonly, nonatomic) UIImageView *outerGearView;
@property(readonly, nonatomic) UIImageView *outerGearShadowView;
@property(readonly, nonatomic) UIImageView *innerGearView;
- (void)setAnimating:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

