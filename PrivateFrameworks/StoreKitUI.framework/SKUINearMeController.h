//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "SKUIItemStateCenterObserver.h"

@class CLLocationManager, NSArray, NSDictionary, NSObject<OS_dispatch_source>, NSString, SKUIClientContext, SSLookupRequest;

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver>
{
    NSArray *_items;
    int _status;
    BOOL _isMonitoring;
    SSLookupRequest *_lookupRequest;
    CLLocationManager *_locationManager;
    int _authorizationStatus;
    NSObject<OS_dispatch_source> *_locationTimeoutTimer;
    int _locationTimeoutCount;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSDictionary *_responseDictionary;
    SKUIClientContext *_clientContext;
}

+ (id)sharedController;
- (void)disable;
- (void)getItems;
- (void)_refreshTimeout;
- (void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_startRefreshTimer;
- (void)_monitorLocationTimeout;
- (void)_stopRefreshTimer;
- (void)_lookupItemsForLocation:(id)arg1;
- (void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(int)arg4;
- (void)_disableNearMe;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
- (id)init;
- (void)_stopMonitoringLocation;
- (void)_startMonitoringLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

