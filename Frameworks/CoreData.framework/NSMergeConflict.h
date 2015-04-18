//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject
{
    id _source;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    unsigned int _newVersion;
    unsigned int _oldVersion;
}

- (id)objectForKey:(id)arg1;
@property(readonly) unsigned int newVersionNumber; // @synthesize newVersionNumber=_newVersion;
@property(readonly, retain) NSManagedObject *sourceObject; // @synthesize sourceObject=_source;
- (id)description;
- (void)dealloc;
- (id)valueForKey:(id)arg1;
@property(readonly) unsigned int oldVersionNumber; // @synthesize oldVersionNumber=_oldVersion;
@property(readonly, retain) NSDictionary *persistedSnapshot; // @synthesize persistedSnapshot=_snapshot3;
@property(readonly, retain) NSDictionary *cachedSnapshot; // @synthesize cachedSnapshot=_snapshot2;
@property(readonly, retain) NSDictionary *objectSnapshot; // @synthesize objectSnapshot=_snapshot1;
- (id)ancestorSnapshot;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;

@end

