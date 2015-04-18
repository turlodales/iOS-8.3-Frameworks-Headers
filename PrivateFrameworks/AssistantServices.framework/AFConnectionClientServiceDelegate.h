//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFClientServiceDelegate.h"

@class AFConnection, NSString;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate>
{
    AFConnection *_connection;
}

- (id)initWithConnection:(id)arg1;
- (oneway void)aceConnectionWillRetryOnError:(id)arg1;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingWillBeginWithLevelsSharedMem:(id)arg1;
- (oneway void)getBulletinContext:(CDUnknownBlockType)arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)requestDidFailWithError:(id)arg1 requestClass:(id)arg2;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestDidFinish;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (id)_connectionDelegate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

