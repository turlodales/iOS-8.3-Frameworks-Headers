//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKAppDocument, IKJSNavigationDocument, JSContext, NSArray, NSDictionary;

@protocol IKAppNavigationController <NSObject>
- (NSArray *)documents;
- (void)removeDocument:(IKAppDocument *)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(IKAppDocument *)arg1;
- (void)popDocument;
- (void)replaceDocument:(IKAppDocument *)arg1 withDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)insertDocument:(IKAppDocument *)arg1 beforeDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)pushDocument:(IKAppDocument *)arg1 options:(NSDictionary *)arg2;

@optional
- (IKJSNavigationDocument *)navigationDocumentForDocument:(IKAppDocument *)arg1 inContext:(JSContext *)arg2;
- (void)clear;
@end

