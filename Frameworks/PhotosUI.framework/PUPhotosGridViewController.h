//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "PHAssetCollectionDataSource.h"
#import "PLDismissableViewController.h"
#import "PLNavigableAssetContainerViewController.h"
#import "PUCollectionViewReorderDelegate.h"
#import "PUPhotosDataSourceChangeObserver.h"
#import "PUScrollViewSpeedometerDelegate.h"
#import "PUSearchViewControllerDelegate.h"
#import "PUSessionInfoObserver.h"
#import "PUStackedAlbumControllerTransition.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSIndexPath, NSIndexSet, NSMutableDictionary, NSSet, NSString, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLDeletePhotosActionController, PUActivityViewController, PUAlbumListTransitionContext, PUAlbumPickerViewController, PUPhotoBrowserController, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosDataSource, PUPhotosGridViewControllerSpec, PUPhotosSinglePickerViewController, PUPopoverController, PUScrollViewSpeedometer, PUSearchButtonItem, PUSearchViewController, PUSessionInfo, UIAlertController, UIBarButtonItem, UICollectionViewLayout, UICollectionViewLayout<PUGridLayoutProtocol>, UILongPressGestureRecognizer, UINavigationButton, UIPopoverPresentationController, UIView;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, PUCollectionViewReorderDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, _UISettingsKeyObserver, UISearchBarDelegate, PUSearchViewControllerDelegate, PUPhotosDataSourceChangeObserver, UIGestureRecognizerDelegate, PLNavigableAssetContainerViewController, PLDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate>
{
    NSIndexPath *_menuIndexPath;
    BOOL _isMenuIndexPathExact;
    BOOL _contentViewInSyncWithModel;
    BOOL _didScrollToInitialPosition;
    UIView *_alternateContentView;
    float _lastTransitionWidth;
    PHAsset *_visibleReferenceAssetBeforeChange;
    PHAssetCollection *_visibleReferenceAssetContainerBeforeChange;
    NSIndexPath *_visibleReferenceAssetIndexPathBeforeChange;
    float _visibleReferenceAssetRelativeYBeforeChange;
    NSIndexSet *_visibleSectionsBeforeChange;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UINavigationButton *_selectionButton;
    UIBarButtonItem *_shareToolbarButton;
    UIBarButtonItem *_addToolbarButton;
    UIBarButtonItem *_removeToolbarButton;
    UIBarButtonItem *_restoreToolbarButton;
    UIBarButtonItem *_slideshowButtonSpacer;
    UIBarButtonItem *_slideshowButton;
    PUSearchButtonItem *_searchButton;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSMutableDictionary *_progressInfosByIdentifier;
    NSMutableDictionary *_progressInfosByCachedIndexPath;
    CDUnknownBlockType _onViewDidLayoutSubviewsBlock;
    unsigned int _suppressesColorSettingsCount;
    BOOL _deletesDuplicatesWhenNecessary;
    BOOL _initiallyScrolledToBottom;
    BOOL _alwaysHideTabBar;
    BOOL __hasEditSessionReorderedItems;
    BOOL _isDisplayingSearchResults;
    BOOL _showsCustomDoneButtonItemOnLeft;
    PUPhotosGridViewControllerSpec *_gridSpec;
    PUPhotosDataSource *_photosDataSource;
    PUSessionInfo *_sessionInfo;
    unsigned int _allowedActions;
    UICollectionViewLayout<PUGridLayoutProtocol> *_mainGridLayout;
    PUPhotoSelectionManager *_photoSelectionManager;
    CDUnknownBlockType _onViewDidAppearCompletion;
    PUPhotoPinchGestureRecognizer *_photoOrStackPinchGestureRecognizer;
    UIView *__emptyPlaceholderView;
    unsigned int __previousCollectionsCount;
    UIAlertController *__removeActionSheet;
    UIAlertController *__hideAssetConfirmationAlert;
    PLDeletePhotosActionController *__deleteActionController;
    NSSet *__assetsWaitingForDeleteChange;
    PUAlbumPickerViewController *__albumPickerViewController;
    PUPhotosSinglePickerViewController *__sharingPhotosPickerViewController;
    PUActivityViewController *__activityViewController;
    PUSearchViewController *_passdownSearchViewController;
    PUSearchViewController *__modalSearchViewController;
    PUPhotosGridViewController *__modalSearchResultsViewController;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    UICollectionViewLayout *__albumListTransitionLayout;
    UIBarButtonItem *_customDoneButtonItem;
    float _collectionViewLayoutReferenceWidth;
    PUPhotoBrowserController *__pushedPhotoBrowserController;
    PUPopoverController *__puPopoverController;
    UIPopoverPresentationController *__shareAssetsPopoverController;
    PHCachingImageManager *__cachingImageManager;
    int __maximumNumberOfRowsToPreheat;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    int __batchPreheatingCount;
    CDUnknownBlockType _ppt_nextDeleteFinishedBlock;
    struct CGPoint __previousPreheatContentOffset;
    struct CGRect __previousPreheatRect;
    struct CGRect __previousPrefetchRect;
}

