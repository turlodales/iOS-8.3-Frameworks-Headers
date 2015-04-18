//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OITSUFlushableObject.h>

@class NSMutableDictionary, NSString;

@interface OITSUCache : OITSUFlushableObject
{
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)p_addEntriesFromDictionary:(id)arg1;
- (id)p_objectForKey:(id)arg1;
- (BOOL)hasFlushableContent;
- (void)unload;
- (id)initWithName:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)description;
- (void)removeAllObjects;
- (id)init;
- (unsigned int)count;
- (void)dealloc;

@end

