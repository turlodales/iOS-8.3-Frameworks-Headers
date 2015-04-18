//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WatchKit/SPComplicationData.h>

#import "NSSecureCoding.h"

@class NSString;

@interface SPWeatherComplicationData : SPComplicationData <NSSecureCoding>
{
    NSString *_temperatureText;
    NSString *_locationText;
    NSString *_currentConditionsText;
    int _currentConditionsEnum;
    NSString *_highLowText;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *locationText; // @synthesize locationText=_locationText;
@property(retain, nonatomic) NSString *highLowText; // @synthesize highLowText=_highLowText;
@property(nonatomic) int currentConditionsEnum; // @synthesize currentConditionsEnum=_currentConditionsEnum;
@property(retain, nonatomic) NSString *currentConditionsText; // @synthesize currentConditionsText=_currentConditionsText;
@property(retain, nonatomic) NSString *temperatureText; // @synthesize temperatureText=_temperatureText;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

