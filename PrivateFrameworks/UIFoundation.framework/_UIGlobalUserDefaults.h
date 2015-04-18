//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserDefaults.h"

@class NSMutableDictionary;

@interface _UIGlobalUserDefaults : NSUserDefaults
{
    id <UIFoundationGlobalUserDefaultsHelper> _userDefaultsHelper;
    NSMutableDictionary *_userDefaultsDictionary;
    unsigned int _backgroundTaskIdentifier;
}

@property(retain, nonatomic) id <UIFoundationGlobalUserDefaultsHelper> userDefaultsHelper; // @synthesize userDefaultsHelper=_userDefaultsHelper;
- (void)loadDefaultsDictionary;
- (id)_userDefaultsHelperCreateIfNeeded;
- (void)_scheduleSynchronization;
- (void)loadDefaultsDictionaryIfNeeded;
@property(retain, nonatomic) NSMutableDictionary *userDefaultsDictionary; // @synthesize userDefaultsDictionary=_userDefaultsDictionary;
- (void)_synchronizeIfNeeded;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(nonatomic) unsigned int backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
- (BOOL)synchronize;
- (void)removeObjectForKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end

