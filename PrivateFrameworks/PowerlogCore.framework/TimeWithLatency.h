//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface TimeWithLatency : NSObject
{
    NSDate *_time;
    double _latency;
}

- (id)initWithTime:(id)arg1 andLatency:(double)arg2;
@property double latency; // @synthesize latency=_latency;
- (void).cxx_destruct;
@property(retain) NSDate *time; // @synthesize time=_time;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

