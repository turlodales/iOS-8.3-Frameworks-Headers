//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ADDimmerViewDelegate.h"

@class ADInterstitialAd, NSString;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate>
{
    ADInterstitialAd *_interstitialAd;
    struct CGRect _dismissButtonRect;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) struct CGRect dismissButtonRect; // @synthesize dismissButtonRect=_dismissButtonRect;
@property(readonly, nonatomic) ADInterstitialAd *interstitialAd;
- (id)initForInterstitialAd:(id)arg1;
- (BOOL)enableDimmerView:(id)arg1;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

