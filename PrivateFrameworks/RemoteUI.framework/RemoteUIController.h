//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RUILoaderDelegate.h"
#import "RUIObjectModelDelegate.h"
#import "RUIParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, RUILoader, RUIPage, UINavigationController;

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate>
{
    UINavigationController *_modalNavigationController;
    NSMutableArray *_objectModels;
    NSMutableArray *_modalObjectModels;
    NSMutableDictionary *_elementChangeHandlers;
    RUIPage *_pageOriginatingLoad;
    UINavigationController *_navigationController;
    RUILoader *_loader;
    NSString *_userAgentString;
    id <RemoteUIControllerDelegate> _delegate;
    CDUnknownBlockType _loadCompletion;
}

@property(retain, nonatomic) RUILoader *loader; // @synthesize loader=_loader;
- (void)setHandlerForButtonName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setHandlerForButtonsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dismissObjectModelsAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadData:(id)arg1 baseURL:(id)arg2;
- (id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
- (id)setHandlerForElementsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setHandlerWithKey:(id)arg1 forElementsMatching:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_didRemoveObjectModel:(id)arg1;
- (void)_willPresentObjectModel:(id)arg1 modally:(BOOL)arg2;
@property(copy, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(BOOL)arg3;
- (id)viewControllerForAlertPresentation;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (id)popObjectModelAnimated:(BOOL)arg1;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)pushObjectModel:(id)arg1 animated:(BOOL)arg2;
- (void)loadRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandlerForKey:(id)arg1;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)loadRequest:(id)arg1;
@property(nonatomic) __weak id <RemoteUIControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)loadURL:(id)arg1 postBody:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHandlerForElementName:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

