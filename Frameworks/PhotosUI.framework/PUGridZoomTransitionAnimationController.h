//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UICollectionViewControllerLayoutToLayoutTransition.h"

@class PUZoomableGridTransition;

@interface PUGridZoomTransitionAnimationController : _UICollectionViewControllerLayoutToLayoutTransition
{
    id <UIViewControllerContextTransitioning> _transitionContext;
}

- (void).cxx_destruct;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
@property(readonly, nonatomic) PUZoomableGridTransition *gridTransitionInfo;

@end

