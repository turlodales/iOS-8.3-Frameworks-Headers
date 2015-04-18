//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Stocks/YQLRequest.h>

@class Stock, StockChartData;

@interface ChartUpdater : YQLRequest
{
    Stock *_stock;
    int _interval;
    StockChartData *_currentChartData;
    id <ChartUpdaterDelegate> _delegate;
}

+ (id)_rangeStringForInterval:(int)arg1;
- (id)aggregateDictionaryDomain;
- (BOOL)updateChartForStock:(id)arg1 interval:(int)arg2;
- (void)didParseData;
- (void)parseData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ChartUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancel;
- (void)failWithError:(id)arg1;

@end

