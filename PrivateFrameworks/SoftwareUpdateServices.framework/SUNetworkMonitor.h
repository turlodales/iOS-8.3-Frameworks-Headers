//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface SUNetworkMonitor : NSObject
{
    struct __SCNetworkReachability *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    BOOL _roaming;
}

+ (void)setHoldsWiFiAssertion:(BOOL)arg1;
+ (BOOL)holdsWiFiAssertion;
+ (id)sharedInstance;
- (void)_operatorBundleChanged;
- (void)_carrierBundleChanged;
- (void)setCellularRoaming:(BOOL)arg1;
- (BOOL)isCellularRoaming;
- (BOOL)isNetworkTypeCellular:(int)arg1;
- (int)_networkTypeFromCurrentCellularData;
- (int)currentNetworkType;
- (void)setCurrentNetworkType:(int)arg1;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_initNetworkObservation;
- (BOOL)_isCurrentlyRoaming;
- (BOOL)isCellularDataRoamingEnabled;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;

@end

