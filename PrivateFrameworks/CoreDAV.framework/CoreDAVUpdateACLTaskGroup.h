//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVACLTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class CoreDAVPropFindTask, NSSet, NSString, NSURL;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate>
{
    int _state;
    NSSet *_aceItems;
    NSURL *_url;
    CoreDAVPropFindTask *_fetchTask;
}

@property(retain, nonatomic) NSSet *aceItems; // @synthesize aceItems=_aceItems;
- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;
- (void)_startSetACLWithAccessControlEntities:(id)arg1;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startGetACL;
@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

