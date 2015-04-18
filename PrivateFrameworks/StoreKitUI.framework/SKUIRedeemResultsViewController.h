//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIRedeemStepViewController.h>

#import "SKUIItemStateCenterObserver.h"
#import "SKUIRedeemResultsViewDelegate.h"

@class NSOperationQueue, NSString, SKUIGiftItemView, SKUIItemStateCenter, SKUIRedeem, SKUIRedeemITunesPassLockup, SKUIRedeemResultMessageView, SKUITextBoxView, SKUITextLayout, UIButton, UIImage, UIImageView;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate>
{
    UIButton *_anotherButton;
    BOOL _extendedMessageIsExpanded;
    SKUITextLayout *_extendedMessageTextLayout;
    SKUITextBoxView *_extendedMessageView;
    UIImageView *_headerImageView;
    UIImage *_itemImage;
    SKUIItemStateCenter *_itemStateCenter;
    SKUIGiftItemView *_itemView;
    SKUIRedeemResultMessageView *_messageView;
    NSOperationQueue *_operationQueue;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    SKUIRedeem *_redeem;
    int _redeemCategory;
}

@property(readonly, nonatomic) SKUIRedeem *redeem; // @synthesize redeem=_redeem;
@property(nonatomic) int redeemCategory; // @synthesize redeemCategory=_redeemCategory;
- (void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_linksSection;
- (id)_extendedMessageViewSection;
- (id)_headerImageViewSection;
- (id)_passbookLearnMoreSection;
- (id)_anotherButtonSection;
- (id)_messageViewSection;
- (id)_itemViewSection;
- (id)_resultImageViewSection;
- (id)_emptySection;
- (void)_passbookLockupAction:(id)arg1;
- (void)_openAction:(id)arg1;
- (void)_extendedMessageAction:(id)arg1;
- (void)_redeemAnotherAction:(id)arg1;
- (void)_reloadResultViewMessage;
- (void)_setItemImage:(id)arg1;
- (id)initWithRedeem:(id)arg1;
- (void)_setHeaderImage:(id)arg1;
- (id)_itemView;
- (void)_reloadSections;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (void)_doneAction:(id)arg1;
- (id)_item;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

