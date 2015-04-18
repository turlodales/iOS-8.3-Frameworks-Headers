//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIAceObjectViewController, UIView;

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell
{
    UIView *_animationView;
    SiriUIAceObjectViewController *_aceViewController;
    int _insertionAnimationType;
    int _replacementAnimationType;
    UIView *_replacedView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *replacedView; // @synthesize replacedView=_replacedView;
@property(nonatomic) int replacementAnimationType; // @synthesize replacementAnimationType=_replacementAnimationType;
@property(nonatomic) int insertionAnimationType; // @synthesize insertionAnimationType=_insertionAnimationType;
- (void)beginAnimation;
- (void)configureSubviewsForAnimationType;
- (id)_flyInAnimationForAceViewController:(id)arg1;
- (void)_animateReplacementCrossFade;
- (void)_animateInsertionFadeIn;
- (void)_animateInsertionFlyIn;
- (void)_parentPreviousViewInCell;
- (void)_parentViewInCell;
@property(retain, nonatomic) SiriUIAceObjectViewController *aceViewController; // @synthesize aceViewController=_aceViewController;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

