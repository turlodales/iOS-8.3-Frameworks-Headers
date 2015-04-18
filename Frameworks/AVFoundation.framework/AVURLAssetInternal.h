//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetCache, AVAssetInspectorLoader, AVAssetResourceLoader, NSArray, NSObject<OS_dispatch_queue>, NSURL;

@interface AVURLAssetInternal : NSObject
{
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSArray *tracks;
    AVAssetResourceLoader *resourceLoader;
    long makeOneResourceLoaderOnly;
    NSObject<OS_dispatch_queue> *tracksAccessQueue;
    AVAssetCache *assetCache;
    BOOL shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
    BOOL shouldOptimizeAccessForLinearMoviePlayback;
    NSURL *downloadDestinationURL;
    unsigned int referenceRestrictions;
}

@end

