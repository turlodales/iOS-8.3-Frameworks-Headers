//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SASTTemplateItem.h"

@class NSString, SAUIDecoratedText;

@interface SASTHeaderItem : AceObject <SASTTemplateItem>
{
}

+ (id)headerItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)headerItem;
- (id)encodedClassName;
@property(retain, nonatomic) SAUIDecoratedText *header;
@property(retain, nonatomic) SAUIDecoratedText *subtitle;
@property(copy, nonatomic) NSString *text;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

