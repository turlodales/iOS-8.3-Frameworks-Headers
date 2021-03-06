//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOrthography.h>

@interface NSSimpleOrthography : NSOrthography
{
    unsigned int _orthographyFlags;
}

+ (void)initialize;
+ (id)orthographyWithFlags:(unsigned int)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlags:(unsigned int)arg1;
- (id)allLanguages;
- (id)dominantLanguageForScript:(id)arg1;
- (id)languagesForScript:(id)arg1;
- (id)allScripts;
- (id)dominantLanguage;
- (id)languageMap;
- (id)dominantScript;
- (unsigned int)orthographyFlags;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;

@end

