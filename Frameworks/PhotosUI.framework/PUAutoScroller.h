//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, UIScrollView;

@interface PUAutoScroller : NSObject
{
    UIScrollView *_scrollView;
    NSTimer *_timer;
    struct CGPoint _distanceFromCenterFrame;
    struct CGPoint _speed;
}

+ (void)performScrollTest:(id)arg1 iterations:(unsigned int)arg2 length:(float)arg3 delta:(float)arg4 vertical:(BOOL)arg5;
+ (void)_scrollTestFire;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)_stopTimer;
- (void)_startTimer;
- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGPoint speed; // @synthesize speed=_speed;
- (void)dealloc;
- (void)stopAndInvalidate;
- (void)updateWithGestureRecognizer:(id)arg1;
- (id)initWithTargetScrollView:(id)arg1;
@property(nonatomic) struct CGPoint distanceFromCenterFrame; // @synthesize distanceFromCenterFrame=_distanceFromCenterFrame;
- (void)_handlerTimer:(id)arg1;

@end

