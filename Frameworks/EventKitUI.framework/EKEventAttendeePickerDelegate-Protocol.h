//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventAttendeePicker, NSString;

@protocol EKEventAttendeePickerDelegate <NSObject>
- (int)eventAttendeePicker:(EKEventAttendeePicker *)arg1 getValidationStatusForEmailAddress:(NSString *)arg2;
- (void)eventAttendeePicker:(EKEventAttendeePicker *)arg1 cacheValidationStatus:(int)arg2 forEmail:(NSString *)arg3;
@end

