//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIPasscodeLockViewDelegate.h"
#import "SiriUISiriStatusViewDelegate.h"

@class NSString, SiriUIAudioRoutePickerButton, SiriUIHelpButton, UIButton, UIView<SBUIPasscodeLockView>, UIView<SiriUISiriStatusViewProtocol>, _UIBackdropView;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, SBUIPasscodeLockViewDelegate>
{
    _UIBackdropView *_backdropView;
    BOOL _backdropViewVisible;
    UIView *_dimmingView;
    UIView *_dimmingAndLockContainer;
    UIView *_statusViewContainer;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIHelpButton *_helpButton;
    UIButton *_reportBugButton;
    UIView<SBUIPasscodeLockView> *_lockView;
    unsigned int _unlockAttemptCount;
    CDUnknownBlockType _unlockCompletion;
    int _frozenBackdropSnapshotOrientation;
    CDUnknownBlockType _triggerUpdater;
    BOOL _disabled;
    BOOL _statusViewHidden;
    BOOL _carDisplaySnippetVisible;
    UIView *_foregroundView;
    UIView *_contentView;
    id <AFUISiriViewDelegate> _delegate;
    int _siriSessionState;
    int _mode;
    UIView *_frozenBackdropSnapshotView;
}

+ (void)_animateView:(id)arg1 inBounds:(struct CGRect)arg2 fromYPosition:(float)arg3 toYPostion:(float)arg4 fade:(int)arg5 completion:(CDUnknownBlockType)arg6;
@property(nonatomic) int frozenBackdropSnapshotOrientation; // @synthesize frozenBackdropSnapshotOrientation=_frozenBackdropSnapshotOrientation;
@property(retain, nonatomic) UIView *frozenBackdropSnapshotView; // @synthesize frozenBackdropSnapshotView=_frozenBackdropSnapshotView;
@property(nonatomic) int siriSessionState; // @synthesize siriSessionState=_siriSessionState;
@property(nonatomic) BOOL carDisplaySnippetVisible; // @synthesize carDisplaySnippetVisible=_carDisplaySnippetVisible;
@property(nonatomic) BOOL statusViewHidden; // @synthesize statusViewHidden=_statusViewHidden;
- (void)siriDidActivateFromSource:(int)arg1;
- (void)cancelShowingPasscodeUnlock;
- (void)showPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)pulseHelpButton;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)_preferencesDidChange:(id)arg1;
- (void)setAudioRoutePickerBluetoothOn:(BOOL)arg1;
- (void)setShowAudioRoutePicker:(BOOL)arg1;
- (void)updateForPercentageRevealed:(float)arg1;
- (void)setBackdropShouldRasterize:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)_hideLockViewWithResult:(int)arg1 hideCompletion:(CDUnknownBlockType)arg2;
- (void)_hideLockViewWithResult:(int)arg1;
- (void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_lockViewLegibilityProvider;
- (id)_lockViewBackgroundColor;
- (void)_helpButtonTapped:(id)arg1;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (BOOL)_showsReportBugButton;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)_layoutReportBugButton;
- (void)_updateControlsAppearance;
- (void)_configureReportBugButton;
- (void)_configureHelpButton;
- (id)dimBackdropSettings;
- (BOOL)_reducesMotionEffects;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
- (void)setBackdropVisible:(BOOL)arg1;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <AFUISiriViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

