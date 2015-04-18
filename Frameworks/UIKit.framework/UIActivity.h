//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtension;

@interface UIActivity : NSObject
{
    int _defaultPriority;
    CDUnknownBlockType _activityCompletionHandler;
    CDUnknownBlockType _activityCompletionWithItemsHandler;
}

+ (id)_activityGenericImage:(id)arg1;
+ (id)_activitySettingsImageForApplication:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
+ (id)_activityFunctionImage:(id)arg1;
+ (int)activityCategory;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (void)_setSubject:(id)arg1;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionWithItemsHandler:(CDUnknownBlockType)arg1;
- (void)_setActivityCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_beforeActivity;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (id)activitySettingsImage;
@property(copy, nonatomic) CDUnknownBlockType activityCompletionWithItemsHandler; // @synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler;
@property(copy, nonatomic) CDUnknownBlockType activityCompletionHandler; // @synthesize activityCompletionHandler=_activityCompletionHandler;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)_canBeExcludedByActivityViewController:(id)arg1;
- (void)_injectedJavaScriptResult:(id)arg1;
- (void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityViewController;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (void)activityDidFinish:(BOOL)arg1;
@property(readonly, nonatomic) NSExtension *applicationExtension;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;
- (struct CGSize)_thumbnailSize;
- (void)_cleanup;
- (void)dealloc;

@end

