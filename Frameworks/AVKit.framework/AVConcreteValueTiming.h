//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVValueTiming.h>

@interface AVConcreteValueTiming : AVValueTiming
{
    double _value;
    double _timeStamp;
    double _rate;
}

- (double)rate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (CDStruct_c3b9c2ee)_timing;

@end

