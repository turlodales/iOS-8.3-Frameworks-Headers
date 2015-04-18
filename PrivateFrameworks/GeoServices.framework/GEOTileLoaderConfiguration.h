//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GEOResourceManifestConfiguration, NSLocale, NSString;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying>
{
    Class _serverProxyClass;
    BOOL _trackUsage;
    unsigned int _memoryCacheCountLimit;
    unsigned int _memoryCacheCostLimit;
    NSString *_diskCacheLocation;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property(copy, nonatomic) NSString *diskCacheLocation; // @synthesize diskCacheLocation=_diskCacheLocation;
@property(retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(nonatomic) unsigned int memoryCacheCostLimit; // @synthesize memoryCacheCostLimit=_memoryCacheCostLimit;
@property(nonatomic) unsigned int memoryCacheCountLimit; // @synthesize memoryCacheCountLimit=_memoryCacheCountLimit;
@property(nonatomic) BOOL trackUsage; // @synthesize trackUsage=_trackUsage;
@property(nonatomic) Class serverProxyClass; // @synthesize serverProxyClass=_serverProxyClass;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end
