//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate>
{
    NSMutableArray *_alerts;
    NSMutableArray *_dialogs;
}

- (void)presentDialog:(id)arg1;
- (void)_performActionForDialog:(id)arg1 buttonIndex:(int)arg2;
- (void).cxx_destruct;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

