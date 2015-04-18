//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIProductPageTableSection.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIMissingItemDelegate.h"

@class NSArray, NSMapTable, NSString, SKUIMissingItemLoader, SKUIProductPageTableHeaderView, SKUIProductPageTableSeparatorView, SKUIResourceLoader, SKUIStyledImageDataConsumer, UIImage;

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate>
{
    NSMapTable *_artworkRequests;
    SKUIProductPageTableSeparatorView *_footerView;
    SKUIProductPageTableHeaderView *_headerView;
    NSArray *_lockups;
    SKUIMissingItemLoader *_missingItemLoader;
    UIImage *_placeholderImage;
    SKUIStyledImageDataConsumer *_productImageDataConsumer;
    SKUIResourceLoader *_resourceLoader;
}

@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
- (id)_productImageForItem:(id)arg1;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)_missingItemLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)footerViewForTableView:(id)arg1;
- (id)headerViewForTableView:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

