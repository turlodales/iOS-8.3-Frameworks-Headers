//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation
{
    NSDictionary *_responseDictionary;
    SKUIReviewMetadata *_review;
}

- (id)_httpBody;
- (id)initWithReviewMetadata:(id)arg1;
@property(readonly) NSDictionary *responseDictionary;
- (void).cxx_destruct;
- (void)run;

@end

