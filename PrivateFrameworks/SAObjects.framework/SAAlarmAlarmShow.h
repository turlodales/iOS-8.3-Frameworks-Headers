//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAlarmAlarmAction.h"

@class NSArray, NSString;

@interface SAAlarmAlarmShow : AceObject <SAAlarmAlarmAction>
{
}

+ (id)alarmShowWithDictionary:(id)arg1 context:(id)arg2;
+ (id)alarmShow;
@property(copy, nonatomic) NSArray *alarmIds;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

