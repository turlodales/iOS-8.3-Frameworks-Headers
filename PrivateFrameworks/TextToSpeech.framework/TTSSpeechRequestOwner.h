//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTSSpeechRequestDelegate.h"

@class NSString, TTSSpeechRequest;

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate>
{
    id <TTSSpeechConnectionDelegate> _delegate;
    TTSSpeechRequest *_request;
    id <TTSSpeechService> _speechService;
}

- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)continueCurrentSpeechRequest;
- (void)startSpeechRequest:(id)arg1;
- (BOOL)isSystemSpeaking;
- (id)availableVoicesForLanguageCode:(id)arg1;
@property(nonatomic) __weak id <TTSSpeechService> speechService; // @synthesize speechService=_speechService;
- (void)pauseCurrentSpeechRequestAtMark:(int)arg1 waitUntilPaused:(BOOL)arg2;
- (void)stopCurrentSpeechRequestAtMark:(int)arg1 waitUntilStopped:(BOOL)arg2;
- (id)initWithSpeechService:(id)arg1;
- (oneway void)speechRequest:(id)arg1 didStopWithSuccess:(BOOL)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5;
- (oneway void)speechRequest:(id)arg1 withMark:(int)arg2 didStartForRange:(struct _NSRange)arg3 forService:(id)arg4;
- (oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TTSSpeechRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <TTSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)_setRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
