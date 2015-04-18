//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCache, NSMutableSet, NSString;

@interface SGPatterns : NSObject
{
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (void)pauseCacheEvictionTemporarily;
+ (void)clearAllRegexCaches;
+ (void)useAllLanguagesAtOnce:(BOOL)arg1;
+ (void)forceLanguageTo:(id)arg1;
+ (void)_reinstateDeath;
+ (id)fallbackLanguageCodeForCountryCode:(id)arg1;
+ (id)countryCodeFromLanguageCode:(id)arg1;
+ (id)languagePartOfLanguageCode:(id)arg1;
+ (void)changeLanguageOrPatternData;
+ (id)patternsForClass:(Class)arg1;
+ (void)initialize;
- (void)_becomeImmuneToDeath;
- (void)_clearRegexCache;
- (id)rawValuesForKey:(id)arg1;
- (id)_calculateLangResolutionOrder;
- (id)rawValueForKey:(id)arg1;
- (id)regex2ForKey:(id)arg1;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

