//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccount, ACAccountStore, NSString, SUScriptAppleAccountCredential, SUScriptAppleAccountType;

@interface SUScriptAppleAccount : SUScriptObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) ACAccountStore *nativeAccountStore;
- (id)initWithACAccount:(id)arg1 accountStore:(id)arg2;
@property(readonly) ACAccount *nativeAccount;
@property(readonly) NSString *dsID;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(readonly) NSString *username;
@property(readonly) NSString *accountDescription;
@property(readonly) SUScriptAppleAccountCredential *credential;
@property(readonly) SUScriptAppleAccountType *accountType;
@property(readonly) NSString *identifier;
- (void)reload;
- (void)dealloc;

@end

