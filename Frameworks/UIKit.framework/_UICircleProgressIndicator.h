//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor, UIImage, UIImageView;

@interface _UICircleProgressIndicator : UIView
{
    float _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    float _animationStartValue;
    UIImage *_borderImage;
    UIImage *_centerImage;
    struct UIEdgeInsets _centerImageInsets;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    BOOL _highlighted;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    float _progress;
    UIColor *_unhighlightedBackgroundColor;
}

+ (id)_indeterminateImage;
+ (id)_borderImage;
+ (id)_fillImage;
@property(retain, nonatomic) UIImage *fillImage; // @synthesize fillImage=_fillImage;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
- (void)_setHidesBorderView:(BOOL)arg1;
@property(nonatomic, getter=isIndeterminate) BOOL indeterminate;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_startIndeterminateAnimation;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_centerImageInsets;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void)tintColorDidChange;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_centerImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

