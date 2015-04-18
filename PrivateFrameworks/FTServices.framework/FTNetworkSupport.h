//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject
{
    Class _APSConnectionClass;
    APSConnection *_apsConnection;
    NSTimer *_reliabilityAttemptTimer;
    BOOL _enableCriticalReliability;
    BOOL _criticalReliabilityEnabledState;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL wiFiActiveAndReachable;
@property(nonatomic) BOOL enableCriticalReliability;
@property(readonly, nonatomic) BOOL dataActiveAndReachable;
@property(readonly, nonatomic) BOOL willSearchForNetwork;
@property(readonly, nonatomic) BOOL validNetworkReachable;
@property(readonly, nonatomic) BOOL validNetworkActive;
@property(readonly, nonatomic) BOOL validNetworkEnabled;
@property(readonly, nonatomic) BOOL allowAnyNetwork;
- (void)_setReliabilityTimeoutInterval;
- (void)_reallySetCriticalReliability:(BOOL)arg1;
- (void)_createAPSConnectionIfNeeded;
- (void)_tryToEnableReliability;
- (void)_clearReliabilityTimeoutInterval;
@property(readonly, nonatomic) BOOL networkEnabled;
@property(readonly, nonatomic) BOOL networkActive;
@property(readonly, nonatomic) BOOL networkReachable;

@end

