//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, PKPass;

@interface SUScriptPassbookPass : SUScriptObject
{
    PKPass *_pass;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
@property(readonly) NSString *passTypeIdentifier;
- (id)attributeKeys;
- (id)initWithPass:(id)arg1;
@property(readonly) NSString *passURL;
- (id)_className;
- (id)scriptAttributeKeys;
@property(readonly) NSString *serialNumber;
- (void)dealloc;

@end

