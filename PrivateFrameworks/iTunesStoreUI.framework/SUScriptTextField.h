//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import "SUScriptNavigationItem.h"

@class NSNumber, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem>
{
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) WebScriptObject *shouldFocusFunction;
- (void)setNativeObjectWithTextField:(id)arg1;
- (void)setNativeObjectWithSearchBar:(id)arg1;
- (void)setNativeObjectWithBarButtonItem:(id)arg1;
- (float)_defaultWidth;
- (id)_newTextField;
- (id)_copyValue;
- (id)_copyPlaceholder;
- (id)_keyboardType;
- (id)_autocorrectionType;
- (id)_autocapitalizationType;
- (id)_boxedNativeTextField;
- (BOOL)_styleIsValid:(id)arg1;
- (id)initWithTextFieldStyle:(id)arg1;
- (id)buttonItem;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (BOOL)focus;
- (BOOL)blur;
@property(retain) NSNumber *width;
@property(retain) NSString *placeholder;
@property(retain) NSString *keyboardType;
@property(retain) NSString *autocorrectionType;
@property(retain) NSString *autocapitalizationType;
@property(readonly, nonatomic) BOOL canBecomeFirstResponder;
@property(readonly) NSString *style;
@property(retain) NSString *value;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

