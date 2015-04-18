//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSDate, NSString, SKUIImageViewElement;

@interface SKUICounterViewElement : SKUIViewElement
{
    double _changeRatePerSecond;
    int _counterType;
    int _dateFormatType;
    NSDate *_endDate;
    NSString *_numberFormat;
    long long _startValue;
    NSDate *_startValueDate;
    long long _stopValue;
}

@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (long long)currentNumberValue;
@property(readonly, nonatomic) SKUIImageViewElement *backgroundImageElement;
@property(readonly, nonatomic) int dateFormatType; // @synthesize dateFormatType=_dateFormatType;
@property(readonly, nonatomic) int counterType; // @synthesize counterType=_counterType;
@property(readonly, nonatomic) long long startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) double changeRatePerSecond; // @synthesize changeRatePerSecond=_changeRatePerSecond;
@property(readonly, nonatomic) NSDate *startValueDate; // @synthesize startValueDate=_startValueDate;
@property(readonly, nonatomic) long long stopValue; // @synthesize stopValue=_stopValue;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
@property(readonly, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
- (void).cxx_destruct;

@end

