//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUILayoutCacheDelegate.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIClientContext, SKUINavigationBarButtonsController, SKUINavigationBarContext, SKUINavigationBarViewElement, SKUINavigationPaletteController, UIView, UIViewController;

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate>
{
    SKUINavigationBarButtonsController *_buttonsController;
    SKUIClientContext *_clientContext;
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteController *_paletteController;
    UIViewController *_parentViewController;
    NSMutableArray *_reusableSearchBarControllers;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SKUINavigationBarViewElement *_viewElement;
}

@property(retain, nonatomic) SKUINavigationBarViewElement *navigationBarViewElement; // @synthesize navigationBarViewElement=_viewElement;
- (void)updateNavigationItem:(id)arg1;
- (void)setReusableSearchBarControllers:(id)arg1;
@property(readonly, nonatomic) NSArray *existingSearchBarControllers;
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;
- (id)_barButtonItemWithButtonViewElement:(id)arg1;
- (float)_availableWidth;
- (id)_addSearchBarControllerWithViewElement:(id)arg1;
- (id)initWithNavigationBarViewElement:(id)arg1;
@property(readonly, nonatomic) UIView *navigationPaletteView;
- (void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2;
- (void)attachToNavigationItem:(id)arg1;
- (void)detachFromNavigationItem:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)_navigationBarContext;
- (id)_titleViewWithViewElement:(id)arg1;
- (id)_barButtonItemWithViewElement:(id)arg1;
- (void)_viewElementEventNotification:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)viewForElementIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

