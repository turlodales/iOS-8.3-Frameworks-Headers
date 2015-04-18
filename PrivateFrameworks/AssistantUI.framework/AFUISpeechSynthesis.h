//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFUIQueueDelegate.h"
#import "AFUISpeechSynthesis.h"
#import "AFUISpeechSynthesisElementDelegate.h"
#import "VSSpeechSynthesizerDelegate.h"

@class AFUIQueue, AFVoiceInfo, NSMutableArray, NSString, VSSpeechSynthesizer;

@interface AFUISpeechSynthesis : NSObject <AFUIQueueDelegate, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate, AFUISpeechSynthesis>
{
    VSSpeechSynthesizer *_synthesizer;
    BOOL _sessionIDIsValid;
    unsigned int _sessionID;
    AFVoiceInfo *_outputVoice;
    id <AFUISpeechSynthesisDelegate> _delegate;
    id <AFUISpeechSynthesisLocalDelegate> _localDelegate;
    AFUIQueue *_elementQueue;
    NSMutableArray *_activeElements;
}

- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (id)_synthesizer;
- (void)_processProvisionalElements;
- (BOOL)isSynthesisQueueEmpty;
- (void)_processElementQueue;
- (void)_cancelByCancellingActiveElementsOnly:(BOOL)arg1;
@property(readonly, nonatomic, getter=_elementQueue) AFUIQueue *elementQueue; // @synthesize elementQueue=_elementQueue;
@property(readonly, nonatomic, getter=_activeElements) NSMutableArray *activeElements; // @synthesize activeElements=_activeElements;
- (void)_updateSynthesizerWithSessionID:(unsigned int)arg1;
- (void)_updateSynthesizerWithVoice:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
@property(nonatomic) __weak id <AFUISpeechSynthesisLocalDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
- (void)skipCurrentSynthesis;
- (void)enqueueText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueText:(id)arg1 isPhonetic:(BOOL)arg2 provisionally:(BOOL)arg3 preparationIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5 animationIdentifier:(id)arg6;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (BOOL)isSpeaking;
- (void).cxx_destruct;
- (void)invalidate;
@property(retain, nonatomic) id <AFUISpeechSynthesisDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

