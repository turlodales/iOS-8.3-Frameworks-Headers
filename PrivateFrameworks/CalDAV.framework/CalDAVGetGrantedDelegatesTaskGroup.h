//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup
{
    int _state;
    BOOL _fetchPrincipalDetails;
}

- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_fetchOnlyHrefs;
- (void)_expandPropertiesWithAllowWrite:(BOOL)arg1;
@property(nonatomic) BOOL fetchPrincipalDetails; // @synthesize fetchPrincipalDetails=_fetchPrincipalDetails;
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1;
- (void)_getChildProperties;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
@property(nonatomic) int state; // @synthesize state=_state;

@end

