//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GKBubblePathAnimator, GKBubbleSet, UIViewController, UIViewController<GKBubbleFlowableViewController>, _GKBubbleFlowPathTransitionInfo;

@interface _GKBubbleFlowTransitionInfo : NSObject <NSCopying>
{
    UIViewController<GKBubbleFlowableViewController> *_toVC;
    UIViewController<GKBubbleFlowableViewController> *_fromVC;
    UIViewController *_toWrapperVC;
    UIViewController *_fromWrapperVC;
    UIViewController *_containingViewController;
    CDStruct_b207fc29 _toFlags;
    CDStruct_b207fc29 _fromFlags;
    GKBubbleSet *_fromBubbles;
    GKBubbleSet *_toBubbles;
    int _toFocusBubbleType;
    int _fromFocusBubbleType;
    int _transitionType;
    int _transitionPhase;
    double _startTime;
    double _duration;
    double _fadeOutDuration;
    double _crossfadeDuration;
    double _fadeInDuration;
    double _relativeDuration;
    double _relativeStartTime;
    double _relativeFadeOutDuration;
    double _relativeCrossfadeDuration;
    double _relativeFadeInDuration;
    GKBubblePathAnimator *_toPathAnimator;
    GKBubblePathAnimator *_fromPathAnimator;
    GKBubblePathAnimator *_onlyPathAnimator;
    _GKBubbleFlowPathTransitionInfo *_toPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_fromPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_onlyPathTransitionInfo;
    BOOL _fadedOutRealFromView;
    BOOL _disableInteractionDuringTransition;
}

@property(nonatomic) BOOL disableInteractionDuringTransition; // @synthesize disableInteractionDuringTransition=_disableInteractionDuringTransition;
@property(nonatomic) BOOL fadedOutRealFromView; // @synthesize fadedOutRealFromView=_fadedOutRealFromView;
@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *onlyPathTransitionInfo; // @synthesize onlyPathTransitionInfo=_onlyPathTransitionInfo;
@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *fromPathTransitionInfo; // @synthesize fromPathTransitionInfo=_fromPathTransitionInfo;
@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *toPathTransitionInfo; // @synthesize toPathTransitionInfo=_toPathTransitionInfo;
@property(retain, nonatomic) GKBubblePathAnimator *onlyPathAnimator; // @synthesize onlyPathAnimator=_onlyPathAnimator;
@property(retain, nonatomic) GKBubblePathAnimator *fromPathAnimator; // @synthesize fromPathAnimator=_fromPathAnimator;
@property(retain, nonatomic) GKBubblePathAnimator *toPathAnimator; // @synthesize toPathAnimator=_toPathAnimator;
@property(nonatomic) double relativeFadeInDuration; // @synthesize relativeFadeInDuration=_relativeFadeInDuration;
@property(nonatomic) double relativeCrossfadeDuration; // @synthesize relativeCrossfadeDuration=_relativeCrossfadeDuration;
@property(nonatomic) double relativeFadeOutDuration; // @synthesize relativeFadeOutDuration=_relativeFadeOutDuration;
@property(nonatomic) double relativeDuration; // @synthesize relativeDuration=_relativeDuration;
@property(nonatomic) double relativeStartTime; // @synthesize relativeStartTime=_relativeStartTime;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) int transitionPhase; // @synthesize transitionPhase=_transitionPhase;
@property(nonatomic) int transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) int fromFocusBubbleType; // @synthesize fromFocusBubbleType=_fromFocusBubbleType;
@property(nonatomic) int toFocusBubbleType; // @synthesize toFocusBubbleType=_toFocusBubbleType;
@property(retain, nonatomic) GKBubbleSet *toBubbles; // @synthesize toBubbles=_toBubbles;
@property(retain, nonatomic) GKBubbleSet *fromBubbles; // @synthesize fromBubbles=_fromBubbles;
@property(nonatomic) CDStruct_b207fc29 fromFlags; // @synthesize fromFlags=_fromFlags;
@property(nonatomic) CDStruct_b207fc29 toFlags; // @synthesize toFlags=_toFlags;
@property(retain, nonatomic) UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property(retain, nonatomic) UIViewController *fromWrapperVC; // @synthesize fromWrapperVC=_fromWrapperVC;
@property(retain, nonatomic) UIViewController *toWrapperVC; // @synthesize toWrapperVC=_toWrapperVC;
@property(retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *toVC; // @synthesize toVC=_toVC;
- (id)copyForPhase:(int)arg1;
- (void)adjustDuration:(double)arg1;
@property(readonly, nonatomic) BOOL hasNonFallbackPathAnimator;
@property(readonly, nonatomic) UIViewController *realToVC;
@property(readonly, nonatomic) UIViewController *realFromVC;
- (void)recalculateDurationsAfterAdjustment;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) BOOL animated;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (id)init;
- (void)dealloc;

@end

