//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface UIPickerContentView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_checkView;
    struct {
        unsigned int checked:1;
        unsigned int highlighted:1;
    } _pickerContentViewFlags;
}

+ (float)_checkmarkOffset;
- (id)checkedColor;
@property(nonatomic, getter=isChecked) BOOL checked;
- (float)labelWidthForBounds:(struct CGRect)arg1;
- (BOOL)_isSelectable;
- (BOOL)isHighlighted;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

