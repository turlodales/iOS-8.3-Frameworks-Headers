//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUUIAlertDelegate.h"

@class AUUIAlert, NSString;

@interface AUUIAlertDelegateClass : NSObject <AUUIAlertDelegate>
{
    AUUIAlert *uiAlert;
}

- (BOOL)auUIAlertCancelAction:(id)arg1;
- (BOOL)auUIAlertOKAction:(id)arg1;
@property(retain, nonatomic) AUUIAlert *uiAlert; // @synthesize uiAlert;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

