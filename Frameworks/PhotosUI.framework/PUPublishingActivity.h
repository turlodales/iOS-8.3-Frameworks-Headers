//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUActivity.h>

@class PLPublishingAgent, UIViewController;

@interface PUPublishingActivity : PUActivity
{
    UIViewController *_referenceViewController;
    PLPublishingAgent *_currentAgent;
    double _startTime;
    double _endTime;
}

+ (int)activityCategory;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void).cxx_destruct;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;
- (void)_cleanup;
- (id)init;
- (void)dealloc;
- (id)currentPublishingAgent;
- (void)_publishOverReferenceViewController;
- (id)publishingBundle;
- (void)_showTrimViewController;
- (void)_showPublishingSheetInViewController:(id)arg1 remakeAfterPublish:(BOOL)arg2;
- (void)_showVideoTooLongAlert;
- (void)_publishingAgentDidCancel:(id)arg1;
- (void)_publishingAgentDidStartPublishing:(id)arg1;

@end

