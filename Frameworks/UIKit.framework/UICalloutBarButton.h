//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UITextReplacement;

@interface UICalloutBarButton : UIButton
{
    SEL m_action;
    int m_position;
    int m_type;
    UITextReplacement *m_textReplacement;
    float m_contentWidth;
    float m_contentScale;
    float m_additionalContentHeight;
    float m_dividerOffset;
    float m_imageVerticalAdjust;
    int m_page;
    BOOL m_isText;
    BOOL m_configured;
    BOOL m_single;
    BOOL m_padLeft;
    BOOL m_padRight;
    BOOL m_dontDismiss;
    BOOL forceFlash;
}

+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(float)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6;
@property(nonatomic) BOOL dontDismiss; // @synthesize dontDismiss=m_dontDismiss;
@property(nonatomic) float imageVerticalAdjust; // @synthesize imageVerticalAdjust=m_imageVerticalAdjust;
@property(nonatomic) float dividerOffset; // @synthesize dividerOffset=m_dividerOffset;
@property(nonatomic) int page; // @synthesize page=m_page;
@property(retain, nonatomic) UITextReplacement *textReplacement; // @synthesize textReplacement=m_textReplacement;
@property(readonly, nonatomic) float additionalContentHeight; // @synthesize additionalContentHeight=m_additionalContentHeight;
@property(readonly, nonatomic) float contentScale; // @synthesize contentScale=m_contentScale;
- (void)setContentScale:(float)arg1;
- (void)configureForRightPosition:(int)arg1;
- (void)configureForMiddlePosition;
- (void)configureForLeftPosition:(int)arg1;
- (void)configureForSingle:(int)arg1;
- (void)fadeAndSendAction;
@property(nonatomic) BOOL forceFlash; // @synthesize forceFlash;
- (struct CGRect)adjustRectForPosition:(struct CGRect)arg1 scaleRect:(BOOL)arg2;
- (void)configureLabel;
- (void)cancelFlash;
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2;
- (void)flash;
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(float)arg3 action:(SEL)arg4 type:(int)arg5;
@property(readonly, nonatomic) float contentWidth; // @synthesize contentWidth=m_contentWidth;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(readonly, nonatomic) SEL action; // @synthesize action=m_action;
@property(readonly, nonatomic) int type; // @synthesize type=m_type;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)dealloc;

@end

