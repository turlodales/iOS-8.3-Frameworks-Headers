//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult
{
}

- (unsigned long long)resultType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
@property(readonly) NSArray *rangeArray;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;
@property(readonly) NSRegularExpression *regularExpression;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;

@end

