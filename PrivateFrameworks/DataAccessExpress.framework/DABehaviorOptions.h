//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DABehaviorOptions : NSObject
{
}

+ (BOOL)isCustomerInstall;
+ (void)removeDAManagedDefaults:(id)arg1;
+ (BOOL)addDAManagedDefaults:(id)arg1;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (BOOL)sendMeCardEverywhere;
+ (BOOL)allIMAPServersSupportNotesSearch;
+ (BOOL)useThunderhillBetaServers;
+ (BOOL)ignoreBadLDAPCerts;
+ (BOOL)setDAManagedDefaults:(id)arg1;
+ (id)DAManagedDefaults;
+ (id)_daManagedDefaultsPath;
+ (BOOL)_shouldForceCookies:(char *)arg1;
+ (BOOL)isEASParsingLogEnabled;
+ (id)whitelistedEASProtocols;
+ (int)numForgivable401s;
+ (BOOL)cookiesEnabled;
+ (double)defaultEASTaskTimeoutOutWasFound:(char *)arg1;
+ (BOOL)writeOutBrokenCancelationRequests;
+ (BOOL)ignoreSupportedCommands;
+ (BOOL)earlyPingEnabled;
+ (double)defaultDAVProbeTimeout;
+ (int)refreshThrottleTime;
+ (BOOL)orphanCheckEnabled;
+ (id)APSEnv;
+ (BOOL)perfLogging;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)babysitterEnabled;
+ (id)DAManagedDefaultForKey:(id)arg1;
+ (BOOL)promptForAllCerts;
+ (BOOL)isInHoldingPattern;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)compressRequests;
+ (BOOL)isAppleInternalInstall;
+ (void)initialize;
+ (BOOL)CFNetworkLogging;
+ (void)_startListeningForNotifications;

@end

