//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SAUIDomainObjectPicker;

@interface SiriUIObjectPickerViewController : UIViewController
{
    id <SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
    SAUIDomainObjectPicker *_picker;
}

+ (id)pickerControllerWithPicker:(id)arg1;
- (id)initWithPicker:(id)arg1;
@property(readonly, nonatomic, getter=_picker) SAUIDomainObjectPicker *picker; // @synthesize picker=_picker;
- (void)showPicker:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUIObjectPickerViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;

@end
