//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSUIFaceTimeSetupController : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)cellularFaceTimeEnabled;
- (void)setCellularFaceTimeEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (id)init;
- (void)dealloc;

@end

