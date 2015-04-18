//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface _FIUIAnimatableProperty : NSObject
{
    CDUnknownBlockType _getter;
    CDUnknownBlockType _setter;
    NSMutableArray *_animations;
    id _currentValue;
    id _startValue;
    id _endValue;
}

@property(retain, nonatomic) id currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) id startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) id endValue; // @synthesize endValue=_endValue;
- (BOOL)isFinishedAnimating;
- (void)removeAllPropertyAnimations;
- (void)addPropertyAnimation:(id)arg1;
- (id)initWithGetter:(CDUnknownBlockType)arg1 setter:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)update:(double)arg1;

@end

