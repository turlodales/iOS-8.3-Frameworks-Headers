//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUIProductPageOverlayDelegate.h"

@class NSArray, NSIndexPath, NSString, SKUIPageComponent, SKUIProductPageOverlayController, SKUIStorePageSectionContext;

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate>
{
    BOOL _bottomSection;
    SKUIPageComponent *_component;
    SKUIStorePageSectionContext *_context;
    SKUIProductPageOverlayController *_overlayController;
    int _sectionIndex;
    BOOL _topSection;
}

@property(nonatomic, getter=isBottomSection) BOOL bottomSection; // @synthesize bottomSection=_bottomSection;
- (void)playVideoWithURL:(id)arg1;
- (id)performItemOfferActionForItem:(id)arg1;
- (struct _NSRange)itemRangeForIndexPathRange:(struct SKUIIndexPathRange)arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
@property(readonly, nonatomic) int defaultItemPinningStyle;
- (void)sendXEventWithLink:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendXEventWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showProductViewControllerWithItem:(id)arg1;
- (void)playVideoForElement:(id)arg1;
- (int)_itemPinningStyle;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (id)_clickEventWithElementName:(id)arg1 index:(int)arg2 fieldData:(id)arg3;
@property(nonatomic, getter=isTopSection) BOOL topSection; // @synthesize topSection=_topSection;
- (id)backgroundColorForIndexPath:(id)arg1;
- (int)applyUpdateType:(int)arg1;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(int)arg2;
- (BOOL)containsElementWithIndexBarEntryID:(id)arg1;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *firstAppearanceIndexPath;
- (void)didAppearInContext:(id)arg1;
- (float)contentInsetAdjustmentForCollectionView:(id)arg1;
@property(readonly, nonatomic) BOOL fitsToHeight;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (BOOL)performDefaultActionForViewElement:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 forItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) int numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (int)pinningTransitionStyleForItemAtIndexPath:(id)arg1;
- (int)pinningStyleForItemAtIndexPath:(id)arg1;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (void)reloadVisibleCellsWithReason:(int)arg1;
- (BOOL)requestLayoutWithReloadReason:(int)arg1;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)showPageWithLink:(id)arg1;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (int)updateWithContext:(id)arg1 pageComponent:(id)arg2;
@property(readonly, nonatomic) SKUIPageComponent *pageComponent; // @synthesize pageComponent=_component;
- (id)initWithPageComponent:(id)arg1;
@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (void)_setContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly, nonatomic) SKUIStorePageSectionContext *context; // @synthesize context=_context;
- (void)dealloc;
@property(readonly, nonatomic) struct UIEdgeInsets sectionContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

