//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell
{
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    float _titlePaddingLeft;
    struct UIEdgeInsets _textLabelInsets;
    float _borderPaddingLeft;
}

@property(nonatomic) struct UIEdgeInsets textLabelInsets; // @synthesize textLabelInsets=_textLabelInsets;
@property(nonatomic) float borderPaddingLeft; // @synthesize borderPaddingLeft=_borderPaddingLeft;
@property(copy, nonatomic) UIColor *topBorderColor;
@property(copy, nonatomic) UIColor *bottomBorderColor;
- (void)_reloadBorderVisibility;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

