//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem
{
    NSMutableSet *_users;
}

@property(retain, nonatomic) NSMutableSet *users; // @synthesize users=_users;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addUser:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

