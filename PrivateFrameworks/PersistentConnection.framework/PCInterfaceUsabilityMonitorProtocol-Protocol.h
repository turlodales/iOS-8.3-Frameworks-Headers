//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCInterfaceMonitorProtocol.h"

@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) BOOL isRadioHot;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
@end

