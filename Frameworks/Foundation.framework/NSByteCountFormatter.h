//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface NSByteCountFormatter : NSFormatter
{
    unsigned int _allowedUnits;
    BOOL _countStyle;
    BOOL _allowsNonnumericFormatting;
    BOOL _includesUnit;
    BOOL _includesCount;
    BOOL _includesActualByteCount;
    BOOL _adaptive;
    BOOL _zeroPadsFractionDigits;
    int _formattingContext;
    int _reserved[5];
}

+ (id)stringFromByteCount:(long long)arg1 countStyle:(int)arg2;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringFromByteCount:(long long)arg1;
@property int countStyle;
@property BOOL allowsNonnumericFormatting; // @synthesize allowsNonnumericFormatting=_allowsNonnumericFormatting;
- (id)stringForObjectValue:(id)arg1;
- (unsigned long long)_options;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property BOOL zeroPadsFractionDigits; // @synthesize zeroPadsFractionDigits=_zeroPadsFractionDigits;
@property BOOL includesActualByteCount; // @synthesize includesActualByteCount=_includesActualByteCount;
@property BOOL includesCount; // @synthesize includesCount=_includesCount;
@property BOOL includesUnit; // @synthesize includesUnit=_includesUnit;
@property(getter=isAdaptive) BOOL adaptive; // @synthesize adaptive=_adaptive;
@property unsigned int allowedUnits;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
@property int formattingContext;

@end

