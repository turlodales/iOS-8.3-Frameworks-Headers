//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSQueryTask.h>

@class PRSSearchCompletionResultSet;

@interface PRSFakeQueryTask : PRSQueryTask
{
    PRSSearchCompletionResultSet *_results;
}

- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 results:(id)arg5;
@property(retain, nonatomic) PRSSearchCompletionResultSet *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)resume;

@end

