//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ToneKit/TKVibrationRecorderRippleView.h>

@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView
{
    BOOL _recordingModeEnabled;
    BOOL _shouldIgnoreCurrentTouch;
    BOOL _replayModeEnabled;
    id <TKVibrationRecorderTouchSurfaceDelegate> _delegate;
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper;
    TLVibrationPattern *_vibrationPatternToReplay;
    double _vibrationPatternMaximumDuration;
    double _replayModeWasEnteredStartTime;
}

@property(retain, nonatomic, setter=_setVibrationPatternToReplay:) TLVibrationPattern *_vibrationPatternToReplay; // @synthesize _vibrationPatternToReplay;
@property(nonatomic, setter=_setReplayModeWasEnteredStartTime:) double _replayModeWasEnteredStartTime; // @synthesize _replayModeWasEnteredStartTime;
- (void)_updateTouchLocationForReplayMode:(id)arg1;
@property(retain, nonatomic, setter=_setRecordedDataWrapper:) TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper; // @synthesize _recordedDataWrapper;
@property(nonatomic, getter=_isRecordingModeEnabled, setter=_setRecordingModeEnabled:) BOOL _recordingModeEnabled; // @synthesize _recordingModeEnabled;
@property(nonatomic, setter=_setShouldIgnoreCurrentTouch:) BOOL _shouldIgnoreCurrentTouch; // @synthesize _shouldIgnoreCurrentTouch;
- (void)_recordTouchLocation:(struct CGPoint)arg1 touchPhase:(int)arg2;
- (void)currentVibrationComponentShouldEnd;
@property(nonatomic, setter=_setVibrationPatternMaximumDuration:) double _vibrationPatternMaximumDuration; // @synthesize _vibrationPatternMaximumDuration;
@property(nonatomic, getter=_isReplayModeEnabled, setter=_setReplayModeEnabled:) BOOL _replayModeEnabled; // @synthesize _replayModeEnabled;
- (void)exitRecordingMode;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2;
- (void)exitReplayMode;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) id <TKVibrationRecorderTouchSurfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end

