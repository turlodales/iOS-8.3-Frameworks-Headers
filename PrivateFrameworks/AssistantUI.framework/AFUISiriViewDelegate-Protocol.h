//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUIRequestTrigger, AFUISiriView, NSString;

@protocol AFUISiriViewDelegate <NSObject>
- (void)siriView:(AFUISiriView *)arg1 didReceiveSiriActivationMessageWithSource:(int)arg2;
- (BOOL)siriView:(AFUISiriView *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveHelpAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveReportBugAction:(AFUISiriView *)arg1;
- (void)siriView:(AFUISiriView *)arg1 didReceiveStartSpeechRequestWithTrigger:(AFUIRequestTrigger *)arg2;
- (void)siriViewDidReceiveCancelSpeechRequestAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveStopRecordingSpeechAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveStartSpeechRequestAction:(AFUISiriView *)arg1;
- (float)audioRecordingPowerLevelForSiriView:(AFUISiriView *)arg1;
@end

