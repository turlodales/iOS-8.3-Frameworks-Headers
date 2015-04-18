//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WBSBackgroundActivityScheduler : NSObject
{
    BOOL _isScheduled;
    BOOL _shouldUpdateCriteriaWhenActivityCompletes;
    BOOL _repeats;
    NSString *_identifier;
    double _interval;
    double _tolerance;
}

- (void)scheduleWithBlock:(CDUnknownBlockType)arg1;
- (id)_criteria;
@property(nonatomic) BOOL repeats; // @synthesize repeats=_repeats;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidate;
@property(nonatomic) double tolerance; // @synthesize tolerance=_tolerance;

@end

