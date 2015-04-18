//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"
#import "_GEOCountryConfigurationServerProxyDelegate.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate>
{
    NSString *_countryCode;
    NSLock *_countryCodeLock;
    NSMutableArray *_updateCompletionHandlers;
    NSLock *_supportedFeaturesLock;
    NSMutableDictionary *_supportedFeatures;
    double _urlAuthenticationTimeToLive;
    BOOL _hasURLAuthenticationTimeToLive;
    id <_GEOCountryConfigurationServerProxy> _serverProxy;
}

+ (id)sharedConfiguration;
+ (void)setUseLocalProxy:(BOOL)arg1;
+ (void)disableServerConnection;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
@property(copy, nonatomic) NSString *countryCode;
- (void)updateProvidersForCurrentCountry;
@property(readonly, nonatomic) double urlAuthenticationTimeToLive;
@property(readonly, nonatomic) BOOL currentCountrySupportsCarIntegration;
@property(readonly, nonatomic) BOOL currentCountrySupportsRouteGenius;
@property(readonly, nonatomic) BOOL currentCountrySupportsDirections;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)_resetSupportedFeatures;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(int *)arg3;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(int *)arg3;
@property(readonly, nonatomic) BOOL currentCountrySupportsNavigation;
@property(readonly, nonatomic) BOOL currentCountrySupportsTraffic;
- (BOOL)currentCountrySupportsFeature:(int)arg1;
- (BOOL)countryCode:(id)arg1 supportsFeature:(int)arg2;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(int *)arg4;
- (void)_updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

