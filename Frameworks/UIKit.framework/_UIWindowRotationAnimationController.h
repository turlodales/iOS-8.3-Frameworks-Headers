//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIWindowAnimationController.h>

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController
{
    BOOL _skipCallbacks;
    BOOL _updateStatusBarIfNecessary;
    CDUnknownBlockType _animations;
    double _duration;
}

@property(nonatomic) BOOL updateStatusBarIfNecessary; // @synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(nonatomic) BOOL skipCallbacks; // @synthesize skipCallbacks=_skipCallbacks;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;

@end

