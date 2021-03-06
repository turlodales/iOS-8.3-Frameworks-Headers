//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

#import "StepByStepUIDevicePicker.h"

@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>
{
    NSString *connectionType;
    NSString *unlocalizedStatusString;
    NSString *personalizedBaseName;
    BOOL isReallyJoin;
}

- (void)selectedDeviceUpdated;
- (void)updateNavigationButtons;
- (void)primaryActionSelected:(BOOL)arg1;
- (id)deviceTableLabel;
- (id)devicePickerLabel;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (void)setupAndShowEditableBaseStationName;
- (void)validateAndUpdateNextButton;
@property(retain, nonatomic) NSString *personalizedBaseName; // @synthesize personalizedBaseName;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

