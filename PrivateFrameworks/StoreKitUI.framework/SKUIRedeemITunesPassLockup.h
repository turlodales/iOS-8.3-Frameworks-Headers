//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class SKUIClientContext, SKUIITunesPassConfiguration, UIImageView, UILabel, UIView;

@interface SKUIRedeemITunesPassLockup : UIControl
{
    SKUIClientContext *_clientContext;
    SKUIITunesPassConfiguration *_configuration;
    UILabel *_descriptionLabel;
    UIView *_horizontalSeparatorView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

- (id)_attributedDescriptionString;
- (id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

