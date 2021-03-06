//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDSession, NSString;

@interface CDBudget : NSObject
{
    CDSession *_session;
    NSString *_name;
    int _type;
    unsigned long long _integerId;
}

- (BOOL)deleteWithError:(id *)arg1;
@property(readonly) unsigned long long integerId; // @synthesize integerId=_integerId;
- (id)forecastEffectiveOnDate:(id)arg1 error:(id *)arg2;
- (BOOL)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id *)arg3;
- (BOOL)decrementByValue:(long long)arg1 error:(id *)arg2;
- (BOOL)incrementByValue:(long long)arg1 error:(id *)arg2;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (long long)creditsRemainingWithError:(id *)arg1;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(int)arg3 error:(id *)arg4;
@property(readonly) CDSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
@property(readonly) int type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;

@end

