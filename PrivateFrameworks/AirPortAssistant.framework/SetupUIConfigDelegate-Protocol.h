//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AUSetupController, NSDictionary;

@protocol SetupUIConfigDelegate
- (void)setupUIConfigPrompt:(int)arg1 paramDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
- (void)setupUIConfigConnectionStatusUpdated:(int)arg1 status:(long)arg2 paramDict:(NSDictionary *)arg3 forController:(AUSetupController *)arg4;
@end

