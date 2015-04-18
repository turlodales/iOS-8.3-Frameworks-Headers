//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUICellLayout.h>

#import "SKUIEditorialLinkViewDelegate.h"

@class NSString, SKUIEditorialLinkView, SKUITextBoxView;

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate>
{
    struct UIEdgeInsets _contentInset;
    float _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    float _totalHeight;
}

- (id)_linkView;
- (void)_initSKUIEditorialCellLayout;
- (id)_textBoxView;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2 expanded:(BOOL)arg3;
- (id)initWithParentView:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

