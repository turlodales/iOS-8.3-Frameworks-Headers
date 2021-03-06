//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWebDocumentView.h>

#import "UIWebFormAccessoryDelegate.h"
#import "UIWebTouchEventsGestureRecognizerDelegate.h"
#import "_UIWebRotationDelegate.h"

@class DOMNode, NSHashTable, NSLock, NSMutableArray, NSMutableSet, NSObject<UIFormPeripheral>, NSString, UIResponder, UIWebFormAccessory, UIWebFormDelegate, UIWebTouchEventsGestureRecognizer;

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate>
{
    UIWebFormAccessory *_accessory;
    NSObject<UIFormPeripheral> *_input;
    DOMNode *_currentAssistedNode;
    DOMNode *_assistedNodeStartingFocusRedirects;
    struct CGRect _inputViewBounds;
    struct CGRect _addressViewBounds;
    float _lastAdjustmentForScroller;
    unsigned int _audioSessionCategoryOverride;
    unsigned int _accessoryEnabled:1;
    unsigned int _forceInputView:1;
    unsigned int _formIsAutoFilling:1;
    unsigned int _inputViewObeysDOMFocus:1;
    unsigned int _allowDOMFocusRedirects:1;
    unsigned int _hasEditedTextField:1;
    unsigned int _alwaysDispatchesScrollEvents:1;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    UIResponder *_editingDelegateForEverythingExceptForms;
    unsigned int _dispatchedTouchEvents;
    NSMutableArray *_deferredTouchEvents;
    NSHashTable *_activeHighlighters;
    NSMutableSet *_overflowScrollViewsPendingInsertion;
    NSMutableSet *_overflowScrollViewsPendingDeletion;
    NSMutableSet *_overflowScrollViews;
    NSLock *_pendingOverflowDataLock;
    NSMutableArray *_pendingOverflowScrolls;
    BOOL _pendingGeometryChangeAfterOverflowScroll;
    struct {
        NSMutableArray *all;
        NSMutableArray *html;
        NSMutableArray *javascript;
        NSMutableArray *css;
        NSMutableArray *error;
        NSMutableArray *warning;
        NSMutableArray *tip;
        NSMutableArray *log;
    } _messages;
    CDStruct_d58a15aa _pdf;
    id <UIWebAutoFillDelegate> _autoFillDelegate;
}

