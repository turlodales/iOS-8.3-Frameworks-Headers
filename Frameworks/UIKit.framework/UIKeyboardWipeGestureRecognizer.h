//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, UITouch;

@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer
{
    NSMutableArray *_endPoints;
    UITouch *candidateEndpoint;
}

- (BOOL)segmentsLookLikeAWipe:(id)arg1;
@property(retain, nonatomic) UITouch *candidateEndpoint; // @synthesize candidateEndpoint;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end

