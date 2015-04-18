//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iAdDeveloper/HTSHTTPMessage.h>

@class HTSHTTPMessageRequest, NSMutableData, NSString;

@interface HTSHTTPMessageResponse : HTSHTTPMessage
{
    int _statusCode;
    NSString *_statusDescription;
    NSString *_trackingDescription;
    HTSHTTPMessageRequest *_request;
    NSMutableData *_serializedData;
    double _sendTime;
    unsigned long long _written;
}

@property(nonatomic) unsigned long long written; // @synthesize written=_written;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSMutableData *serializedData; // @synthesize serializedData=_serializedData;
@property(copy, nonatomic) NSString *trackingDescription; // @synthesize trackingDescription=_trackingDescription;
- (struct __CFHTTPMessage *)copyMessage;
@property(retain, nonatomic) HTSHTTPMessageRequest *request; // @synthesize request=_request;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
- (void)dealloc;

@end

