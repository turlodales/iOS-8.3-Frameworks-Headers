//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIImageView;

@interface CAMPanoramaArrowView : UIView
{
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    struct CGPath *_currentTailPiecesPath;
    struct CGRect _arrowTailRect;
    float _currentNormalizedSpeed;
    float _tailBiggestDelta;
    float _tailBigDelta;
    float _tailMediumDelta;
    float _tailSmallDelta;
}

- (void)animateArrowSpeedWithNormalizedSpeed:(float)arg1 duration:(double)arg2;
- (void)resetArrow;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (struct CGPath *)_newTailPiecesPathOfWidth:(float *)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

