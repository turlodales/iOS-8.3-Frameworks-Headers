//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (AXPrivCategory)
+ (id)_accessibilityTextChecker;
- (BOOL)_accessibilityPerformEscape;
- (id)accessibilityInvalidStatus;
- (id)accessibilitySpeechHint;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetValue:(id)arg1;
- (id)accessibilityLinkedElement;
- (id)accessibilityFlowToElements;
- (BOOL)accessibilityRequired;
- (BOOL)_accessibilityScrollToVisible;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (id)accessibilityURL;
- (BOOL)accessibilityIsComboBox;
- (id)accessibilityPlaceholderValue;
- (struct _NSRange)accessibilityColumnRange;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2;
- (id)accessibilityHeaderElements;
- (id)accessibilityTitleElement;
- (float)_accessibilityMaxValue;
- (float)_accessibilityMinValue;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)_accessibilityUnregister;
- (id)accessibilityUserDefinedSize;
- (BOOL)_accessibilityShouldPerformIncrementOrDecrement;
- (void)_accessibilityPostAnnouncement:(id)arg1;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityAnnouncementComplete:(id)arg1;
- (id)_axDebugTraits;
- (id)_axSuperviews;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (BOOL)_accessibilityHandwritingActivateKeyboardDeleteKey;
- (BOOL)_accessibilityHandwritingActivateKeyboardReturnKey;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned int)arg1 withString:(id)arg2;
- (void)__accessibilityUnregister:(void *)arg1 shouldRelease:(BOOL)arg2;
- (void)_accessibilityPlayKeyboardClickSound;
- (void)_accessibilitySetIsTourGuideRunning:(BOOL)arg1;
- (BOOL)_accessibilityTextOperationAction:(id)arg1;
- (BOOL)_accessibilityPerformCustomActionWithIdentifier:(id)arg1;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (void)_accessibilitySetAllowedGeometryOverlap:(float)arg1;
- (void)setAccessibilitySize:(struct CGSize)arg1;
- (id)_accessibilityControlDescendantWithAction:(SEL)arg1;
- (id)_accessibilityControlDescendantWithTarget:(id)arg1;
- (id)_accessibilityFindSubviewDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (BOOL)_accessibilityHasDescendantOfType:(Class)arg1;
- (void)_accessibilitySetOpaqueElementScrollsContentIntoView:(BOOL)arg1;
- (void)setIsAccessibilityOpaqueElementProvider:(BOOL)arg1;
- (BOOL)_accessibilityDidSetOpaqueElementProvider;
- (void)_setAccessibilityTableCellUsesDetailTextAsValue:(BOOL)arg1;
- (BOOL)_accessibilityDidDeleteTableViewCell;
- (BOOL)_accessibilityCanDeleteTableViewCell;
- (BOOL)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;
- (BOOL)_accessibilityLoadURL:(id)arg1;
- (void)_accessibilityFindSearchResult:(BOOL)arg1 withString:(id)arg2;
- (void)_setAccessibilityUpdatesOnActivationAfterDelay:(BOOL)arg1;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)arg1;
- (void)_setAccessibilityServesAsFirstElement:(BOOL)arg1;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityOpaqueElementProvider;
- (BOOL)_accessibilityIsMathTouchExplorationView;
- (BOOL)_accessibilitySupportsMultipleCustomRotorTitles;
- (id)_accessibilityAppSwitcherApps;
- (id)_accessibilityLaunchableApps;
- (BOOL)_accessibilityAlwaysSpeakTableHeaders;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (id)_accessibilityScrollParent;
- (BOOL)_accessibilityScrollDownPage;
- (BOOL)_accessibilityScrollUpPage;
- (BOOL)_accessibilityScrollRightPage;
- (BOOL)_accessibilityScrollPreviousPage;
- (BOOL)_accessibilityScrollNextPage;
- (BOOL)_accessibilityScrollLeftPage;
- (void)_accessibilityScrollToPoint:(struct CGPoint)arg1;
- (void)setIsAccessibilityScrollAncestor:(BOOL)arg1;
- (void)_setAccessibilityWindowVisible:(BOOL)arg1;
- (void)setIsAccessibilityWindow:(BOOL)arg1;
- (BOOL)_accessibilitySecondaryActivate;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSetsForKeyboardType:(int)arg1;
- (int)_accessibilityHandwritingAttributePreferredCharacterSetForKeyboardType:(int)arg1;
- (id)_accessibilityHandwritingAttributeLanguage;
- (BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (BOOL)_accessibilityHandwritingAttributeAcceptsRawInput;
- (BOOL)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (BOOL)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (BOOL)_accessibilitySupportsHandwriting;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1 insertedText:(id)arg2;
- (id)_accessibilityTextChecker;
- (BOOL)_accessibilityReadAllOnFocus;
- (id)_accessibilityTextMarkerForPosition:(int)arg1;
- (BOOL)_accessibilityShouldReleaseAfterUnregistration;
- (BOOL)accessibilityEditOperationAction:(id)arg1;
- (void)accessibilityDecreaseTrackingDetail;
- (void)accessibilityIncreaseTrackingDetail;
- (struct CGRect)_handleRotatingFrame:(struct CGRect)arg1 toOrientation:(int)arg2;
- (struct CGAffineTransform)_accessibilityJailTransform;
- (struct CGRect)_accessibilityDisplayRectForSceneReferenceRect:(struct CGRect)arg1;
- (struct CGRect)_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect)arg2 orientationNeededForRotation:(int)arg3;
- (id)_accessibilityContainingParentForOrdering;
- (void)_handleRotatingFirstFrame:(struct CGRect *)arg1 secondFrame:(struct CGRect *)arg2 toOrientation:(int)arg3;
- (struct CGRect)_accessibilityFrameForSorting;
- (struct CGRect)_accessibilityChildrenUnionContentFrame;
- (BOOL)_accessibilityUsesChildrenFramesForSorting;
- (struct CGRect)_accessibilityConvertPortraitUpFrame:(struct CGRect)arg1 toOrientation:(int)arg2;
- (int)_accessibilitySortPriorityWithReturningView:(id *)arg1;
- (int)_accessibilitySortPriority;
- (id)_accessibilityFindAnyAXDescendant:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;
- (id)_accessibilityFindAXDescendants:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;
- (id)_accessibilityFindDescendant:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindElementInDirection:(int)arg1 searchTraits:(unsigned long long)arg2 allowOutOfBoundsChild:(BOOL)arg3;
- (void)_accessibilityOpaqueElementScrollToDirection:(int)arg1;
- (void)accessibilitySetUserDefinedOpaqueElementScrollsContentIntoView:(id)arg1;
- (id)_accessibilitySearchSubtreesAfterChildElement:(id)arg1 direction:(int)arg2 searchTraits:(unsigned long long)arg3 allowOutOfBoundsChild:(BOOL)arg4;
- (BOOL)_accessibilityUsesSpecialKeyboardDismiss;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (void)_accessibilitySetWantsOpaqueElementProviders:(BOOL)arg1;
- (void)_accessibilityHandleATFocused:(BOOL)arg1;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(int)arg2;
- (BOOL)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (BOOL)_accessibilityUpdatesOnActivationAfterDelay;
- (BOOL)_accessibilityCanScrollInAtLeastOneDirection;
- (BOOL)_accessibilityElementVisibilityAffectsLayout;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityCustomActionNamesAndIdentifiers;
- (id)_accessibilityAllCustomRotorTitles;
- (BOOL)_accessibilityBookShowsDualPages;
- (id)_accessibilityInputIdentifierForKeyboard;
- (BOOL)_accessibilityIsLastSibling;
- (BOOL)_accessibilityIsFirstSibling;
- (BOOL)_accessibilityWebViewIsLoading;
- (id)_accessibilityActiveURL;
- (BOOL)_accessibilityWebSearchResultsActive;
- (BOOL)_accessibilityIncludeDuringContentReading;
- (id)_accessibilityPageContent;
- (struct CGPoint)__accessibilityVisibleScrollArea:(BOOL)arg1;
- (BOOL)_accessibilityIsEscapable;
- (BOOL)__accessibilitySupportsSecondaryActivateAction;
- (BOOL)__accessibilitySupportsActivateAction;
- (BOOL)_accessibilityAnimationsInProgress;
- (id)_accessibilityApplication;
- (BOOL)_accessibilityIsAwayAlertElementNew;
- (BOOL)__accessibilityReadAllOnFocus;
- (BOOL)_accessibilityCameraIrisOpen;
- (struct CGPoint)_accessibilityConvertSystemBoundedScreenPointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (id)_accessibilityTextMarkerRangeForSelection;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityPageTextMarkerRange;
- (BOOL)_accessibilityShouldAvoidAnnouncing;
- (BOOL)_accessibilityIsAccessibilityUIServer;
- (struct CGRect)_accessibilityGesturePracticeRegion;
- (BOOL)_accessibilityIsInAppSwitcher;
- (BOOL)_accessibilityIsInFolder;
- (BOOL)_accessibilityPrefersHorizontalScrolling;
- (id)_accessibilityStatusBar;
- (id)_accessibilityHandwritingAncestor;
- (id)_accessibilitySupportedLanguages;
- (id)_accessibilityOpaqueElementParent;
- (BOOL)_accessibilityLastHitTestNearBorder;
- (int)_accessibilityMapFeatureType;
- (id)_accessibilityDisplayPathForScreenPath:(id)arg1;
- (BOOL)_accessibilityIsTourGuideRunning;
- (BOOL)_accessibilityShouldSpeakMathEquationTrait;
- (id)accessibilityMathMLSource;
- (id)accessibilityMathEquation;
- (struct CGRect)_accessibilityTextCursorFrame;
- (id)_accessibilityDOMAttributes;
- (BOOL)_accessibilityReadAllContinuesWithScroll;
- (BOOL)_accessibilityIsScrollable;
- (unsigned long long)_accessibilityInheritedTraits;
- (BOOL)_accessibilityShouldInheritTraits;
- (id)accessibilitySecondaryLabel;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (struct CGPoint)_accessibilityScrollRectToVisible:(struct CGRect)arg1;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint)arg1;
- (BOOL)_accessibilityRoadContainsTrackingPoint:(struct CGPoint)arg1;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint)arg1 forAngle:(float)arg2;
- (float)_accessibilityDistance:(struct CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (id)_accessibilityOpaqueElementsFrom:(id)arg1 direction:(int)arg2 searchTraits:(unsigned long long)arg3;
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (id)_accessibilityAllCustomRotorItemsAtIndex:(int)arg1;
- (struct CGPoint)_accessibilityDisplayPointForSceneReferencePoint:(struct CGPoint)arg1;
- (id)_accessibilityValueForRange:(struct _NSRange *)arg1;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (id)accessibilityLabelForRange:(struct _NSRange *)arg1;
- (id)_accessibilitySpeakThisStringValue;
- (void)_accessibilityRawSetIsSpeakThisElement:(id)arg1;
- (id)_accessibilityRawIsSpeakThisElement;
- (id)_accessibilityFirstVisibleItem;
- (void)_accessibilityEnumerateAllCustomRotorTitlesWithAccumulator:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (BOOL)_accessibilityIsStarkElement;
- (struct CGPoint)_accessibilityVisiblePoint;
- (BOOL)_accessibilityVisiblePointHonorsScreenBounds;
- (unsigned int)_accessibilityContextId;
- (struct CGPoint)_accessibilityVisiblePointHitTestingAnyElement:(BOOL)arg1;
- (id)_retrieveCustomActions;
- (BOOL)_accessibilityPerformLegacyCustomAction:(id)arg1;
- (BOOL)accessibilityPerformCustomAction:(int)arg1;
- (BOOL)accessibilityScrollToTopSupported;
- (void)set_accessibilityDidUpdateContainerReferenceForAccessibilityElements:(BOOL)arg1;
- (BOOL)_accessibilityDidUpdateContainerReferenceForAccessibilityElements;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (id)_accessibilityElements;
- (void)_accessibilitySendPageScrollFailedIfNecessary;
- (BOOL)_accessibilityHandlePublicScroll:(int)arg1;
- (BOOL)_accessibilityShouldScrollRemoteParent;
- (id)_accessibilityRemoteParent;
- (struct CGRect)accessibilityFrameForScrolling;
- (BOOL)_accessibilityBaseScrollToVisible;
- (BOOL)_accessibilityCanPerformAction:(int)arg1;
- (BOOL)_accessibilityIterateParentsForTestBlock:(CDUnknownBlockType)arg1;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1 alwaysAllowRefreshAction:(BOOL)arg2;
- (BOOL)_accessibilityShouldSpeakScrollStatusOnEntry;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_accessibilityParentForFindingScrollParent;
- (BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (void)_accessibilityIterateScrollParentsUsingBlock:(CDUnknownBlockType)arg1 includeSelf:(BOOL)arg2;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedWindowVisible;
- (BOOL)_accessibilityIsMap;
- (BOOL)_accessibilityHitTestReverseOrder;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToSceneReferenceSpace:(struct CGRect)arg1;
- (id)_accessibilityBaseHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (struct CGRect)_accessibilityVisibleFrame;
- (BOOL)_accessibilityIsRemoteElement;
- (BOOL)_accessibilitySpeakThisIgnoresAccessibilityElementStatus;
- (BOOL)accessibilityShouldEnumerateContainerElementsArrayDirectly;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(int)arg2;
- (BOOL)_accessibilityHitTestsStatusBar;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (BOOL)_accessibilityElementShouldBeInvalid;
- (BOOL)accessibilityActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)accessibilityElementIsFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilitySetIdentification:(id)arg1;
- (int)_accessibilityLineStartPosition;
- (int)_accessibilityLineEndPosition;
- (id)accessibilityPageContent;
- (struct CGRect)accessibilityFrameForLineNumber:(int)arg1;
- (id)accessibilityContentForLineNumber:(int)arg1;
- (int)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (void)_setAccessibilityIsMainWindow:(BOOL)arg1;
- (void)_accessibilitySetAnimationsInProgress:(BOOL)arg1;
- (BOOL)_accessibilityDismissAlternativeKeyPicker;
- (BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
- (BOOL)_accessibilityIsInternationalKeyboardKey;
- (BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (void)_accessibilitySetSortPriority:(int)arg1;
- (BOOL)_accessibilityTriggerDictationFromPath:(id)arg1;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (void)_accessibilitySetOverridesInvisibility:(BOOL)arg1;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (id)_accessibilityVisibleItemInList;
- (BOOL)_accessibilityCanDismissPopoverController:(id)arg1;
- (id)_accessibilityHandwritingAttributes;
- (void)_accessibilitySetIsSpeakThisElement:(BOOL)arg1;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (id)_accessibilityRoleDescription;
- (void)_accessibilityReplace;
- (void)_accessibilityDelete;
- (id)accessibilityMenuActions;
- (void)_accessibilityJumpToTableIndex:(id)arg1;
- (id)_accessibilityPhotoDescription;
- (id)_accessibilityVariantKeys;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (void)_accessibilityPostValueChangedNotificationWithInsertedText:(id)arg1;
- (BOOL)_accessibilityShouldAnnounceFontInfo;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (void)_accessibilityConvertStyleAttributesToAccessibility:(id)arg1;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (id)_accessibiltyAvailableKeyplanes;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (BOOL)_accessibilitySortCollectionViewLogically;
- (BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1;
- (id)accessibilityUserDefinedOpaqueElementScrollsContentIntoView;
- (id)_accessibilityBriefLabel;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned int)arg1;
- (int)_accessibilityPageControlIndex;
- (int)_accessibilityPageControlCount;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityDateTimePickerValues;
- (int)_accessibilityIndexForPickerString:(id)arg1;
- (unsigned int)_accessibilityDatePickerComponentType;
- (void)_accessibilitySetVisibleContentInset:(struct UIEdgeInsets)arg1;
- (struct CGRect)_accessibilityContentFrame;
- (BOOL)accessibilityScrollRightPage;
- (BOOL)accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollDownPage;
- (BOOL)accessibilityScrollUpPage;
- (struct CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (struct CGPoint)_accessibilityContentOffset;
- (BOOL)_accessibilityIsScrollAncestor;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (BOOL)_accessibilityShouldAvoidScrollingToViewBounds;
- (void)_accessibilityScrollOpaqueElementIntoView:(int)arg1 previousScroller:(id)arg2;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (BOOL)_accessibilityScrollingEnabled;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (id)_accessibilityUserTestingVisibleAncestor;
- (BOOL)_accessibilityBackingElementIsValid;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilitySpeakThisString;
- (BOOL)_accessibilityHasTextOperations;
- (void)_accessibilitySelectAll;
- (void)_accessibilityPaste;
- (void)_accessibilitySelect;
- (void)_accessibilityCut;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityRespectsTableScrollEnabledFlag;
- (id)_accessibilityEquivalenceTag;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsUserInteractionEnabled;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilitySupportGesturesAttributes;
- (id)_accessibilityContainerInDirection:(BOOL)arg1 originalElement:(id)arg2;
- (int)_accessibilityVerticalSizeClass;
- (int)_accessibilityHorizontalSizeClass;
- (id)_accessibilityAutomaticIdentifier;
- (id)_accessibilityViewController;
- (id)_accessibilityWindow;
- (id)_accessibilityTouchContainer;
- (BOOL)accessibilityIsWindow;
- (BOOL)_accessibilityIsTouchContainer;
- (id)_accessibilityHitTestSupplementaryViews:(struct CGPoint)arg1 event:(id)arg2;
- (id)isAccessibilityUserDefinedWindow;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)_accessibilityWindowVisible;
- (id)accessibilityCustomRotorItemsAtIndex:(int)arg1;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (id)accessibilityCustomRotorTitles;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (float)_accessibilityActivationDelay;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1;
- (float)_accessibilityAllowedGeometryOverlap;
- (BOOL)_accessibilityIsTableCell;
- (BOOL)_accessibilityIsInTableCell;
- (id)_accessibilityCustomActions;
- (id)accessibilityContainerElements;
- (int)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (BOOL)_accessibilityTableCellUsesDetailTextAsValue;
- (BOOL)_accessibilityLanguageOverriddesUser;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1 oldElements:(id)arg2;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (void)_accessibilityIgnoreNextPostPasteboardTextOperation:(id)arg1;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (BOOL)accessibilityScrollRightPageSupported;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)_accessibilityIsVisibleByCompleteHitTest;
- (id)_accessibilityScrollStatus;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (BOOL)_accessibilitySelfFoundByHitTesting;
- (id)_accessibilityHeaderElement;
- (BOOL)_accessibilitySupportsActivateAction;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (BOOL)_accessibilityIsSpeakThisElement;
- (int)_accessibilityPickerType;
- (void)_accessibilityResetContainerElements;
- (BOOL)_accessibilityOverridesInvisibility;
- (id)_accessibilityRetrieveImagePathLabel:(id)arg1;
- (BOOL)_accessibilityDispatchKeyboardAction:(id)arg1;
- (id)_accessibilityTableViewCellWithRowIndex:(int)arg1 andColumn:(int)arg2;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (BOOL)accessibilityStartStopToggle;
- (id)accessibilityAttributeValue:(int)arg1;
- (id)_accessibilityBundleIdentifier;
- (id)_accessibilityFirstElementForFocus;
- (id)_accessibilityParentView;
- (BOOL)_accessibilityIsTitleElement;
- (id)_accessibilityFindAncestor:(CDUnknownBlockType)arg1 startWithSelf:(BOOL)arg2;
- (BOOL)_accessibilityHasOrderedChildren;
- (BOOL)_accessibilityIsFirstElementForFocus;
- (id)_accessibilityUnignoredDescendant;
- (BOOL)_accessibilityIsNotFirstElement;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_accessibilityLastOpaqueElement;
- (id)_accessibilityFirstOpaqueElement;
- (BOOL)_accessibilityWantsOpaqueElementProviders;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (BOOL)_accessibilityIsMainWindow;
- (id)_accessibilityFindSubviewDescendant:(CDUnknownBlockType)arg1;
- (BOOL)_accessibilityIsWebDocumentView;
- (void)accessibilityEnumerateContainerElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_accessibilityViewAncestorIsKindOf:(Class)arg1;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityIsDescendantOfElement:(id)arg1;
- (BOOL)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetCameraIrisOpen:(BOOL)arg1;
- (void)_accessibilityPlaySystemSound:(int)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)accessibilityCompareGeometry:(id)arg1;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)accessibilityIdentification;
@end

