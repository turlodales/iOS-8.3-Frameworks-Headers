//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OITSUNumberFormatter : NSObject
{
    struct __CFLocale *mLocale;
    struct __CFArray *mDecimalFormatters;
    struct __CFArray *mCurrencyFormatters;
    struct __CFArray *mPercentageFormatters;
    struct __CFArray *mScientificFormatters;
    struct __CFNumberFormatter *mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    struct __CFString *mAdditionalCurrencyCode;
    struct __CFArray *mAdditionalCurrencyCodeFormatters;
}

+ (id)numberFormatStringSpecialSymbols;
+ (id)currentLocaleListSeparator;
+ (id)currentNonCachedLocaleDecimalSeparator;
+ (id)currentLocaleDecimalSeparator;
+ (id)currentNonCachedLocaleCurrencyCode;
+ (id)availableCurrencyCodes;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (id)localizedPercentSymbol;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)formatterForLocale:(struct __CFLocale *)arg1;
+ (id)userVisibleCurrencyCodes;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)currentLocaleCurrencyCode;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (void)initialize;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (struct __CFArray *)p_scientificFormatters;
- (struct __CFArray *)p_percentageFormatters;
- (struct __CFArray *)p_currencyFormatters;
- (BOOL)findCurrencySymbolInString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 successTSUlString:(const struct __CFString **)arg3;
- (BOOL)valueFromString:(struct __CFString *)arg1 formatters:(struct __CFArray *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (struct __CFArray *)p_decimalFormatters;
- (void)numberPreferencesChanged:(id)arg1;
- (id)localizedPercentSymbol;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)displayNameForCurrencyCode:(id)arg1;
- (BOOL)fractionFromString:(struct __CFString *)arg1 value:(double *)arg2;
- (BOOL)scientificFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (BOOL)percentageFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (BOOL)currencyFromString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (BOOL)decimalFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (id)currentLocaleCurrencyCode;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)initWithLocale:(struct __CFLocale *)arg1;
- (void)dealloc;

@end

