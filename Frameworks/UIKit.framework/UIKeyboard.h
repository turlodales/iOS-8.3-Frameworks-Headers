//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardImplGeometryDelegate.h"

@class UITextInputTraits;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate>
{
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    BOOL m_typingDisabled;
    BOOL m_minimized;
    BOOL m_respondingToImplGeometryChange;
    int m_orientation;
    int m_idiom;
    BOOL m_hasExplicitOrientation;
}

+ (BOOL)splitKeyboardEnabled;
+ (BOOL)shouldMinimizeForHardwareKeyboard;
+ (BOOL)respondsToProxGesture;
+ (BOOL)isOnScreen;
+ (struct CGRect)defaultFrameForInterfaceOrientation:(int)arg1;
+ (void)initImplementationNow;
+ (void)_clearActiveKeyboard;
+ (void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2;
+ (void)clearActiveForScreen:(id)arg1;
+ (id)activeKeyboardForScreen:(id)arg1;
+ (void)removeAllDynamicDictionaries;
+ (BOOL)isInHardwareKeyboardMode;
+ (struct CGSize)keyboardSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)defaultSizeForInterfaceOrientation:(int)arg1;
+ (struct CGSize)sizeForInterfaceOrientation:(int)arg1;
+ (id)activeKeyboard;
+ (struct CGSize)defaultSize;
- (BOOL)_isAutomaticKeyboard;
- (void)_acceptCurrentCandidate;
- (void)_setInputMode:(id)arg1;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)_touchPoint:(struct CGPoint)arg1;
- (void)_setSplit:(BOOL)arg1;
- (void)_setUndocked:(BOOL)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (id)_keyplaneForKey:(id)arg1;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedOut;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWillBeOrderedIn;
@property(nonatomic) int keyboardIdiom; // @synthesize keyboardIdiom=m_idiom;
@property(nonatomic) BOOL showsCandidatesInline;
- (void)_setPasscodeOutlineAlpha:(float)arg1;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)setShowPredictionBar:(BOOL)arg1;
- (BOOL)showPredictionBar;
- (void)displayLayer:(id)arg1;
@property(nonatomic) BOOL typingEnabled;
- (id)defaultTextInputTraits;
- (BOOL)hasAutocorrectPrompt;
- (void)setOrientation:(int)arg1;
- (id)initLazily;
- (id)initWithDefaultSize;
- (void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2;
- (struct UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)arg1;
- (void)maximize;
- (void)minimize;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (struct UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)arg1;
- (void)setDisableInteraction:(BOOL)arg1;
- (BOOL)disableInteraction;
- (void)setCursorLocation:(int)arg1;
- (BOOL)allowExternalChangeForFocusHeading:(unsigned int)arg1 cursorLocation:(int)arg2;
- (int)cursorLocation;
- (void)takeSnapshot;
- (void)clearSnapshot;
- (BOOL)isActivePerScreen;
- (void)clearActivePerScreenIfNeeded;
- (id)_initWithFrame:(struct CGRect)arg1 lazily:(BOOL)arg2;
- (void)autoAdjustOrientationForSize:(struct CGSize)arg1;
- (void)autoAdjustOrientation;
- (int)_positionInCandidateList:(id)arg1;
- (BOOL)_hasCandidates;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(BOOL)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
@property(nonatomic) BOOL caretVisible;
- (BOOL)returnKeyEnabled;
- (void)responseContextDidChange;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
@property(nonatomic) BOOL caretBlinks;
- (BOOL)canDismiss;
@property(nonatomic, getter=isMinimized) BOOL minimized;
- (void)_resizeForKeyplaneSize:(struct CGSize)arg1 splitWidthsChanged:(BOOL)arg2;
- (void)removeAutocorrectPrompt;
- (BOOL)canHandleEvent:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)geometryChangeDone:(BOOL)arg1;
- (void)prepareForGeometryChange;
- (BOOL)shouldSaveMinimizationState;
- (void)acceptAutocorrection;
- (int)textEffectsVisibilityLevel;
- (void)_setRenderConfig:(id)arg1;
- (void)activate;
- (void)updateLayout;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)deactivate;
- (struct CGSize)intrinsicContentSize;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)canBecomeFocused;
- (BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned int)arg2;
- (id)targetWindow;
- (BOOL)_mayRemainFocused;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_deactivateForBackgrounding;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (int)interfaceOrientation;
- (BOOL)isActive;
- (id)delegate;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

