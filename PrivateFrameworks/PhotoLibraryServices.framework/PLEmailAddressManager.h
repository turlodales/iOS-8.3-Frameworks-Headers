//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface PLEmailAddressManager : NSObject
{
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    NSString *_plistPath;
}

+ (id)sharedManager;
- (id)keyForEmailAddress:(id)arg1;
- (id)emailAddressForKey:(id)arg1;
- (void)_loadDictionariesIfNeeded;
- (void)dealloc;

@end

