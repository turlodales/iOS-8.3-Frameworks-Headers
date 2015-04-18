//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFDebugTimer : NSObject
{
    double _timer_base;
    unsigned long long _timer_start;
    unsigned long long _timer_end;
    unsigned long long _timer_ticks;
    double _timer_nsecs;
    NSString *name;
}

+ (id)sharedTimer;
+ (id)timerWithName:(id)arg1;
- (unsigned long long)measure;
- (unsigned long long)measureWithLogText:(id)arg1;
- (id)initWithName:(id)arg1;
@property(retain) NSString *name; // @synthesize name;
- (id)rebase;

@end

