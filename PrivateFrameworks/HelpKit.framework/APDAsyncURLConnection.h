//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnection.h"

#import "UIAlertViewDelegate.h"

@class NSMutableData, NSString, NSURLAuthenticationChallenge, NSURLResponse;

@interface APDAsyncURLConnection : NSURLConnection <UIAlertViewDelegate>
{
    NSMutableData *mData;
    CDUnknownBlockType mCompleteBlock;
    CDUnknownBlockType mErrorBlock;
    NSURLResponse *_URLResponse;
    NSURLAuthenticationChallenge *_requestChanllenge;
}

+ (id)requestURL:(id)arg1 cachePolicy:(unsigned int)arg2 completeBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
+ (id)requestURL:(id)arg1 postData:(id)arg2 cachePolicy:(unsigned int)arg3 completeBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
+ (id)requestURL:(id)arg1 postData:(id)arg2 completeBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
+ (id)requestURL:(id)arg1 completeBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)initWithRequestURL:(id)arg1 postData:(id)arg2 cachePolicy:(unsigned int)arg3 completeBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (id)initWithRequestURL:(id)arg1 postData:(id)arg2 completeBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

