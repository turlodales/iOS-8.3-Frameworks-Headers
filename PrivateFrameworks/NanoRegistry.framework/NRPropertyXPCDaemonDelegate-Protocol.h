//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@protocol NRPropertyXPCDaemonDelegate <NSObject>
- (void)xpcSetValue:(id)arg1 forProperty:(NSString *)arg2 deviceID:(NSUUID *)arg3;
@end

