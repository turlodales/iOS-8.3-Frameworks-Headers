//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailAttendeesCell, NSArray, NSMutableDictionary;

@interface EKEventAttendeesDetailItem : EKEventDetailItem
{
    NSMutableDictionary *_attendeesCells;
    EKEventDetailAttendeesCell *_cell;
    int _status;
    NSArray *_attendees;
}

@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)reset;
- (unsigned int)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;

@end

