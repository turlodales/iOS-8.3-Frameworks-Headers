//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAMEffectSelectionViewControllerDelegate.h"
#import "PLImageAdjustmentViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CAMEffectSelectionViewController, CIContext, CIFilter, EAGLContext, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSUndoManager, PLEditOverlayTextView, PLImageAdjustmentView, PLManagedAsset, PLProgressHUD, UIActionSheet, UIAlertView, UIImage, UINavigationBar, UIPopoverController, UIScrollView, UIToolbar, UIView;

@interface PLEditPhotoController : UIViewController <PLImageAdjustmentViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, CAMEffectSelectionViewControllerDelegate>
{
    UIScrollView *_scrollView;
    UIView *_zoomView;
    PLImageAdjustmentView *_editView;
    PLEditOverlayTextView *_messageView;
    UINavigationBar *_navigationBar;
    UIToolbar *_toolbar;
    CAMEffectSelectionViewController *_effectSelectionViewController;
    PLProgressHUD *_savingHUD;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    UIPopoverController *_popover;
    int _initialOrientation;
    NSDictionary *_initialAdjustmentState;
    NSUndoManager *_undoManager;
    NSDictionary *_previousAdjustmentState;
    NSUndoManager *_previousUndoManager;
    NSTimer *_messageTimer;
    NSMutableArray *_navBarItems;
    NSArray *_originalItems;
    PLManagedAsset *_editedPhoto;
    PLManagedAsset *_pendingPhoto;
    UIImage *_adjustedImage;
    NSArray *_autoAdjustmentFilters;
    struct CGRect _enhanceCalcRect;
    NSArray *_autoRedEyeCorrections;
    CIFilter *_autoRedEyeFilter;
    CIFilter *_redEyeFilter;
    NSArray *_effectFilters;
    struct CGRect _normalizedCropRect;
    float _straightenAngle;
    float _rotationAngle;
    NSDictionary *_cachedMetadata;
    UIImage *_scaledCachedImage;
    UIImage *_smallThumbnailImage;
    UIImage *_largeThumbnailImage;
    NSObject<OS_dispatch_queue> *_cachedImageQueue;
    CDUnknownBlockType _didEndZoomingBlock;
    CDUnknownBlockType _editCompletionBlock;
    CDUnknownBlockType _actionCompletionBlock;
    unsigned int _redEyeCycleCount;
    unsigned int _didInitializeNavigationItem:1;
    unsigned int _toolbarWasHidden:1;
    unsigned int _isUserAction:1;
    unsigned int _isCroppingImage:1;
    unsigned int _didTapForRedEyeCorrection:1;
    unsigned int _didEverTapForRedEyeCorrection:1;
    unsigned int _isCanceling:1;
    unsigned int _isOrderedOut:1;
    unsigned int _autoAdjustmentEnabled:1;
    unsigned int _preloadingEnhancementFilters:1;
    unsigned int _applyingAutoEnhance:1;
    unsigned int _modal:1;
    unsigned int _isUsingProxyImage:1;
    unsigned int _shouldPublishToPhotoStreams:1;
    unsigned int _needsFilteredFullSizeImage:1;
    unsigned int _preloadedEffectFilters:1;
    unsigned int _stopPreloadEffectFilters:1;
    BOOL _supportsEffects;
    unsigned int _nextPreloadEffectFilterIndex;
    NSMutableDictionary *_thumbnailCache;
    NSDictionary *_thumbnailCacheAdjustmentState;
    CIContext *_ciContextThumbnails;
    CIContext *_ciContextFullSize;
    CIContext *_ciContextMainThread;
    EAGLContext *_glesContextThumbnails;
    EAGLContext *_glesContextFullSize;
    NSObject<OS_dispatch_queue> *_effectQueueThumbnails;
    NSObject<OS_dispatch_queue> *_effectQueueFullSize;
    int _currentMode;
    BOOL _savesAdjustmentsToCameraRoll;
    BOOL __toolbarHidden;
    int __viewAnimationEnabledCount;
}

