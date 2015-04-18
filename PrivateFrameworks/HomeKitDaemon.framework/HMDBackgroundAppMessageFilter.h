//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

@class NSMutableSet;

@interface HMDBackgroundAppMessageFilter : HMDMessageFilter
{
    NSMutableSet *_pidOfAppsRunningInBackground;
}

+ (BOOL)isWhitelistedMessage:(id)arg1;
@property(retain, nonatomic) NSMutableSet *pidOfAppsRunningInBackground; // @synthesize pidOfAppsRunningInBackground=_pidOfAppsRunningInBackground;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (void)updateAppWithPid:(int)arg1 runningInBackground:(BOOL)arg2;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;

@end

