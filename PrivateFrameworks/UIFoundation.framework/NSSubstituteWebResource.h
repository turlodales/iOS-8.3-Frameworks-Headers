//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURL;

@interface NSSubstituteWebResource : NSObject
{
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)webResource;
- (id)frameName;
- (Class)_webResourceClass;
- (id)MIMEType;
- (id)URL;
- (id)data;
- (void)dealloc;
- (id)textEncodingName;

@end

