//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropFindTaskDelegate.h"

@class CoreDAVPropFindTask, ICSDocument, NSString, NSURL;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    NSURL *_inboxURL;
    CoreDAVPropFindTask *_fetchTask;
    ICSDocument *_calendarAvailability;
}

@property(retain, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
- (void)startTaskGroup;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
@property(retain, nonatomic) ICSDocument *calendarAvailability; // @synthesize calendarAvailability=_calendarAvailability;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;
- (void)dealloc;
- (void)_finishWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

