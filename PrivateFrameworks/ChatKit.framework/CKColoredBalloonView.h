//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView, UIView<CKGradientReferenceView>;

@interface CKColoredBalloonView : CKBalloonView
{
    BOOL _color;
    BOOL _wantsGradient;
    CKBalloonImageView *_mask;
    CKGradientView *_gradientView;
}

@property(nonatomic) BOOL wantsGradient; // @synthesize wantsGradient=_wantsGradient;
- (void)updateWantsGradient;
@property(retain, nonatomic) CKGradientView *gradientView; // @synthesize gradientView=_gradientView;
- (void)configureForMessagePart:(id)arg1;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
- (BOOL)needsGroupOpacity;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setHasTail:(BOOL)arg1;
- (void)prepareForDisplay;
- (id)overlayColor;
@property(nonatomic) BOOL color; // @synthesize color=_color;
- (void)prepareForReuse;
@property(retain, nonatomic) CKBalloonImageView *mask; // @synthesize mask=_mask;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)description;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
