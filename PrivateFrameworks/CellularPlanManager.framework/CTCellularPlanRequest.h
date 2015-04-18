//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSArray, NSData, NSDictionary, NSError, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, NSURLResponse;

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate>
{
    int nextConnectionTypeIndex;
    NSArray *_responseCookies;
    NSArray *_requestCookies;
    NSDictionary *_internetSettings;
    NSDictionary *_bootstrapSettings;
    NSMutableData *_receivedData;
    NSMutableURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    struct dispatch_queue_s *_queue;
    CDUnknownBlockType _completionBlock;
    NSURLConnection *_connection;
}

+ (BOOL)isRetriableErrorCode:(int)arg1;
+ (id)connectionSettingsForServiceType:(int)arg1;
+ (void)setInternetConnectionSettings:(id)arg1;
+ (void)setBootstrapConnectionSettings:(id)arg1;
+ (void)setRequestUrls:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
- (void)_callback;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(nonatomic) NSData *serializedCookies;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2;
- (id)initPostWithUrl:(id)arg1;
- (id)initGetWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (id)_connectionSettingsForNextConnectionType;
- (BOOL)_canTryAnotherConnectionType;
- (BOOL)_isRetryableError:(id)arg1;
- (id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s *)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

