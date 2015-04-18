//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLRequest, NSURLResponse, WKFrameInfo;

@interface WKNavigationResponse : NSObject
{
    struct RetainPtr<WKFrameInfo> _frame;
    struct RetainPtr<NSURLRequest> _request;
    struct RetainPtr<NSURLResponse> _response;
    BOOL _canShowMIMEType;
}

@property(copy, nonatomic) NSURLResponse *response;
@property(nonatomic) BOOL canShowMIMEType; // @synthesize canShowMIMEType=_canShowMIMEType;
@property(readonly, nonatomic, getter=isForMainFrame) BOOL forMainFrame;
- (void).cxx_destruct;
- (id).cxx_construct;
@property(readonly, nonatomic) WKFrameInfo *_frame;
- (id)description;
@property(readonly, nonatomic) NSURLRequest *_request;

@end

