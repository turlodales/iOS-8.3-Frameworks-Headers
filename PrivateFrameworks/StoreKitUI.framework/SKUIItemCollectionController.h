//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIItemStateCenterObserver.h"
#import "SKUIResourceLoaderDelegate.h"

@class NSArray, NSMutableDictionary, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIResourceLoader, SKUIScreenshotDataConsumer, SKUIStyledImageDataConsumer, UIImage;

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIResourceLoaderDelegate>
{
    SKUIItemArtworkContext *_artworkContext;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    id <SKUIItemCollectionDelegate> _delegate;
    BOOL _delegateProvidesScreenshots;
    NSMutableDictionary *_iconArtworkRequestIDs;
    SKUIStyledImageDataConsumer *_iconDataConsumer;
    NSArray *_items;
    SKUIScreenshotDataConsumer *_landscapeScreenshotDataConsumer;
    UIImage *_landscapeScreenshotPlaceholderImage;
    int _numberOfItemsPerPage;
    float _numberOfPagesToCacheAhead;
    SKUIScreenshotDataConsumer *_portraitScreenshotDataConsumer;
    UIImage *_portraitScreenshotPlaceholderImage;
    UIImage *_placeholderImage;
    NSMutableDictionary *_screenshotArtworkRequestIDs;
}

@property(nonatomic) int numberOfItemsPerPage; // @synthesize numberOfItemsPerPage=_numberOfItemsPerPage;
- (id)_placeholderImageForScreenshot:(id)arg1;
- (id)_screenshotForItem:(id)arg1;
@property(retain, nonatomic) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer; // @synthesize portraitScreenshotDataConsumer=_portraitScreenshotDataConsumer;
@property(retain, nonatomic) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer; // @synthesize landscapeScreenshotDataConsumer=_landscapeScreenshotDataConsumer;
- (id)_screenshotArtworkRequestWithItem:(id)arg1;
- (struct _NSRange)_visibleItemRange;
- (void)_reloadForRestrictionsChange;
- (void)_reloadForItemStateChange:(id)arg1;
- (void)_enumerateVisibleCellLayoutsWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) float numberOfPagesToCacheAhead; // @synthesize numberOfPagesToCacheAhead=_numberOfPagesToCacheAhead;
- (BOOL)_loadArtworkForItem:(id)arg1 reason:(int)arg2;
- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(BOOL)arg3;
- (id)_placeholderImageForItem:(id)arg1;
- (id)_iconArtworkRequestWithItem:(id)arg1;
- (id)_initSKUIItemCollectionController;
- (void)_memoryWarningNotification:(id)arg1;
@property(retain, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
- (void)cancelArtworkLoadForItemIndex:(int)arg1;
- (id)performActionForItemAtIndex:(int)arg1;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint)arg1 direction:(float)arg2;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer; // @synthesize iconDataConsumer=_iconDataConsumer;
- (void)loadNextPageOfArtworkWithReason:(int)arg1;
- (id)_artworkLoader;
@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
- (void)configureCellLayout:(id)arg1 forIndex:(int)arg2;
- (void)removeAllCachedResources;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)artworkLoaderDidIdle:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <SKUIItemCollectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

