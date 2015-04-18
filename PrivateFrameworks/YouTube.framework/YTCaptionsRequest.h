//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, YTVideo;

@interface YTCaptionsRequest : YTXMLHTTPRequest
{
    id <YTCaptionsRequestDelegate> _delegate;
    NSMutableArray *_captions;
    YTVideo *_video;
}

- (id)initRequestingCaptionsForVideo:(id)arg1 withDelegate:(id)arg2;
- (void)_requestCaptionsFromURL:(id)arg1;
- (void)didAuthenticate:(id)arg1;
- (void)didParseData;
- (int)parseData:(id)arg1;
- (id)video;
- (void)dealloc;
- (void)failWithError:(id)arg1;

@end

