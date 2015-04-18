//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PTSHUDControl.h"
#import "_UISettingsKeyPathObserver.h"

@class NSArray, NSNumberFormatter, NSString, NSTimer, UIButton, UILabel, UISlider, _UISettings;

@interface PTSSlider : UIView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    BOOL _enabled;
    BOOL _showsValueLabel;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    int _alignment;
    UISlider *_sliderControl;
    UILabel *_titleLabel;
    NSNumberFormatter *_valueLabelFormatter;
    NSArray *_valueLabelStrings;
    float _increment;
    UILabel *_valueLabel;
    UIButton *_upIncrementButton;
    UIButton *_downIncrementButton;
    NSArray *_subviewConstraints;
    NSTimer *_buttonRepeatTimer;
    CDStruct_dcaade61 _valueChangePublishTTL;
}

+ (id)zeroToOneSliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3;
+ (struct CGRect)defaultFrame;
+ (id)sliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 minimumValue:(float)arg4 maximumValue:(float)arg5;
+ (id)slider;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(nonatomic) float increment; // @synthesize increment=_increment;
@property(copy, nonatomic) NSArray *valueLabelStrings; // @synthesize valueLabelStrings=_valueLabelStrings;
@property(nonatomic) BOOL showsValueLabel; // @synthesize showsValueLabel=_showsValueLabel;
- (void)downIncrement;
- (void)stopIncrementRepeatAction;
- (void)upIncrement;
@property(retain, nonatomic) NSTimer *buttonRepeatTimer; // @synthesize buttonRepeatTimer=_buttonRepeatTimer;
@property(nonatomic) CDStruct_dcaade61 valueChangePublishTTL; // @synthesize valueChangePublishTTL=_valueChangePublishTTL;
- (void)publishValueChanged;
@property(retain, nonatomic) NSNumberFormatter *valueLabelFormatter; // @synthesize valueLabelFormatter=_valueLabelFormatter;
@property(retain, nonatomic) UIButton *downIncrementButton; // @synthesize downIncrementButton=_downIncrementButton;
@property(retain, nonatomic) UIButton *upIncrementButton; // @synthesize upIncrementButton=_upIncrementButton;
@property(retain, nonatomic) UISlider *sliderControl; // @synthesize sliderControl=_sliderControl;
- (void)downIncrementAction:(id)arg1;
- (id)makeIncrementButtonWithAction:(SEL)arg1 imageName:(id)arg2;
- (void)upIncrementAction:(id)arg1;
- (id)makeValueLabel;
- (id)makeSliderControl;
@property(retain, nonatomic) NSArray *subviewConstraints; // @synthesize subviewConstraints=_subviewConstraints;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
- (id)makeTitleLabel;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)updateValueLabel;
- (void).cxx_destruct;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void)valueChanged:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) float value; // @dynamic value;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) float maximumValue; // @dynamic maximumValue;
@property(nonatomic) float minimumValue; // @dynamic minimumValue;
@property(readonly) Class superclass;

@end