@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)installGestureRecognizers;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isEmpty;
- (unsigned int)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
@property(nonatomic) BOOL showsCustomDoneButtonItemOnLeft; // @synthesize showsCustomDoneButtonItemOnLeft=_showsCustomDoneButtonItemOnLeft;
@property(retain, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // @synthesize _albumListTransitionLayout=__albumListTransitionLayout;
@property(nonatomic, setter=setDisplayingSearchResults:) BOOL isDisplayingSearchResults; // @synthesize isDisplayingSearchResults=_isDisplayingSearchResults;
@property(retain, nonatomic) PUSearchViewController *passdownSearchViewController; // @synthesize passdownSearchViewController=_passdownSearchViewController;
@property(nonatomic, setter=_setPreviousCollectionsCount:) unsigned int _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property(nonatomic) BOOL alwaysHideTabBar; // @synthesize alwaysHideTabBar=_alwaysHideTabBar;
@property(nonatomic) BOOL initiallyScrolledToBottom; // @synthesize initiallyScrolledToBottom=_initiallyScrolledToBottom;
@property(retain, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
- (void)activityViewController:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(BOOL)arg2;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(float)arg2;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect)arg1;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (id)localizedTitleForAssets:(id)arg1;
- (id)alternateContentView;
- (void)setAlternateContentView:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceWillChange:(id)arg1;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject *)arg3 withTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_dismissSearchViewControllerAnimated:(BOOL)arg1;
@property(retain, nonatomic) UIBarButtonItem *customDoneButtonItem; // @synthesize customDoneButtonItem=_customDoneButtonItem;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (id)pu_debugRows;
@property(retain, nonatomic, setter=_setSharingPhotosPickerViewController:) PUPhotosSinglePickerViewController *_sharingPhotosPickerViewController; // @synthesize _sharingPhotosPickerViewController=__sharingPhotosPickerViewController;
@property(retain, nonatomic, setter=_setAlbumPickerViewController:) PUAlbumPickerViewController *_albumPickerViewController; // @synthesize _albumPickerViewController=__albumPickerViewController;
@property(nonatomic, setter=_setRemoveActionSheet:) __weak UIAlertController *_removeActionSheet; // @synthesize _removeActionSheet=__removeActionSheet;
@property(retain, nonatomic, setter=_setActivityViewController:) PUActivityViewController *_activityViewController; // @synthesize _activityViewController=__activityViewController;
- (void)navigateToBottomAnimated:(BOOL)arg1;
- (unsigned int)_indexForPhotoCollection:(id)arg1;
@property(nonatomic) BOOL deletesDuplicatesWhenNecessary; // @synthesize deletesDuplicatesWhenNecessary=_deletesDuplicatesWhenNecessary;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (id)_avalancheStackImageForAsset:(id)arg1 partialStack:(BOOL)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (void)_handleHideMenuItem:(id)arg1;
- (BOOL)shouldShowMenu;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)didSelectAddPlaceholderInSection:(int)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(char *)arg2;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(char *)arg2;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (void)_configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 thumbnailIsPlaceholder:(BOOL)arg3 assetMayHaveChanged:(BOOL)arg4;
- (void)_invalidateAllProgressInfoIndexPaths;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(BOOL)arg3;
@property(copy, nonatomic, setter=ppt_setNextDeleteFinishedBlock:) CDUnknownBlockType ppt_nextDeleteFinishedBlock; // @synthesize ppt_nextDeleteFinishedBlock=_ppt_nextDeleteFinishedBlock;
- (void)_invalidateAllAssetIndexes;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) UIView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
- (id)newEmptyPlaceholderView;
- (void)_handleSelectionButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (id)_selectionButton;
- (id)_pickerBannerView;
- (id)newToolbarItems;
- (void)_slideshowButtonPressed:(id)arg1;
- (id)_cancelButtonItem;
@property(nonatomic, setter=_setHasEditSessionReorderedItems:) BOOL _hasEditSessionReorderedItems; // @synthesize _hasEditSessionReorderedItems=__hasEditSessionReorderedItems;
- (id)_selectSessionDoneBarButtonItem;
- (id)localizedSelectionTitle;
@property(retain, nonatomic, setter=_setModalSearchResultsViewController:) PUPhotosGridViewController *_modalSearchResultsViewController; // @synthesize _modalSearchResultsViewController=__modalSearchResultsViewController;
- (float)globalHeaderHeight;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
@property(retain, nonatomic, setter=_setAssetsWaitingForDeleteChange:) NSSet *_assetsWaitingForDeleteChange; // @synthesize _assetsWaitingForDeleteChange=__assetsWaitingForDeleteChange;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (void)_updateToolbarContentsAnimated:(BOOL)arg1;
- (void)updateTitle;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
@property(retain, nonatomic, setter=_setPushedPhotoBrowserController:) PUPhotoBrowserController *_pushedPhotoBrowserController; // @synthesize _pushedPhotoBrowserController=__pushedPhotoBrowserController;
- (void)_prepareForAutomaticContentOffsetAdjustment;
- (struct CGPoint)stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)_clearAutomaticContentOffsetSnapshot;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (void)_removeSelectedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_referenceBarButtonItemForDeleteAction:(int)arg1;
@property(retain, nonatomic, setter=_setDeleteActionController:) PLDeletePhotosActionController *_deleteActionController; // @synthesize _deleteActionController=__deleteActionController;
- (int)_deleteActionForBarButtonItem:(id)arg1;
- (id)_allAssetsInCollections;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)_didDismissSearchViewController;
- (void)_willDismissSearchViewControllerAnimated:(BOOL)arg1;
- (void)_presentSearchViewController:(id)arg1 forTraitCollection:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateSearchButtonTextForActiveSearchField:(BOOL)arg1;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_adaptSearchViewController:(id)arg1 toTraitCollection:(id)arg2 animated:(BOOL)arg3;
@property(retain, nonatomic, setter=_setModalSearchViewController:) PUSearchViewController *_modalSearchViewController; // @synthesize _modalSearchViewController=__modalSearchViewController;
- (id)_activeSearchButtonItem;
- (void)_searchButtonPressed:(id)arg1;
- (void)_startSlideshowWithSettings:(id)arg1;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (void)_getFirstAsset:(id *)arg1 collection:(id *)arg2;
@property(retain, nonatomic, setter=_puSetPopoverController:) PUPopoverController *_puPopoverController; // @synthesize _puPopoverController=__puPopoverController;
@property(nonatomic, setter=_setShareAssetsPopoverController:) __weak UIPopoverPresentationController *_shareAssetsPopoverController; // @synthesize _shareAssetsPopoverController=__shareAssetsPopoverController;
@property(retain, nonatomic) PUPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void)sender:(id)arg1 shareSelectedAssetsWithAggregateKey:(struct __CFString *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sender:(id)arg1 shareAssets:(id)arg2 aggregateKey:(struct __CFString *)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_areAllAssetsSelected;
- (BOOL)_hasAtLeastOneContainer;
- (BOOL)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (void)beginSuppressingColorSettingsUpdate;
- (id)gridLayout;
@property(nonatomic, setter=_setBatchPreheatingCount:) int _batchPreheatingCount; // @synthesize _batchPreheatingCount=__batchPreheatingCount;
@property(nonatomic, setter=_setPreviousPrefetchRect:) struct CGRect _previousPrefetchRect; // @synthesize _previousPrefetchRect=__previousPrefetchRect;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(nonatomic, setter=_setMaximumNumberOfRowsToPreheat:) int _maximumNumberOfRowsToPreheat; // @synthesize _maximumNumberOfRowsToPreheat=__maximumNumberOfRowsToPreheat;
@property(nonatomic, setter=_setPreviousPreheatContentOffset:) struct CGPoint _previousPreheatContentOffset; // @synthesize _previousPreheatContentOffset=__previousPreheatContentOffset;
- (BOOL)isPreheatingEnabled;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (void)searchViewController:(id)arg1 adaptToTraitCollection:(id)arg2;
- (void)_updateCollectionViewMultipleSelection;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) CDUnknownBlockType onViewDidAppearCompletion; // @synthesize onViewDidAppearCompletion=_onViewDidAppearCompletion;
- (void)endBatchPreheating;
- (void)_performAutomaticContentOffsetAdjustment;
@property(nonatomic, setter=_setCollectionViewLayoutReferenceWidth:) float collectionViewLayoutReferenceWidth; // @synthesize collectionViewLayoutReferenceWidth=_collectionViewLayoutReferenceWidth;
- (void)resetPreheating;
- (void)beginBatchPreheating;
- (BOOL)_updateTransitionWidthOnAppearance;
@property(retain, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // @synthesize _collectionViewSpeedometer=__collectionViewSpeedometer;
@property(retain, nonatomic, setter=_setPhotoOrStackPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *photoOrStackPinchGestureRecognizer; // @synthesize photoOrStackPinchGestureRecognizer=_photoOrStackPinchGestureRecognizer;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)_updateBackButtonTitle;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
- (id)_bestReferenceItemIndexPathWithTopBias:(BOOL)arg1;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(int)arg1;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)arg1;
@property(retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_addButtonPressed:(id)arg1;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)wantsAddContentInToolbar;
- (id)_barButtonSpacerWithWidth:(float)arg1;
- (id)_assetsAllowingDelete:(BOOL)arg1 orRemove:(BOOL)arg2 fromAssets:(id)arg3;
- (void)_removeButtonPressed:(id)arg1;
- (BOOL)isTrashBinViewController;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (id)selectedAssets;
- (void)_shareButtonPressed:(id)arg1;
- (BOOL)isAnyAssetSelected;
- (BOOL)canDeleteContent;
- (BOOL)_canRemoveContent;
- (BOOL)_canShareContent;
- (BOOL)_canAddContent;
- (BOOL)_isAddPlaceholderAtIndexPath:(id)arg1;
- (BOOL)_canShareAsset:(id)arg1;
- (id)_assetsAllowingEditOperation:(int)arg1 fromAssets:(id)arg2;
- (BOOL)_canAllContainersPerformEditOperation:(int)arg1;
- (BOOL)_allowsActions:(unsigned int)arg1;
@property(nonatomic) unsigned int allowedActions; // @synthesize allowedActions=_allowedActions;
- (id)assetsInAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult;
- (void)updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updatePhotoSelectionManager;
- (void)_updateGlobalHeaderVisibility;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
@property(nonatomic, setter=_setHideAssetConfirmationAlert:) __weak UIAlertController *_hideAssetConfirmationAlert; // @synthesize _hideAssetConfirmationAlert=__hideAssetConfirmationAlert;
@property(retain, nonatomic) UICollectionViewLayout<PUGridLayoutProtocol> *mainGridLayout; // @synthesize mainGridLayout=_mainGridLayout;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (id)bestReferenceItemIndexPath;
- (BOOL)allowSlideshowButton;
- (void)configureGlobalFooterView:(id)arg1;
- (BOOL)wantsGlobalFooter;
- (BOOL)canBeginStackCollapseTransition;
- (void)updateLayoutMetrics;
- (id)newGridLayout;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (void)updateEmptyPlaceholderViewAnimated:(BOOL)arg1;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(int *)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (void)setContentViewInSyncWithModel:(BOOL)arg1;
- (BOOL)isContentViewInSyncWithModel;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (id)assetAtIndexPath:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned int)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1 outClosestMatch:(id *)arg2;
- (id)longPressGestureRecognizer;
- (void)updateGlobalFooter;
- (BOOL)hasScrollableContent;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2;
- (double)cellAspectRatioHint;
- (void)preheatAssets;
- (int)imageDeliveryMode;
- (struct CGSize)contentSizeForPreheating;
- (struct CGPoint)contentOffsetForPreheating;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)arg1;
- (BOOL)canDisplayEditButton;
- (id)searchButtonItem;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out char *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(int)arg3 animated:(BOOL)arg4;
- (int)cellFillMode;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (BOOL)updateSpec;
- (BOOL)isCurrentCollectionViewDataSource;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

