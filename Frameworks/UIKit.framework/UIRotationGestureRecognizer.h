//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer
{
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    int _currentRotationCount;
    double _lastTouchTime;
    float _velocity;
    float _previousVelocity;
    struct CGPoint _anchorSceneReferencePoint;
    id _transformAnalyzer;
    UITouch *_touches[2];
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

- (float)_postRecognitionWeight;
- (void)_setPostRecognitionWeight:(float)arg1;
- (float)_preRecognitionWeight;
- (void)_setPreRecognitionWeight:(float)arg1;
- (void)_updateTransformAnalyzerWeights;
- (void)_resetGestureRecognizer;
@property(nonatomic) float rotation;
@property(readonly, nonatomic) float velocity;
- (struct CGPoint)anchorPoint;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

