//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UITextMagnifierTimeWeightedPoint : NSObject
{
    int m_index;
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];
}

- (struct CGSize)displacementInInterval:(double)arg1;
- (float)distanceCoveredInInterval:(double)arg1;
- (BOOL)historyCovers:(double)arg1;
@property(readonly, nonatomic) struct CGPoint weightedPoint;
- (void)clearHistory;
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (void)addPoint:(struct CGPoint)arg1;

@end

