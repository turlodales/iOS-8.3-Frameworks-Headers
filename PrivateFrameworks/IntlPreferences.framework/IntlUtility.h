//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

@interface IntlUtility : NSObject
{
    NSDictionary *mLanguageList;
    NSDictionary *mLocalizedLanguageList;
    void *mDisplayLanguageCachePtr;
    int mDisplayLanguageCacheUsed;
    NSMutableArray *mBidiLanguagesArray;
    NSMutableArray *mBidiTestedLanguagesArray;
}

+ (BOOL)performMigration;
+ (id)supportedCalendars;
+ (id)preferredLanguagesForRegion:(id)arg1;
+ (id)defaultCalendarForLocaleID:(id)arg1;
+ (id)restrictedCountryCodes;
+ (id)filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (id)preferredLanguagesForRegionWithoutFiltering:(id)arg1;
+ (id)alternateContinentOfRegion:(id)arg1;
+ (BOOL)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2;
+ (id)importAppleLanguages;
+ (id)importAppleLanguagesLegacy;
+ (id)importUsedLanguages;
+ (id)languageCharSetList;
+ (id)parentLocaleIdentifierForIdentifier:(id)arg1;
+ (int)UDisplayContextForIUDisplayNameContext:(unsigned int)arg1;
+ (id)nativeNameForLanguage:(id)arg1 context:(unsigned int)arg2;
+ (int)yearlessYearForMonth:(int)arg1 withCalendar:(id)arg2;
+ (BOOL)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2;
+ (id)localeForCalendarID:(id)arg1 andLocale:(id)arg2;
+ (void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2;
+ (id)normalizedLanguageIDFromString:(id)arg1;
+ (id)stdLanguageIDs;
+ (id)stdLanguageIDsAndNativeNames;
+ (id)preferredLunarCalendarForLocaleID:(id)arg1;
+ (BOOL)isLunarCalendarDefaultOn;
+ (id)lunarCalendarsForLocaleID:(id)arg1;
+ (void)setYearlessYear:(id)arg1 forCalendar:(id)arg2;
+ (id)localeForCalendarID:(id)arg1;
+ (BOOL)isYearlessDate:(id)arg1 forCalendar:(id)arg2;
+ (id)sharedIntlUtility;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned int)arg3;
- (BOOL)canRenderLanguage:(id)arg1;
- (id)languageList;
- (id)displayNameForLanguage:(id)arg1 context:(unsigned int)arg2 displayLanguage:(id)arg3;
- (id)localizedNameForScript:(short)arg1;
- (id)localizedLanguageList;
- (id)localizedLanguageForLanguage:(id)arg1;
- (id)nativeLanguageForLanguage:(id)arg1;
- (id)displayNameForNormalizedLanguage:(id)arg1 context:(unsigned int)arg2 displayLanguage:(id)arg3;
- (void)dealloc;
- (id)displayNameForLabelForLunarCalendarID:(id)arg1 displayLanguage:(id)arg2;

@end

