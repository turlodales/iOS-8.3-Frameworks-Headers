//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation
{
}

+ (id)defaultValueForKey:(id)arg1;
- (double)durationForEpsilon:(double)arg1;
@property float mass;
@property float velocity;
@property float damping;
- (float)_solveForInput:(float)arg1;
@property float stiffness;
- (double)_timeFunction:(double)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

@end

