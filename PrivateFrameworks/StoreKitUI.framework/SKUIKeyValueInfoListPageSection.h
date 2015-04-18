//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"

@class NSArray, NSNumber, NSString, SKUIInfoListViewElement, SKUIViewElementLayoutContext;

@interface SKUIKeyValueInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIInfoListViewElement *_infoList;
    NSNumber *_titleColumnWidth;
    NSArray *_viewElements;
}

- (void)_requestCellLayout;
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (int)applyUpdateType:(int)arg1;
- (void)_reloadViewElementProperties;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets)sectionContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

