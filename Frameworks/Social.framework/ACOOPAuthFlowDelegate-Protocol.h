//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSMutableURLRequest, NSString, NSURL, NSURLRequest, UIWebView;

@protocol ACOOPAuthFlowDelegate
- (NSMutableURLRequest *)requestForAuthURL:(NSURL *)arg1;
- (NSURL *)authURLForUsername:(NSString *)arg1;
- (void)setAuthFlowCompletion:(void (^)(BOOL, NSDictionary *, NSError *))arg1;

@optional
- (BOOL)shouldHideWebView:(UIWebView *)arg1 forLoadWithRequest:(NSURLRequest *)arg2;
@end

