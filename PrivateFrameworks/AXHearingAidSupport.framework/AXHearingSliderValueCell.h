//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class NSNumberFormatter, UILabel, UISlider, UIView;

@interface AXHearingSliderValueCell : PSTableCell
{
    UIView *_leftView;
    UISlider *_slider;
    UILabel *_valueLabel;
    NSNumberFormatter *_numberFormatter;
    float _sliderMargin;
    float _valueWidth;
}

- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)updateValue;
- (void)sliderValueDidChange:(id)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)willMoveToSuperview:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)description;
- (void)layoutSubviews;
- (void)dealloc;

@end

