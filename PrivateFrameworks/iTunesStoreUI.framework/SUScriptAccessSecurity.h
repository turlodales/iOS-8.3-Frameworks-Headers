//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SUScriptAccessSecurity : NSObject
{
}

- (BOOL)canAccessFacebookInFrame:(id)arg1 error:(id *)arg2;
- (BOOL)_url:(id)arg1 matchesExpressions:(id)arg2;
- (BOOL)_urls:(id)arg1 matchPatternStrings:(id)arg2;
- (id)_copyResourceURLsForWebFrame:(id)arg1;
- (id)_accessDictionaryForType:(id)arg1;
- (BOOL)canAccessFacebookWithURL:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;

@end

