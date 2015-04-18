//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject
{
    NSString *_badgeValue;
    NSString *_identifier;
    BOOL _transient;
    SUScriptViewController *_viewController;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) BOOL transient;
- (id)initWithNativeSection:(id)arg1;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(retain) NSString *badgeValue;
@property(readonly) SUScriptViewController *viewController;
@property(readonly) NSString *identifier;
- (void)dealloc;

@end

