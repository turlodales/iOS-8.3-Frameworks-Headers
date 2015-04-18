//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class UIBarButtonItem;

@interface ABPickerViewController : UITableViewController
{
    void *_context;
    id _defaultValue;
    SEL _selectionAction;
    id <ABPickerViewControllerDelegate> _delegate;
    id <ABPickerViewControllerDismissDelegate> _dismissDelegate;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
- (void)cancelButtonClicked:(id)arg1;
@property(nonatomic) id <ABPickerViewControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) id <ABPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property(nonatomic) SEL selectionAction; // @synthesize selectionAction=_selectionAction;
- (float)ab_heightToFitForViewInPopoverView;
- (void)attemptDismissAfterSelectingItem:(id)arg1;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;

@end

