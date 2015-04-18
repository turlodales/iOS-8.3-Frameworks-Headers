//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, YTSearchRequest;

@interface YTVideoDataSource : NSObject
{
    BOOL _hasLoaded;
    NSMutableArray *_videos;
    YTSearchRequest *_searchRequest;
    unsigned int _startIndex;
    unsigned int _videosRemaining;
    NSError *_lastError;
}

+ (id)sharedDataSource;
+ (void)saveDataSources;
+ (void)setShouldRemoveOldDefaults;
+ (BOOL)shouldRemoveOldDefaults;
- (void)loadFromDefaults;
- (void)removeAllVideos;
- (void)removeVideoAtIndex:(int)arg1;
- (unsigned int)maxVideosToSave;
- (unsigned int)videosRemaining;
- (void)_clearVideos;
- (void)addVideos:(id)arg1 toTop:(BOOL)arg2;
- (void)_setVideos:(id)arg1;
- (id)_deprecatedVideosDefaultsKey;
- (void)_setLastError:(id)arg1;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_saveToDefaults;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (BOOL)hasLoaded;
- (id)videos;
- (void)_didChange;
- (id)lastError;
- (BOOL)isLoading;
- (id)init;
- (void)reloadData;
- (void)dealloc;
- (void)loadMore;

@end

