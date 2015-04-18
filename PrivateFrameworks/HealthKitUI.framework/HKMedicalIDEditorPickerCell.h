//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKMedicalIDEditorCell.h>

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView;

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    int _chosenValueIndex;
    NSArray *_possibleValues;
}

@property(retain, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(nonatomic) int chosenValueIndex; // @synthesize chosenValueIndex=_chosenValueIndex;
- (void)_hidePicker;
- (void)_showPicker;
- (id)formattedValue;
- (void).cxx_destruct;
- (void)beginEditing;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)dealloc;
- (void)commitEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