+ (float)preferredScrollDecelerationFactor;
+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;
+ (void)initialize;
@property(nonatomic) id <UIWebAutoFillDelegate> autoFillDelegate; // @synthesize autoFillDelegate=_autoFillDelegate;
@property(readonly, nonatomic) BOOL hasEditedTextField; // @synthesize hasEditedTextField=_hasEditedTextField;
@property(nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled; // @synthesize accessoryEnabled=_accessoryEnabled;
@property(retain, nonatomic) UIWebFormAccessory *_accessory; // @synthesize _accessory;
- (void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2;
- (void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(BOOL)arg3;
- (void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7;
- (void)_removeFindOnPageHighlighter:(id)arg1;
- (id)addFindOnPageHighlighter;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_clearSelectionAndUI;
- (BOOL)_dumpWebArchiveAtPath:(id)arg1;
- (id)messagesMatchingMask:(int)arg1;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)_zoomToRect:(struct CGRect)arg1 withScale:(float)arg2;
- (void)_centerRect:(struct CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(unsigned int)arg4;
- (struct CGPoint)_convertWindowPointToViewport:(struct CGPoint)arg1;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)_assistFormNode:(id)arg1;
- (void)simulateDidScroll;
- (struct CGSize)contentSizeForScrollView:(id)arg1;
- (float)scaleForProposedNewScale:(float)arg1 andOldScale:(float)arg2;
- (BOOL)considerHeightOfRectOfInterestForRotation;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (float)heightToKeepVisible;
- (float)minimumVerticalContentOffset;
- (struct CGRect)rectOfInterestForRotation;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(CDStruct_869f9c67)arg2;
- (CDStruct_869f9c67)scalesForContainerSize:(struct CGSize)arg1;
- (void)_addAdditionalSubview:(id)arg1;
- (void)_webThreadOverflowScrollOffsetChanged;
- (BOOL)appendOverflowScrollForNode:(id)arg1 offset:(struct CGPoint)arg2 whileScrolling:(BOOL)arg3;
- (void)_removeAdditionalSubview:(id)arg1;
- (void)_noteOverflowScrollViewPendingDeletion:(id)arg1;
- (void)_noteOverflowScrollViewPendingInsertion:(id)arg1;
- (struct CGSize)_defaultScrollViewContentSize;
- (void)clearMessagesMatchingMask:(int)arg1;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4 formAssistantFrame:(struct CGRect)arg5 animationDuration:(double)arg6;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4;
- (void)_centerRect:(struct CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(unsigned int)arg4 toValue:(float)arg5;
- (struct CGRect)_activeRectForRectToCenter:(struct CGRect)arg1;
- (void)_handleDeferredEvents;
- (void)_deferWebEvent:(id)arg1;
- (BOOL)_shouldDeferEvents;
- (void)_endDeferringEvents;
- (void)_dispatchWebEvent:(id)arg1;
- (void)_startDeferringEvents;
- (void)_autoFillFrame:(id)arg1;
- (void)_scrollCaretToVisible:(id)arg1;
@property(nonatomic) BOOL allowDOMFocusRedirects; // @synthesize allowDOMFocusRedirects=_allowDOMFocusRedirects;
- (void)_updateAutoFillButton;
- (void)_updateAccessory;
- (void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2;
- (void)_updateFixedPositioningObjectsLayoutSoon;
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(BOOL)arg2;
@property(nonatomic) UIResponder *_editingDelegateForEverythingExceptForms; // @synthesize _editingDelegateForEverythingExceptForms;
- (void)_displayFormNodeInputView;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_stopAssistingFormNode;
- (BOOL)_keepKeyboardVisibleDuringFocusRedirects;
- (void)_webTouchEventsRecognized:(id)arg1;
@property(retain, nonatomic) DOMNode *_currentAssistedNode; // @synthesize _currentAssistedNode;
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input; // @synthesize _input;
- (void)_clearFormAutoFillStateForFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_stopAssistingNode:(id)arg1;
- (void)_startAssistingNode:(id)arg1;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)accessoryTab:(BOOL)arg1;
- (BOOL)_hasSubviewContainingWebContent:(id)arg1;
- (BOOL)_isAutoFilling;
- (void)_webViewFormEditedStatusHasChanged:(id)arg1;
- (void)formDelegateTextDidChange;
- (void)accessoryDone;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
@property(nonatomic) NSString *networkInterfaceName;
@property(nonatomic) unsigned int audioSessionCategoryOverride;
@property(nonatomic) BOOL alwaysDispatchesScrollEvents;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property(nonatomic) BOOL allowsInlineMediaPlayback;
- (void)_startURLificationIfNeededCoalesce:(BOOL)arg1;
@property(nonatomic) BOOL inputViewObeysDOMFocus; // @synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus;
@property(readonly, nonatomic) BOOL isDispatchingTouchEvents;
- (BOOL)isAnyTouchOverActiveArea:(id)arg1;
- (BOOL)shouldIgnoreWebTouch;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)_endAllowingFocusRedirects;
- (void)_beginAllowingFocusRedirects;
- (id)textDocument;
- (BOOL)playsNicelyWithGestures;
- (id)textFormElement;
- (void)assistFormNode:(id)arg1;
- (void)redrawScaledDocument;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)_collectAdditionalSubviews;
- (id)formElement;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_clearAllConsoleMessages;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)_updateFixedPositioningObjectsLayoutDuringScroll;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)installGestureRecognizers;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;
- (BOOL)isAutoFillMode;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)_requiresKeyboardResetOnReload;
- (id)_keyboardResponder;
- (id)inputAccessoryView;
- (id)inputView;
- (id)_editingDelegate;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_didScroll;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)isEditable;
- (id)keyCommands;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

