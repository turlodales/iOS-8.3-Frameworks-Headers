//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKEventAttendeePicker, NSArray;

@interface EKEventAttendeesEditViewController : EKEditItemViewController
{
    EKEventAttendeePicker *_picker;
    EKEvent *_event;
    BOOL _cancelTapped;
    BOOL _disableShowingButtons;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_recipientFromAttendee:(id)arg1;
- (id)_attendeeFromRecipient:(id)arg1;
- (id)_firstInvalidRecipientAddress;
- (void)_doneTapped:(id)arg1;
- (void)_cancelTapped:(id)arg1;
@property(nonatomic) BOOL disableShowingButtons; // @synthesize disableShowingButtons=_disableShowingButtons;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (void)setSearchAccountID:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (BOOL)editItemShouldBeAskedForInjectableViewController;
- (BOOL)presentModally;
@property(copy, nonatomic) NSArray *attendees;

@end

