//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUIReusableHeaderView.h>

@class NSAttributedString, NSString, UILabel;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView
{
    NSAttributedString *_attributedSubtitleText;
    UILabel *_subtitleLabel;
}

+ (float)defaultHeight;
@property(copy, nonatomic) NSAttributedString *attributedSubtitleText; // @synthesize attributedSubtitleText=_attributedSubtitleText;
- (void)_configureSubTitleLabelForBounds:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *subtitleText;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (float)desiredHeightForWidth:(float)arg1;

@end

