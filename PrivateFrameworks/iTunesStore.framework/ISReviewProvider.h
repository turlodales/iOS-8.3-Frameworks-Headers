//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISDataProvider.h>

#import "NSCopying.h"

@interface ISReviewProvider : ISDataProvider <NSCopying>
{
    BOOL _backgroundReview;
}

- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
@property(getter=isBackgroundReview) BOOL backgroundReview; // @synthesize backgroundReview=_backgroundReview;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

