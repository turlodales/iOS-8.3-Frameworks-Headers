//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AWDAdaptor : NSObject
{
    NSMutableArray *rtpPacketLossRateArray;
    NSMutableArray *jitterBufferUnderflowRateArray;
    NSMutableArray *frameErasureRateArray;
    NSMutableArray *jitterBufferResidencyTimeArray;
}

- (void)sendMessageWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;
- (BOOL)generateAndSendCallEndReport:(id)arg1;
- (void)addSamples:(id)arg1;
- (double)compute95thPercentile:(id)arg1;
- (double)computeMedian:(id)arg1;
- (double)computeMean:(id)arg1;
- (unsigned int *)generateHistogramForValues:(id)arg1 withBinBoundaries:(id)arg2;
- (id)init;
- (void)dealloc;

@end

