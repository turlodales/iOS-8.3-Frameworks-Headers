//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CDSEngine : NSObject
{
}

+ (id)canonicalizeBasisObjectSequence:(id)arg1 error:(id *)arg2;
+ (id)interArrivalStatistic:(int)arg1 fromBasisObjects:(id)arg2 error:(id *)arg3;
+ (id)durationStatistic:(int)arg1 fromBasisObjects:(id)arg2 error:(id *)arg3;
+ (id)valueStatistic:(int)arg1 fromBasisObjects:(id)arg2 error:(id *)arg3;
- (id)interArrivalStatistic:(int)arg1 forAttributeId:(unsigned long long)arg2 error:(id *)arg3;
- (id)durationStatistic:(int)arg1 forAttributeId:(unsigned long long)arg2 error:(id *)arg3;
- (id)valueStatistic:(int)arg1 forAttributeId:(unsigned long long)arg2 error:(id *)arg3;
- (double *)copyPrincipalRangeOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 writeAttributeIds:(unsigned long long **)arg3 writeStatisticTypes:(int **)arg4 error:(id *)arg5;
- (double *)copyPrincipalRangeCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 writeAttributeIds:(unsigned long long **)arg3 writeStatisticTypes:(int **)arg4 error:(id *)arg5;
- (double *)copyPrincipalOccurrenceOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 writeAttributeIds:(unsigned long long **)arg3 error:(id *)arg4;
- (double *)copyPrincipalOccurrenceCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 writeAttributeIds:(unsigned long long **)arg3 error:(id *)arg4;
- (double *)copyRangeOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 error:(id *)arg3;
- (double *)copyRangeCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 error:(id *)arg3;
- (double *)copyOccurrenceOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 error:(id *)arg3;
- (double *)copyOccurrenceCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long *)arg2 error:(id *)arg3;
- (id)cachedAttributeIds;
- (double *)copyRangeOrderingCorrelationMatrixOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 orderingGapLeewaySeconds:(double)arg3 error:(id *)arg4;
- (double *)copyRangeCoevalityCorrelationMatrixOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 coevalityLeewaySeconds:(double)arg3 error:(id *)arg4;
- (double)occurrenceOrderingCorrelationOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 orderingGapLeewaySeconds:(double)arg3 error:(id *)arg4;
- (double)occurrenceCoevalityCorrelationOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 coevalityLeewaySeconds:(double)arg3 error:(id *)arg4;
- (BOOL)injestBasisObjects:(id)arg1 error:(id *)arg2;

@end

