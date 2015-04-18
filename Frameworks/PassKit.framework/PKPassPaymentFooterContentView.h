//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKPaymentPass, UIButton;

@interface PKPassPaymentFooterContentView : UIView
{
    BOOL _isVisibleAsFooter;
    PKPaymentPass *_pass;
    UIButton *_infoButton;
    UIView *_bottomRule;
}

@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)initWithPass:(id)arg1;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (void)layoutSubviews;
- (void)dealloc;
@property(readonly, nonatomic) BOOL isVisibleAsFooter; // @synthesize isVisibleAsFooter=_isVisibleAsFooter;
- (void)_infoButtonPressed:(id)arg1;
@property(readonly, nonatomic) UIView *bottomRule; // @synthesize bottomRule=_bottomRule;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;

@end

