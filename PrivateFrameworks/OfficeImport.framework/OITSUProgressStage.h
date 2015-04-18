//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OITSUProgressContext;

@interface OITSUProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    OITSUProgressStage *m_parentStage;
    OITSUProgressContext *m_context;
}

- (double)overallProgress;
- (double)currentPosition;
- (void)setProgressPercentage:(double)arg1;
- (void)advanceProgress:(double)arg1;
- (id)parentStage;
- (void)setNextSubStageParentSize:(double)arg1;
- (double)nextSubStageParentSize;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (id)initRootStageInContext:(id)arg1;
- (void)end;
- (void)setProgress:(double)arg1;
- (id)description;
- (void)dealloc;

@end

