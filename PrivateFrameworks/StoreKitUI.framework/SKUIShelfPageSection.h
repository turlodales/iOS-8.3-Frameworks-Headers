//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIViewElementSlideshowDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, SKUIShelfLayoutData, SKUIShelfPageComponent, SKUIShelfViewElement, SKUIViewElementLayoutContext, SKUIViewElementSlideshowController, UICollectionView;

@interface SKUIShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIViewElementSlideshowDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    int _lastNeedsMoreCount;
    int _lockupType;
    BOOL _needsLayout;
    BOOL _needsReload;
    BOOL _rendersWithPerspective;
    UICollectionView *_shelfCollectionView;
    SKUIShelfLayoutData *_shelfLayoutData;
    SKUIShelfViewElement *_shelfViewElement;
    SKUIViewElementSlideshowController *_slideshowController;
    NSArray *_viewElements;
}

- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (float)_columnSpacingForViewElements:(id)arg1;
- (Class)_cellClassForLockup:(id)arg1;
- (int)_lockupTypeForLockup:(id)arg1;
- (void)_performDefaultSelectActionForViewElement:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)_reloadShelfLayoutData;
- (Class)_cellClassForViewElement:(id)arg1;
- (float)_perspectiveHeightForContentSize:(float)arg1;
- (id)_shelfCollectionView;
- (id)backgroundColorForIndexPath:(id)arg1;
- (int)applyUpdateType:(int)arg1;
- (void)_reloadViewElementProperties;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)viewElementSlideshowWillDismiss:(id)arg1;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (struct UIEdgeInsets)sectionContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) SKUIShelfPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

