//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface HKDataUnitValueRange : NSObject
{
    NSNumber *_minimum;
    NSNumber *_maximum;
}

- (BOOL)containsValue:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) NSNumber *minimum; // @synthesize minimum=_minimum;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2;

@end

