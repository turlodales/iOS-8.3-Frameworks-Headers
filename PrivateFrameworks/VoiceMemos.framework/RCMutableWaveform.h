//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceMemos/RCWaveform.h>

@interface RCMutableWaveform : RCWaveform
{
}

- (void)removeSegment:(id)arg1;
- (void)addSegments:(id)arg1;
- (BOOL)clipToTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)addSegment:(id)arg1;
- (void)removeAllSegments;
- (id)classForCoder;
- (void)setSegments:(id)arg1;
- (id)segments;

@end
