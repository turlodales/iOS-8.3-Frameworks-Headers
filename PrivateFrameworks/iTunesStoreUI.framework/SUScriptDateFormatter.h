//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject
{
    NSDateFormatter *_dateFormatter;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) unsigned int dateFormatterShortStyle;
@property(readonly) unsigned int dateFormatterNoStyle;
@property(readonly) unsigned int dateFormatterMediumStyle;
@property(readonly) unsigned int dateFormatterLongStyle;
@property(readonly) unsigned int dateFormatterFullStyle;
@property(copy) NSString *localeIdentifier;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(copy) NSString *dateFormat;
- (double)dateFromString:(id)arg1;
@property unsigned int timeStyle;
@property unsigned int dateStyle;
- (id)stringFromDate:(id)arg1;
- (id)init;
- (void)dealloc;

@end
