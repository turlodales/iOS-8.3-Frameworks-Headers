//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAAnimationDelegateBlockHelper : NSObject
{
    CDUnknownBlockType _animationDidStartBlock;
    CDUnknownBlockType _animationDidStopBlock;
}

@property(copy, nonatomic) CDUnknownBlockType animationDidStopBlock; // @synthesize animationDidStopBlock=_animationDidStopBlock;
@property(copy, nonatomic) CDUnknownBlockType animationDidStartBlock; // @synthesize animationDidStartBlock=_animationDidStartBlock;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;

@end

