//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DASearchQuery : NSObject
{
    NSString *_searchString;
    int _timeLimit;
    id <DASearchQueryConsumer> _consumer;
    NSString *_searchID;
    int _state;
    struct _NSRange _range;
}

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;
@property(nonatomic) __weak id <DASearchQueryConsumer> consumer; // @synthesize consumer=_consumer;
@property(nonatomic) unsigned int maxResults;
- (BOOL)isQueryRunning;
@property(nonatomic) int timeLimit; // @synthesize timeLimit=_timeLimit;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
- (void)sendResultsToConsumer:(id)arg1;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)description;

@end

