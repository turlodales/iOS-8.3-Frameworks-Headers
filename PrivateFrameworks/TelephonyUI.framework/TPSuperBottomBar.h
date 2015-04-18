//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TPSlidingButtonDelegateProtocol.h"

@class NSArray, NSMutableArray, NSString, TPSlidingButton, UIButton;

@interface TPSuperBottomBar : UIView <TPSlidingButtonDelegateProtocol>
{
    BOOL _declineAndRemindIsAvailable;
    BOOL _declineAndMessageIsAvailable;
    BOOL _enabled;
    BOOL _blursBackground;
    BOOL _usesLowerButtons;
    id <TPSuperBottomBarDelegateProtocol> _delegate;
    int _currentState;
    int _orientation;
    float _bottomMargin;
    float _yOffsetForLoweredButtons;
    UIView *_topLayoutGuide;
    NSArray *_buttonLayoutConstraints;
    NSArray *_horizontalConstraintsForSupplementalButtons;
    UIButton *_supplementalTopLeftButton;
    UIButton *_supplementalTopRightButton;
    UIButton *_mainLeftButton;
    UIButton *_mainRightButton;
    UIButton *_sideButtonLeft;
    UIButton *_sideButtonRight;
    UIButton *_supplementalBottomRightButton;
    UIButton *_supplementalBottomLeftButton;
    TPSlidingButton *_slidingButton;
    NSMutableArray *_hijackedGestureRecognizers;
    NSMutableArray *_stateStack;
}

+ (float)defaultInterButtonSpacing;
+ (float)defaultSideMarginForDoubleButton;
+ (float)defaultSideMarginForSingleButton;
+ (float)defaultBottomSupplementalButtonSpacing;
+ (float)defaultYOffsetForBottomButtons;
+ (float)defaultBottomMargin;
+ (float)defaultWidth;
@property(retain, nonatomic) NSMutableArray *hijackedGestureRecognizers; // @synthesize hijackedGestureRecognizers=_hijackedGestureRecognizers;
@property(retain, nonatomic) UIView *topLayoutGuide; // @synthesize topLayoutGuide=_topLayoutGuide;
- (id)nameForActionType:(int)arg1;
- (void)refreshCustomizedActionTypeTitles;
- (struct CGRect)frameForControlWithActionType:(int)arg1;
- (void)setAction:(int)arg1 enabled:(BOOL)arg2;
- (void)setAction:(int)arg1 selected:(BOOL)arg2;
- (void)resetPoppedStates;
- (BOOL)popStateAnimated:(BOOL)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (void)pushState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct CGSize effectiveSize;
- (void)slidingButton:(id)arg1 didSlideToProportion:(float)arg2;
- (void)slidingButtonDidFinishSlide;
- (void)slidingButtonWillFinishSlide;
- (void)_startShopDemoMode;
@property(nonatomic) BOOL usesLowerButtons; // @synthesize usesLowerButtons=_usesLowerButtons;
- (void)prepareButtonsForAnimationBegin;
- (void)shrinkButtonFontSizesIfNecessary;
- (void)animateFromOutgoingStateToCallbackAndMessageUIToState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateFromOutgoingStateToInCallStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateOutSupplementalBottomLeftButtonToState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateFromIncomingCallStateToFaceTimeInCallState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateOutSupplementalBottomRightButtonToState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateInSupplementalBottomRightButton:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)animateFromIncomingCallStateToInCallState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)prepareButtonsForAnimationEnd;
- (int)updatedActionTypeForActionType:(int)arg1;
- (id)updatedSelectedImageForActionType:(int)arg1 givenDefaultSelectedImage:(id)arg2;
- (id)updatedImageForActionType:(int)arg1 givenDefaultImage:(id)arg2;
- (void)refreshCustomizedActionTypeTitleForButton:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2;
@property(retain) NSArray *horizontalConstraintsForSupplementalButtons; // @synthesize horizontalConstraintsForSupplementalButtons=_horizontalConstraintsForSupplementalButtons;
- (id)_horizontalConstraintsForSupplementalButtonsUsingLabels:(id)arg1;
@property(retain) NSArray *buttonLayoutConstraints; // @synthesize buttonLayoutConstraints=_buttonLayoutConstraints;
- (id)constraintsForState:(int)arg1;
@property(nonatomic) BOOL declineAndRemindIsAvailable; // @synthesize declineAndRemindIsAvailable=_declineAndRemindIsAvailable;
@property(nonatomic) BOOL declineAndMessageIsAvailable; // @synthesize declineAndMessageIsAvailable=_declineAndMessageIsAvailable;
@property(retain, nonatomic) UIButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;
@property(retain, nonatomic) UIButton *sideButtonLeft; // @synthesize sideButtonLeft=_sideButtonLeft;
@property(retain, nonatomic) TPSlidingButton *slidingButton; // @synthesize slidingButton=_slidingButton;
@property(retain, nonatomic) UIButton *supplementalBottomRightButton; // @synthesize supplementalBottomRightButton=_supplementalBottomRightButton;
@property(retain, nonatomic) UIButton *supplementalBottomLeftButton; // @synthesize supplementalBottomLeftButton=_supplementalBottomLeftButton;
@property(retain, nonatomic) UIButton *mainLeftButton; // @synthesize mainLeftButton=_mainLeftButton;
@property(retain, nonatomic) UIButton *mainRightButton; // @synthesize mainRightButton=_mainRightButton;
- (BOOL)shouldShowActionTypeCameraFlip;
- (BOOL)shouldShowActionTypeAudioRoute;
@property(retain, nonatomic) UIButton *supplementalTopLeftButton; // @synthesize supplementalTopLeftButton=_supplementalTopLeftButton;
@property(retain, nonatomic) UIButton *supplementalTopRightButton; // @synthesize supplementalTopRightButton=_supplementalTopRightButton;
- (BOOL)shouldShowActionTypeSendToVoicemail;
- (id)makeSlidingButtonWithType:(int)arg1;
- (id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 font:(id)arg5 fontColor:(id)arg6;
- (void)removeAllButtons;
- (BOOL)animateFromState:(int)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateHorizontalConstraintsForSupplementalButtons;
- (id)viewLabels;
- (id)controlForActionType:(int)arg1;
- (void)setCurrentState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
@property(retain) NSMutableArray *stateStack; // @synthesize stateStack=_stateStack;
- (void)updateTopLayoutGuide;
@property(nonatomic) float yOffsetForLoweredButtons; // @synthesize yOffsetForLoweredButtons=_yOffsetForLoweredButtons;
- (void)_clearHijackedGestureRecognizers;
@property(nonatomic) float bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) BOOL blursBackground; // @synthesize blursBackground=_blursBackground;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
- (void)buttonPressed:(id)arg1;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (struct CGSize)intrinsicContentSize;
@property id <TPSuperBottomBarDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (id)init;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

