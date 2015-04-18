//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import "SKUIViewElementView.h"

@class NSMapTable, NSString, UIScrollView;

@interface SKUIHorizontalListScrollView : SKUIViewReuseView <SKUIViewElementView>
{
    UIScrollView *_scrollView;
    NSMapTable *_viewElementViews;
}

+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
- (void)_buttonAction:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

