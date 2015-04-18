//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SYDJournal : NSObject
{
    NSMutableDictionary *store;
    NSMutableDictionary *journal;
    BOOL readonly;
}

- (BOOL)removeChangesUntilChangeCount:(long long)arg1;
- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;
- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;
- (id)initWithMutableStore:(id)arg1;
- (long long)maximumChangeCount;
- (id)changesSinceChangeCount:(long long)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end

