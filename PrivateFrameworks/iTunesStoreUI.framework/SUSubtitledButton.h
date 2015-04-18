//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton
{
    struct __CFDictionary *_subtitleContentLookup;
    UILabel *_subtitleView;
}

- (id)_subtitledContentForState:(unsigned int)arg1;
- (id)subtitleShadowColorForState:(unsigned int)arg1;
- (id)subtitleColorForState:(unsigned int)arg1;
- (id)subtitleForState:(unsigned int)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (int)_subtitleLineBreakMode;
- (id)_subtitleFont;
- (struct CGRect)subtitleRectForContentRect:(struct CGRect)arg1;
@property(readonly, retain, nonatomic) UIColor *currentSubtitleColor;
@property(readonly, retain, nonatomic) UIColor *currentSubtitleShadowColor;
- (void)_setupSubtitleView;
@property(readonly, retain, nonatomic) NSString *currentSubtitle;
- (void)setSubtitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(unsigned int)arg2;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

