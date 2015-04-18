//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString, UIPickerView;

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_pickerView;
    BOOL _maximumInterval;
    int _frequency;
    int _interval;
    CDUnknownBlockType _changeBlock;
}

@property(nonatomic) BOOL maximumInterval; // @synthesize maximumInterval=_maximumInterval;
@property(nonatomic) int interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
@property(nonatomic) int frequency; // @synthesize frequency=_frequency;
- (void)viewDidLoad;
- (void)loadView;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
@property(copy) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
- (id)initWithSelectedInterval:(int)arg1 frequency:(int)arg2 changeBlock:(CDUnknownBlockType)arg3;
- (id)pickerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

