//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPDisposable.h"

@interface CPCluster : NSObject <CPDisposable>
{
    const CDStruct_071390ef *profile;
    unsigned int xCount;
    double *x;
    double *dx;
    unsigned int *dxOrderIndex;
    unsigned int interClusterMinIndex;
    double *ddx;
    unsigned int *ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    CDStruct_2a61e2ef *xStats;
    unsigned int levels;
    CDStruct_2a61e2ef *dxStats;
    BOOL ownData;
    BOOL ownDifferences;
}

+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int *)arg3;
+ (unsigned int *)createOrderIndexFor:(double *)arg1 ofSize:(unsigned int)arg2;
+ (void)clusterTextLine:(id)arg1;
- (void)finalize;
- (id)initWithProfile:(const CDStruct_071390ef *)arg1;
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(CDStruct_2a61e2ef *)arg3;
- (void)makeWords:(CDStruct_a823b51b *)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(BOOL)arg2;
- (CDStruct_2a61e2ef)largestClusterStatistics;
- (CDStruct_2a61e2ef)differenceClusterStatisticsAtIndex:(unsigned int)arg1;
- (CDStruct_2a61e2ef)clusterStatisticsAtIndex:(unsigned int)arg1;
- (unsigned int)clusterCount;
- (BOOL)applyDifferenceHints:(CDStruct_2a61e2ef *)arg1 count:(unsigned int)arg2;
- (void)findDensityClusters:(double *)arg1 count:(unsigned int)arg2;
- (void)findClustersFromDifferences:(double *)arg1 count:(unsigned int)arg2;
- (void)findClusters:(double *)arg1 count:(unsigned int)arg2;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;
- (void)setMaximumClusterSpread:(double)arg1;
- (void)setMinimumClusterSize:(unsigned int)arg1;
- (void)assembleDataStats;
- (BOOL)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (BOOL)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (void)analyzeDensities;
- (void)analyzeDifferences;
- (void)computeDifferencesFromData;
- (void)assembleDensityDifferenceStats;
- (void)computeDataFromDifferences;
- (BOOL)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)assembleDifferenceStats;
- (void)splitSecondDifferences;
- (BOOL)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (unsigned int)levels;
- (void)dispose;
- (id)init;
- (void)dealloc;

@end

