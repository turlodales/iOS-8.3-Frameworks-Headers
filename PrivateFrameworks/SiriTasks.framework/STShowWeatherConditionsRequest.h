//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSiriRequest.h"

@class AFCity, STWeatherAttributes;

@interface STShowWeatherConditionsRequest : AFSiriRequest
{
    STWeatherAttributes *_attributes;
    AFCity *_city;
}

+ (BOOL)supportsSecureCoding;
- (id)_initWithAttributes:(id)arg1 city:(id)arg2;
- (id)createResponse;
- (void).cxx_destruct;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)city;

@end

