//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumberFormatter.h"

@interface NSNumberFormatter (FUSessionTracker)
+ (id)FU_localizedSpeedUnit;
+ (id)FU_localizedSpeedValueForDistance:(id)arg1 overTime:(double)arg2;
+ (double)FU_distanceInMetersForDistanceInUserUnit:(double)arg1;
+ (double)FU_distanceInUserDistanceUnitForDistanceInMeters:(double)arg1;
+ (id)FU_localizedShortUnitStringWithDistanceUnit:(int)arg1;
+ (void)FU_setUserDistanceUnit:(int)arg1;
+ (BOOL)FU_localeUsesMetricForPersonHeight;
+ (id)FU_stringForHeight:(long)arg1 withUnitString:(id)arg2;
+ (id)FU_stringForHeightInInches:(long)arg1;
+ (id)FU_percentStringWithNumber:(id)arg1;
+ (id)FU_decimalSeparator;
+ (id)_longStyleTitleStringWithDistanceUnit:(int)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(int)arg3;
+ (id)_longStyleStringWithDistanceUnit:(int)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(int)arg3;
+ (id)_shortStyleStringWithDistanceUnit:(int)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(int)arg3;
+ (id)FU_localizedStringWithDistance:(double)arg1 distanceUnit:(int)arg2 unitStyle:(int)arg3 withDecimalPrecision:(int)arg4;
+ (int)_defaultPrecisionForDistanceUnit:(int)arg1;
+ (double)FU_distanceInDistanceUnit:(int)arg1 forDistanceInMeters:(double)arg2;
+ (int)FU_lengthUnitForCurrentLocale;
+ (id)_FU_singleFractionNumberFormatter;
+ (id)_FU_zeroPaddedIntegerNumberFormatter;
+ (id)_FU_integerPercentNumberFormatter;
+ (id)_formatDoubleValue:(double)arg1 withFormatString:(id)arg2 withDecimalPrecision:(int)arg3;
+ (id)_FU_doubleFractionNumberFormatter;
+ (id)_FU_integerNumberFormatter;
+ (id)FU_adaptiveLocalizedDistanceStringWithDistance:(double)arg1 unitStyle:(int)arg2 usedUnit:(int *)arg3;
+ (id)FU_localizedStringWithCalories:(double)arg1 unitStyle:(int)arg2;
+ (id)FU_stringWithTimeInterval:(double)arg1 formatType:(unsigned int)arg2;
+ (id)FU_localizedDisplayStringForDistanceUnit:(int)arg1;
+ (int)FU_userDistanceUnit;
+ (id)FU_localizedStringWithDistance:(double)arg1 unitStyle:(int)arg2;
+ (id)FU_stringWithNumber:(id)arg1 decimalPrecision:(int)arg2;
@end

