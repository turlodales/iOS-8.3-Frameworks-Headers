//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContactAction.h>

@interface ABContactAddNewFieldAction : ABContactAction
{
    id <ABContactGroupPickerDelegate> _groupPickerDelegate;
}

@property(nonatomic) id <ABContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
- (void)performActionWithSender:(id)arg1;

@end

