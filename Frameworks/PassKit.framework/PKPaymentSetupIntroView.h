//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKPaymentSetupHeroView, PKPaymentSetupInfoView, UIImageView;

@interface PKPaymentSetupIntroView : UIView
{
    PKPaymentSetupHeroView *_heroView;
    int _context;
    UIImageView *_heroImage;
    PKPaymentSetupInfoView *_infoView;
}

- (void)startAnimation;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(int)arg2;
@property(retain, nonatomic) PKPaymentSetupInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIImageView *heroImage; // @synthesize heroImage=_heroImage;
- (BOOL)isBuddyiPad;
- (void)_createSubviews;

@end
