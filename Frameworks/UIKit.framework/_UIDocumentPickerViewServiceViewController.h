//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "_UIDocumentPickerOverviewDelegate.h"
#import "_UIDocumentPickerRemoteViewControllerContaining.h"
#import "_UIDocumentPickerServiceViewController.h"
#import "_UIDocumentPickerViewController.h"

@class NSArray, NSString, NSURL;

@interface _UIDocumentPickerViewServiceViewController : UINavigationController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerViewController, _UIDocumentPickerServiceViewController>
{
    BOOL _displayedAsMenu;
    BOOL _hasBeenDismissed;
    BOOL _showingSpinner;
    NSArray *_pickableTypes;
    unsigned int _pickerMode;
    NSURL *_uploadURL;
    NSArray *_auxiliaryOptions;
    NSString *_currentPickerIdentifier;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(nonatomic) BOOL showingSpinner; // @synthesize showingSpinner=_showingSpinner;
- (void)_willAppearInRemoteViewController;
- (void)_dismissWithImportURL:(id)arg1;
@property(nonatomic) int displayMode;
- (BOOL)shouldShowSearch;
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;
- (BOOL)_appIsSharingAware;
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;
@property(nonatomic) BOOL displayedAsMenu; // @synthesize displayedAsMenu=_displayedAsMenu;
- (void)_showLocationPopupFromBarButtonItem:(id)arg1 rect:(struct CGRect)arg2;
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_presentError:(id)arg1 forThirdPartyPickerWithDescription:(id)arg2;
- (void)_didInstantiateThirdPartyPickerWithDescription:(id)arg1 viewController:(id)arg2;
- (void)_showLocationPopup:(id)arg1;
- (void)_doneButton:(id)arg1;
- (void)_showPicker:(id)arg1;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(BOOL)arg2;
- (void)_checkFileStatus;
- (void)_showTopLevelViewController;
@property(retain, nonatomic) NSString *currentPickerIdentifier; // @synthesize currentPickerIdentifier=_currentPickerIdentifier;
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;
- (void)setNavigationItemSpinner:(BOOL)arg1;
@property(nonatomic) BOOL hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property(readonly, nonatomic) id <_UIDocumentPickerViewControllerHost> hostingViewController;
- (void)beginDownloadingURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
- (void)_setUploadURL:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) int sortOrder;
@property(nonatomic) unsigned int pickerMode; // @synthesize pickerMode=_pickerMode;
@property(copy, nonatomic) NSArray *pickableTypes; // @synthesize pickableTypes=_pickableTypes;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
@property(copy, nonatomic) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_setPickerMode:(unsigned int)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)_prepareForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissViewController;
- (void)_showDefaultPicker;
- (void)_setTintColor:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

