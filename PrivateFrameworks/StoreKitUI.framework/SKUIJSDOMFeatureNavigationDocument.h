//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IKAppNavigationController.h"
#import "SKUIDOMFeature.h"

@class IKAppContext, IKJSNavigationDocument, NSMutableArray, NSString, SKUINavigationDocumentController;

@interface SKUIJSDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, SKUIDOMFeature>
{
    IKJSNavigationDocument *_jsNavigationDocument;
    SKUINavigationDocumentController *_navigationDocumentController;
    NSMutableArray *_stackItems;
    IKAppContext *_appContext;
    NSString *_featureName;
}

+ (id)possibleFeatureNames;
@property(readonly, retain, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (id)featureJSObject;
- (id)initWithFeatureName:(id)arg1;
@property(retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // @synthesize navigationDocumentController=_navigationDocumentController;
- (void)removeDocument:(id)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (id)documents;
- (void).cxx_destruct;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

