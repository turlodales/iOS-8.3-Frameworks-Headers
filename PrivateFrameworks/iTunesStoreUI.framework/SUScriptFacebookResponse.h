//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject
{
    NSString *_bodyData;
    SUScriptError *_error;
    int _statusCode;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
@property(readonly) int HTTPStatusCode;
- (id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(readonly) SUScriptError *error;
- (void)dealloc;
@property(readonly) NSString *bodyData;

@end

