//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AUUIAlert;

@protocol AUUIAlertDelegate <NSObject>

@optional
- (BOOL)auUIAlertDestructiveAction:(AUUIAlert *)arg1;
- (BOOL)auUIAlertAlternateAction:(AUUIAlert *)arg1;
- (BOOL)auUIAlertCancelAction:(AUUIAlert *)arg1;
- (BOOL)auUIAlertOKAction:(AUUIAlert *)arg1;
@end

