//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate>
{
    NSString *_initialURLString;
    BOOL _flushCache;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
    CDUnknownBlockType _handler;
}

+ (id)protocolVersion;
+ (Class)responseClass;
- (id)bodyDictionary;
@property(readonly) NSURLRequest *urlRequest;
- (id)initWithURLString:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL flushCache; // @synthesize flushCache=_flushCache;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)urlCredential;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (id)urlString;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

