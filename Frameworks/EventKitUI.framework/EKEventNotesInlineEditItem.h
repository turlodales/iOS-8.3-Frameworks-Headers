//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import "EKCalendarItemInlineEditItem.h"
#import "UITextViewDelegate.h"

@class CalendarNotesCell, NSString;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate, EKCalendarItemInlineEditItem>
{
    CalendarNotesCell *_cell;
    NSString *_lastTextChange;
}

- (BOOL)isSaveable;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)reset;
- (BOOL)textViewShouldReturn:(id)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)isInline;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

