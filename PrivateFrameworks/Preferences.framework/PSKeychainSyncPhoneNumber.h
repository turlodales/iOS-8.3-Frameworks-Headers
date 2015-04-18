//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KeychainSyncCountryInfo, NSString;

@interface PSKeychainSyncPhoneNumber : NSObject
{
    NSString *_digits;
    KeychainSyncCountryInfo *_countryInfo;
}

+ (id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2;
- (id)formattedAndObfuscatedString;
- (id)formattedStringWithDialingPrefix;
- (id)_stringByAddingDialingPrefixToString:(id)arg1;
@property(retain, nonatomic) NSString *digits; // @synthesize digits=_digits;
@property(retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
- (id)formattedString;
- (void)dealloc;

@end

