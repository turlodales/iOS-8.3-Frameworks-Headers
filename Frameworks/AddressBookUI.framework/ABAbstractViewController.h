//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class ABModel;

@interface ABAbstractViewController : UITableViewController
{
    ABModel *_model;
    id <ABStyleProvider> _styleProvider;
}

- (void)updateNavigationButtons;
- (int)behavior;
@property(retain, nonatomic) ABModel *model; // @synthesize model=_model;
- (id)initWithModel:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
- (BOOL)_allowsAutorotation;
- (void)setParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)contentSize;
- (void)dealloc;
- (void)setAddressBook:(void *)arg1;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (id)peoplePickerNavigationController;

@end

