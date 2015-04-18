//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore, NSArray, NSData, NSMutableArray;

@interface EKICSPreviewModel : NSObject
{
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
    unsigned int _options;
    int _actionsState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allEvents;
@property(readonly, nonatomic) unsigned int importedEventCount;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (id)importAllIntoCalendar:(id)arg1;
@property(readonly, nonatomic) NSArray *unimportedEvents;
@property(readonly, nonatomic) NSArray *importedEvents;
@property(readonly, nonatomic) unsigned int unimportedEventCount;
@property(readonly, nonatomic) unsigned int totalEventCount;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
@property(readonly, nonatomic) int actionsState;
@property(readonly, nonatomic) EKEventStore *eventStore;

@end
