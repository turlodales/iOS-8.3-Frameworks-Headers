//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface SUMediaLibraryAdamIDCache : NSObject
{
    NSMutableSet *_adamIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isPopulated;
}

+ (id)sharedCache;
- (void)populateCache;
- (void)_libraryChangedNotification:(id)arg1;
- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)getIntersectionWithSet:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getContainsAdamID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_populateCache;
- (id)init;
- (void)dealloc;

@end

