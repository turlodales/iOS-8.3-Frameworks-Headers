//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogCore/PLEntry.h>

@class NSMutableDictionary;

@interface PLMultiKeyEntry : PLEntry
{
    NSMutableDictionary *_multiKeys;
}

+ (void)load;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)serializedForJSON;
@property(retain) NSMutableDictionary *multiKeys; // @synthesize multiKeys=_multiKeys;
- (id)objectsForSubKey:(id)arg1 ofSubKeyType:(id)arg2;
- (id)keysForSubKey:(id)arg1 ofSubKeyType:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end

