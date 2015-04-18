//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WatchKit/SPComplicationData.h>

#import "NSSecureCoding.h"

@class NSString;

@interface SPStockComplicationData : SPComplicationData <NSSecureCoding>
{
    NSString *_tickerSymbolText;
    NSString *_priceText;
    NSString *_marketCapText;
    NSString *_changeInPercentText;
    NSString *_changeInPointsText;
    NSString *_changeText;
    unsigned int _changeDirection;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int changeDirection; // @synthesize changeDirection=_changeDirection;
@property(retain, nonatomic) NSString *changeText; // @synthesize changeText=_changeText;
@property(retain, nonatomic) NSString *changeInPointsText; // @synthesize changeInPointsText=_changeInPointsText;
@property(retain, nonatomic) NSString *changeInPercentText; // @synthesize changeInPercentText=_changeInPercentText;
@property(retain, nonatomic) NSString *marketCapText; // @synthesize marketCapText=_marketCapText;
@property(retain, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(retain, nonatomic) NSString *tickerSymbolText; // @synthesize tickerSymbolText=_tickerSymbolText;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

