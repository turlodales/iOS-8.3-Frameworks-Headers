//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFUISiriSessionDelegate.h"
#import "AFUISpeechSynthesisDelegate.h"
#import "NSObject.h"

@class AFUIRequestOptions, NSDictionary, NSString, NSValue;

@protocol SVSSiriViewControllerServing <NSObject, AFUISiriSessionDelegate, AFUISpeechSynthesisDelegate>
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)setSpeechSynthesis:(id <AFUISpeechSynthesis>)arg1;
- (void)setSession:(id <AFUISiriSession>)arg1;
- (void)userInteractionDidOccur;
- (void)siriDidHidePasscodeUnlock;
- (void)siriWillHidePasscodeUnlockForResult:(int)arg1;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriDidDeactivate;
- (void)showPresentationWithIdentifier:(NSString *)arg1 properties:(NSDictionary *)arg2;
- (void)setRequestOptions:(AFUIRequestOptions *)arg1;
- (void)siriDidActivateFromSource:(int)arg1;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)setStatusBarFrameValue:(NSValue *)arg1;
- (void)setHostFrontMostAppOrientation:(int)arg1;
@end

