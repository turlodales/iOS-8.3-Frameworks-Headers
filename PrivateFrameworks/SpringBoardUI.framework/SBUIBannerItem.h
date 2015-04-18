//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIQuietModePlayability.h"

@class NSString;

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>
{
}

- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)defaultActionWithContext:(id)arg1;
- (BOOL)hasSubActions;
- (id)subActionLabels;
- (BOOL)shouldShowModalSubActions;
- (id)pullDownNotification;
- (BOOL)canShowWhileLocked;
- (BOOL)canShowInAssistant;
- (BOOL)isSticky;
- (BOOL)overridesQuietMode;
- (id)subActions;
- (id)sound;
- (BOOL)inertWhenLocked;
- (BOOL)shouldPlayLightsAndSirens;
- (id)actionWithIdentifier:(id)arg1;
- (BOOL)isCritical;
- (unsigned int)priority;
- (id)sortDate;
- (id)message;
- (id)title;
- (CDUnknownBlockType)action;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

