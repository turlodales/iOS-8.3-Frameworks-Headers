//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIAlertAction, UIColor;

@protocol _UIAlertActionRepresenting <NSObject>
- (void)_action:(UIAlertAction *)arg1 updatedTitleTextColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 updatedImageTintColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToBeDefault:(BOOL)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToChecked:(BOOL)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToEnabled:(BOOL)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitleTextAlignment:(int)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitle:(NSString *)arg2;
@end

