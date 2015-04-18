//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABTabletStyleProvider.h>

#import "TKTonePickerStyleProvider.h"
#import "TKVibrationPickerStyleProvider.h"

@class NSString, UIColor, UIFont;

@interface ABFaceTimeStyleProvider : ABTabletStyleProvider <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>
{
}

- (id)vibrationPickerCellSelectedTextColor;
- (id)tonePickerCellSelectedTextColor;
@property(readonly, nonatomic) BOOL vibrationPickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property(readonly, nonatomic) BOOL wantsCustomVibrationPickerHeaderView;
@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property(readonly, nonatomic) int vibrationPickerTableViewSeparatorStyle;
@property(readonly, nonatomic) BOOL vibrationPickerUsesOpaqueBackground;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
@property(readonly, nonatomic) BOOL tonePickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset tonePickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property(readonly, nonatomic) BOOL wantsCustomTonePickerHeaderView;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property(readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property(readonly, nonatomic) int tonePickerTableViewSeparatorStyle;
@property(readonly, nonatomic) BOOL tonePickerUsesOpaqueBackground;
- (id)groupAccountNameShadowColor;
- (int)groupCellSelectionStyle;
- (id)groupCellShadowColor;
- (id)groupCellHighlightedTextColor;
- (BOOL)groupsTableShouldRemoveBackgroundView;
- (BOOL)presentModalViewInPopover;
- (BOOL)presentNewContactsControllersInPopover;
- (BOOL)presentDatePickerInPopover;
- (int)dialogStyleForDeleteConfirmation;
- (BOOL)shouldDefinePickerTransitionStyle;
- (int)pickerTransitionStyle;
- (BOOL)datePickerHasNavigationTitle;
- (id)cardPhotoEditPlaceholderImage;
- (BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)cardPlaceholderCompanyImage;
- (id)cardPlaceholderPersonImage;
- (struct CGSize)cardPhotoShadowOffset;
- (id)cardPhotoShadowImage;
- (BOOL)cardPhotoShouldApplyOverlayImageWhenLabelPresent;
- (id)cardPhotoEditOverlayImage;
- (id)cardPhotoFacebookAttributionImage;
- (id)cardPhotoOverlayImage;
- (id)cardPhotoMaskImage;
- (struct CGSize)cardPhotoOffset;
- (id)cardPhotoBackgroundImage;
- (id)personViewGetFavoritesBadgeHighlighted;
- (id)personViewGetFavoritesBadge;
- (BOOL)cardSectionDrawsDefaultTopShadow;
- (BOOL)cardSectionAlwaysWantsHeader;
- (BOOL)cardShouldUseSeparateSectionsForUnknownCardActions;
- (BOOL)cardTableViewUsesDistinctSectionHeaderFooterHeights;
- (BOOL)cardTableUsesRowFadeAnimation;
- (id)cardDeleteButtonImagePressed;
- (id)cardDeleteButtonImage;
- (id)cardCellDividerShadowColorVertical:(BOOL)arg1;
- (BOOL)cardCellLooksDifferentWhenEditing;
- (BOOL)cardActionsAllowFaceTimeFavorites;
- (BOOL)cardActionsAllowVoiceFavorites;
- (id)cardActionConferenceIconPressed;
- (id)cardActionConferenceIcon;
- (id)cardActionButtonBackgroundHighlighted;
- (id)cardActionButtonBackgroundNormal;
- (int)cardActionButtonType;
- (id)personHeaderPasteboardColor;
- (struct CGSize)personActionShadowOffset;
- (id)personActionShadowColor;
- (id)personActionHighlightedColor;
- (id)personActionColor;
- (id)personActionFont;
- (id)personLabelShadowColor;
- (id)personLabelHighlightedColor;
- (id)personValueImportantHighlightColor;
- (id)personValueImportantColor;
- (id)cardLabelEmphasizedHighlightedTextColor;
- (id)cardLabelHighlightedTextColor;
- (id)editorViewColor;
- (id)cardLabelSelectedBackgroundColor;
- (BOOL)cardValueHighlightsWhenTouched;
- (id)cardValueClearButtonImage;
- (id)cardValueHighlightedTextColor;
- (id)cardHeaderDefaultLabelTextColor;
- (int)headerViewBorderStyle;
- (id)cardTableCellBorderColor;
- (id)personHeaderShadowColor;
- (id)cardTaglineTextColor;
- (id)cardHeadlineTextColor;
- (BOOL)cardTableShouldRemoveBackgroundView;
- (BOOL)membersSearchBarIsInTableHeader;
- (float)membersIndexMaximumHeight;
- (int)membersSelectionStyle;
- (id)memberSearchFieldBackgroundColor;
- (id)memberNameMeCardTextColor;
- (id)memberNameSelectedShadowColor;
- (id)cardSectionBackgroundColor;
- (id)membersSearchCellBackgroundColor;
- (id)membersSearchBackgroundColor;
- (id)membersBackgroundColor;
- (id)memberHeaderBackgroundView;
- (id)membersHeaderContentViewBackgroundColor;
- (id)newTableFooterViewForCellStyle:(int)arg1;
- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForGroupsTableGrouped;
- (float)personViewHeaderImageHeight;
- (float)personViewHeaderImageWidth;
- (id)newCardDividerViewVertical:(BOOL)arg1;
- (struct CGSize)personHeaderShadowOffset;
- (id)personValueEmphasizedColor;
- (id)personValueEmphasizedHighlightColor;
- (id)cardLabelTextColor;
- (id)memberNameShadowColor;
- (int)cardCellSelectionStyle;
- (id)memberNameTextColor;
- (id)membersHeaderBackgroundColor;
- (id)_accessoryDisclosureIndicatorHighlightedImageShadowed;
- (id)_accessoryDisclosureIndicatorHighlightedImage;
- (id)_accessoryDisclosureIndicatorImageShadowed;
- (id)_accessoryDisclosureIndicatorImage;
- (BOOL)shouldPropagateStylesToPickers;
- (BOOL)shouldUseCardContentProviderWhenAvailable;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2;
- (id)memberSectionListHeaderImage;
- (id)membersIndexTrackingBackgroundColor;
- (id)membersIndexTextColor;
- (BOOL)peoplePickerBarStyleIsTranslucent;
- (int)peoplePickerBarStyle;
- (BOOL)shouldUsePeoplePickerBarStyle;
- (id)separatorColorForCellStyle:(int)arg1;
- (int)separatorStyleForCellStyle:(int)arg1;
- (int)abCellStyleForMembersTable;
- (id)memberPlaceholderCompanyImage;
- (id)memberPhotoOverlayImage;
- (id)memberPlaceholderPersonImage;
- (id)memberPhotoMaskImage;
- (id)cardValueTextColor;
- (float)cardPhotoFrameBorderSize;
- (id)cardClippingImageLabelBevelColor;
- (id)cardClippingImageLabelColor;
- (id)newBackgroundViewForCellStyle:(int)arg1 selected:(BOOL)arg2;
- (id)shadowColorForCellStyle:(int)arg1;
- (id)cardCellBackgroundColor;
- (id)memberNameSelectedColor;
- (int)abCellStyleForCardTableWhenEditing:(BOOL)arg1;
- (id)personLabelColor;
- (BOOL)labelPickerUsesOpaqueBackground;
- (id)groupAccountNameColor;
- (id)groupHeaderBackgroudColor;
- (id)groupCellTextColor;
- (id)groupCellBackgroundColor;
- (id)cardCellDividerColorVertical:(BOOL)arg1;
- (id)groupsTableBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) int tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@property(readonly, nonatomic) int vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;

@end

