//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUScriptInterfaceDelegate.h"
#import "UIWebViewDelegate.h"

@class ISURLRequestPerformance, NSLock, NSMapTable, NSSet, NSString, SSAuthenticationContext, SUClientInterface, SUScriptWindowContext, UIWebView;

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, UIWebViewDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    id <SUWebViewManagerDelegate> _delegate;
    ISURLRequestPerformance *_initialRequestPerformance;
    NSLock *_lock;
    int _modalAlertClickedIndex;
    id _originalFrameLoadDelegate;
    id _originalPolicyDelegate;
    id _originalResourceLoadDelegate;
    id _originalUIDelegate;
    NSMapTable *_scriptInterfaces;
    SUScriptWindowContext *_scriptWindowContext;
    NSSet *_suppressCookiesHosts;
    int _usingNetworkCount;
    struct __CFSet *_webFramesPendingInitialRequest;
    UIWebView *_webView;
}

+ (id)defaultLocalStoragePath;
@property(retain, nonatomic) id originalUIDelegate; // @synthesize originalUIDelegate=_originalUIDelegate;
@property(retain, nonatomic) id originalResourceLoadDelegate; // @synthesize originalResourceLoadDelegate=_originalResourceLoadDelegate;
@property(retain, nonatomic) id originalPolicyDelegate; // @synthesize originalPolicyDelegate=_originalPolicyDelegate;
@property(retain, nonatomic) id originalFrameLoadDelegate; // @synthesize originalFrameLoadDelegate=_originalFrameLoadDelegate;
@property(retain, nonatomic) ISURLRequestPerformance *initialRequestPerformance; // @synthesize initialRequestPerformance=_initialRequestPerformance;
- (void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long)arg3 line:(int)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(unsigned int)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6;
- (void)webView:(id)arg1 didParseSource:(id)arg2 fromURL:(id)arg3 sourceId:(long)arg4 forWebFrame:(id)arg5;
- (id)_newAlertWithMessage:(id)arg1;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (id)_userIdentifier;
- (void)_beginUsingNetwork;
- (void)_endUsingNetwork;
- (void)_enumerateScriptInterfacesWithBlock:(CDUnknownBlockType)arg1;
- (void)_cancelUsingNetwork;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3;
- (void)connectToWebView:(id)arg1;
- (void)disconnectFromWebView;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect)arg2;
@property(retain, nonatomic) SUScriptWindowContext *scriptWindowContext; // @synthesize scriptWindowContext=_scriptWindowContext;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (id)performanceMetricsForScriptInterface:(id)arg1;
- (id)parentViewControllerForScriptInterface:(id)arg1;
- (id)DOMElementForScriptInterface:(id)arg1 element:(id)arg2;
- (id)initWithClientInterface:(id)arg1;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)forwardInvocation:(id)arg1;
@property(readonly, nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_delegate;
@property(nonatomic) id <SUWebViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

