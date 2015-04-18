//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface QLThumbnailAdditionCache : NSObject
{
    NSCache *_additionsCache;
}

+ (id)sharedInstance;
- (void)purgeCachedAdditionForItemAtURL:(id)arg1;
- (id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id *)arg2;
- (void)cacheAddition:(id)arg1 forDocumentID:(id)arg2;
- (id)init;

@end

