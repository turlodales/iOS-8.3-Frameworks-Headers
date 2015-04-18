//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDAnimateColorBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateTimeBehavior, PDAudioNode, PDCmdBehavior, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDVideoNode;

@interface PDTimeNodeUnion : NSObject
{
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}

- (void)setBehavior:(id)arg1;
- (void)setCmdBehavior:(id)arg1;
- (id)cmdBehavior;
- (void)setSequential:(id)arg1;
- (id)sequential;
- (void)setParallel:(id)arg1;
- (id)parallel;
- (id)video;
- (void)setAudio:(id)arg1;
- (id)audio;
- (void)setColorBehavior:(id)arg1;
- (id)colorBehavior;
- (void)setScaleBehavior:(id)arg1;
- (id)scaleBehavior;
- (void)setRotateBehavior:(id)arg1;
- (id)rotateBehavior;
- (void)setMotionBehavior:(id)arg1;
- (id)motionBehavior;
- (void)setEffectBehavior:(id)arg1;
- (id)effectBehavior;
- (void)setTimeBehavior:(id)arg1;
- (id)timeBehavior;
- (id)commonBehavior;
- (id)behavior;
- (void)setVideo:(id)arg1;
- (id)init;
- (void)dealloc;

@end

