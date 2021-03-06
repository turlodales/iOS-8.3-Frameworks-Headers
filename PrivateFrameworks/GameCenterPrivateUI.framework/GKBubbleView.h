//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface GKBubbleView : UIView
{
    float _animationScale[9];
    char _animationReversed[9];
    BOOL _animating;
    BOOL _touchAnimationRunning;
    BOOL _touchAnimationCanEnd;
    int _bubbleType;
    UIImageView *_imageView;
    UIImageView *_highlightView;
    int _numVertices;
    int _numFaces;
    float _animationAngle;
    float _animationRadiansPerSecond;
    float _touchAnimationElapsed;
    float _touchAnimationAngle;
    float _moveAnimationAngle;
    float _moveAnimationRadiansPerSecond;
    float _moveAnimationScale;
}

@property(nonatomic) float moveAnimationScale; // @synthesize moveAnimationScale=_moveAnimationScale;
@property(nonatomic) float moveAnimationRadiansPerSecond; // @synthesize moveAnimationRadiansPerSecond=_moveAnimationRadiansPerSecond;
@property(nonatomic) float moveAnimationAngle; // @synthesize moveAnimationAngle=_moveAnimationAngle;
@property(nonatomic) float touchAnimationAngle; // @synthesize touchAnimationAngle=_touchAnimationAngle;
@property(nonatomic) float touchAnimationElapsed; // @synthesize touchAnimationElapsed=_touchAnimationElapsed;
@property(nonatomic) BOOL touchAnimationCanEnd; // @synthesize touchAnimationCanEnd=_touchAnimationCanEnd;
@property(nonatomic) BOOL touchAnimationRunning; // @synthesize touchAnimationRunning=_touchAnimationRunning;
@property(nonatomic) float animationRadiansPerSecond; // @synthesize animationRadiansPerSecond=_animationRadiansPerSecond;
@property(nonatomic) float animationAngle; // @synthesize animationAngle=_animationAngle;
@property(nonatomic) int numFaces; // @synthesize numFaces=_numFaces;
@property(nonatomic) int numVertices; // @synthesize numVertices=_numVertices;
- (float)animationScaleForCurrentZ;
- (struct CGPoint)offsetForVertexAtIndex:(int)arg1;
- (void)applyAnimationToVertices:(struct CAMeshVertex *)arg1;
- (void)setupVerticesAndFacesAnimated:(BOOL)arg1;
- (void)chooseMoveAnimation;
- (BOOL)randomBOOL;
- (void)choosePointAnimations;
- (float)randomFloatBetweenMin:(float)arg1 andMax:(float)arg2;
- (void)touchEnded;
- (void)touchBegan;
- (void)setAnimationStateBasedOnBubble:(id)arg1;
@property(nonatomic) int bubbleType; // @synthesize bubbleType=_bubbleType;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)update:(double)arg1;
@property(retain, nonatomic) UIImageView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

