//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import "NSCopying.h"

@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying>
{
    NSString *_actionType;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
- (id)initWithActionType:(id)arg1;
- (void)performAction;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(copy) NSString *actionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

