//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PUEditPluginManager : NSObject
{
    int _mediaType;
    NSArray *__plugins;
}

+ (id)sharedManagerForMediaType:(int)arg1;
@property(readonly) int mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setPlugins:) NSArray *_plugins; // @synthesize _plugins=__plugins;
- (id)_initWithMediaType:(int)arg1;
- (id)pluginActivities;
- (BOOL)hasPlugins;
- (void)rediscoverAvailablePlugins;

@end

