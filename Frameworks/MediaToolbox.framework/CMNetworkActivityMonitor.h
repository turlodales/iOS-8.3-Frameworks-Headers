//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMNetworkActivityObserver, NSObject<OS_dispatch_queue>;

@interface CMNetworkActivityMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _networkIsActive;
    CMNetworkActivityObserver *_cmObserver;
    int _showingNetworkActivityCount;
    int _monitoringActiveCount;
}

+ (id)sharedActivityMonitor;
- (id)init;
- (void)dealloc;
@property(nonatomic) BOOL networkIsActive; // @synthesize networkIsActive=_networkIsActive;
@property(nonatomic) int showingNetworkActivityCount; // @synthesize showingNetworkActivityCount=_showingNetworkActivityCount;
- (void)endMonitoring;
- (void)beginMonitoring;
@property(retain, nonatomic, setter=setCMObserver:) CMNetworkActivityObserver *cmObserver; // @synthesize cmObserver=_cmObserver;
@property(nonatomic) int monitoringActiveCount; // @synthesize monitoringActiveCount=_monitoringActiveCount;

@end