+ (void)initialize;
- (BOOL)hasRedEyeCorrections;
- (void)assetContainerDidChange:(id)arg1;
@property(readonly, nonatomic) float straightenAngle;
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
@property(nonatomic, setter=_setToolbarHidden:) BOOL _toolbarHidden; // @synthesize _toolbarHidden=__toolbarHidden;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
- (void)updatePendingPhoto;
- (id)redEyePoints;
- (id)_autoAdjustmentFilters;
- (id)_masterImagePath;
- (void)editViewDidTouchImage:(id)arg1 location:(struct CGPoint)arg2;
- (void)editViewWillCropImage:(id)arg1;
- (void)didRedoNotification:(id)arg1;
- (void)didUndoNotification:(id)arg1;
- (void)_computeFullSizeFilteredImageWithAdjustmentState:(id)arg1;
- (void)_thumbnailImageWithEffectFilters:(id)arg1 inputImage:(id)arg2 applyOrientation:(BOOL)arg3 forceSquareCrop:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_smallThumbnailImage;
- (id)_largeThumbnailImage;
- (void)_fetchSmallThumbnailForEffectFilter:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_preloadNextEffectFilter;
- (struct CGSize)_editedImageFullSize;
- (BOOL)_adjustmentState:(id)arg1 isEqualTo:(id)arg2;
- (BOOL)_setRedEyeCorrections:(id)arg1 changedCorrections:(id *)arg2;
- (void)_updateSelectedEffect;
- (void)_cleanupFilters;
- (void)_dismissProgressAlertIfNeeded;
- (struct CGSize)editedImageSize;
- (void)editViewDidCropImage:(id)arg1;
- (void)_displayRedEyeCorrections:(id)arg1;
- (void)_addRedEyeCorrections:(id)arg1 fromFilter:(id)arg2 isUserAction:(BOOL)arg3;
- (id)_calculateAutoFiltersWithFeatures:(int)arg1 includeGeometry:(BOOL)arg2;
- (void)_removeRedEyeCorrections:(id)arg1;
- (void)_autoAdjustImage;
- (void)_setAutoRedEyeFilterFromArray:(id)arg1;
- (id)_croppedStraightenedImage;
- (void)_saveAdjustmentsToCopy;
- (void)zoomToScale:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateAggregateInfoForCurrentAdjustmentState;
- (void)_saveFiltersToAsset:(id)arg1;
- (void)_saveXMPPropertiesToPhoto:(id)arg1;
- (void)_saveAdjustmentsToOriginal;
- (id)_currentNonGeometryFiltersWithEffectFilters:(id)arg1;
- (id)_newImageFromImage:(id)arg1 filters:(id)arg2 orientation:(int)arg3 ciContext:(id)arg4;
- (id)_cropAndStraightenFiltersForImageSize:(struct CGSize)arg1 forceSquareCrop:(BOOL)arg2 forceUseGeometry:(BOOL)arg3;
- (id)_newCIImageFromUIImage:(id)arg1;
- (void)_preloadEffectFilters;
- (void)_setAspectRatio:(struct CGSize)arg1;
- (void)_computeFullSizeFilteredImage;
- (void)addRedEyePoint:(struct CGPoint)arg1;
- (BOOL)removeRedEyePoint:(struct CGPoint)arg1;
- (void)setStraightenAngle:(float)arg1 normalizedCropRect:(struct CGRect)arg2;
- (void)_undoTransformImage:(struct CGRect)arg1 angle:(float)arg2;
- (void)_setControlsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_currentToolbarItems;
- (id)_redEyeLabel;
- (void)_setViewAnimationsEnabled:(BOOL)arg1;
- (void)_setEditedImage:(id)arg1 isProxyImage:(BOOL)arg2 updateCropAndStraighten:(BOOL)arg3 forceAnimate:(BOOL)arg4;
@property(nonatomic, setter=_setViewAnimationEnabledCount:) int _viewAnimationEnabledCount; // @synthesize _viewAnimationEnabledCount=__viewAnimationEnabledCount;
- (void)_updateEnhanceButton;
- (void)orderOut:(BOOL)arg1 forceCompletion:(BOOL)arg2;
- (id)_buttonWithTag:(int)arg1;
- (void)saveAdjustments;
- (void)_verifyProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_constrainActionSheet;
- (void)_setEditMode:(int)arg1;
- (void)_rotatePhotoByAngle:(float)arg1;
@property(nonatomic) BOOL autoAdjustmentEnabled;
- (void)_loadFiltersFromDatabase;
- (void)_setAutoAdjustmentFilters:(id)arg1;
- (id)_originalState;
- (void)_setAdjustmentState:(id)arg1;
- (void)_presentEffectSelection;
- (void)_updateModeButtons;
- (void)_updateToolbarSetHiddenState:(BOOL)arg1;
- (void)_pushModalState;
- (void)_popModalState;
- (void)_displayAllRedEyeCorrections;
- (void)_dismissEffectSelection;
- (void)hideMessage:(id)arg1;
- (void)showMessage:(id)arg1 duration:(double)arg2;
- (void)applySubmode:(id)arg1;
- (void)revertToSaved:(id)arg1;
- (void)showConstraints:(id)arg1;
- (void)selectEditMode:(id)arg1;
- (void)enhancePhoto:(id)arg1;
- (id)_newButtonItemWithIcon:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tag:(int)arg5;
- (void)rotatePhoto:(id)arg1;
- (id)_cropAndStraightenToolbarItems;
- (id)_startToolbarItems;
- (id)_rightButtonForMode:(int)arg1 enableDone:(BOOL)arg2 enableSave:(BOOL)arg3;
- (void)revertToOriginal:(id)arg1;
- (void)_layoutToolbar;
- (float)rotatedZoomToFitScale;
- (void)sizeToFit:(BOOL)arg1;
- (void)_updateMessageOverlayFrame;
- (void)_updateCropInsetsForOrientation:(int)arg1;
- (void)_pushNewUndoManager;
- (BOOL)_isZoomedToScale:(float)arg1;
- (void)_displayAutoAdjustmentMessage;
- (void)_updateEditedImage:(BOOL)arg1;
- (void)_preloadEnhancementFilters;
- (BOOL)_currentStateIsEqualToAdjustmentState:(id)arg1;
- (id)newAdjustedImageWithoutGeometryUsingContext:(id)arg1;
- (id)_scaledCachedImage;
- (id)_adjustmentState;
@property(retain, nonatomic) PLManagedAsset *editedPhoto;
- (void)_startEditingWithAsset:(id)arg1;
- (void)_updateControls;
- (void)_presentSavingHUD;
- (void)_setEditedImage:(id)arg1 isProxyImage:(BOOL)arg2 updateCropAndStraighten:(BOOL)arg3;
- (void)_setEditedPhoto:(id)arg1 resetFilters:(BOOL)arg2;
- (BOOL)_dismissPopoverViews;
- (void)_dismissSavingHUD;
- (void)forceCompletion;
- (void)startEditingAsset:(id)arg1 proxyImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)savesAdjustmentsToCameraRoll;
- (void)setMinimumZoom:(float)arg1 maximumZoom:(float)arg2;
- (float)zoomToFitScale;
@property(readonly, nonatomic) PLManagedAsset *pendingPhoto;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
- (void)cancel:(id)arg1;
- (void)_updateToolbar;
- (void)effectSelectionViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectSelectionViewController:(id)arg1 requestsThumbnailWithEffect:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)save:(id)arg1;
- (void)_updateButtons;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
@property(retain, nonatomic) UIToolbar *toolbar;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (BOOL)hidesBottomBarWhenPushed;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isEditing;
@property(retain, nonatomic) UINavigationBar *navigationBar;
- (BOOL)canBecomeFirstResponder;
- (void)undo:(id)arg1;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didReceiveMemoryWarning;
- (id)navigationItem;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
- (void)_setUndoManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

