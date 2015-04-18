//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIColor, UIView;

@interface TKPickerDividerTableViewCell : UITableViewCell
{
    UIView *_dividerView;
    int _contentBackdropOverlayBlendMode;
}

@property(nonatomic) int contentBackdropOverlayBlendMode;
@property(retain, nonatomic) UIColor *contentBackgroundColor;
@property(nonatomic, setter=_setContentBackdropOverlayBlendMode:) int _contentBackdropOverlayBlendMode; // @synthesize _contentBackdropOverlayBlendMode;
@property(retain, nonatomic, setter=_setDividerView:) UIView *_dividerView; // @synthesize _dividerView;
- (struct CGRect)_dividerViewFrame;
- (void)setSeparatorStyle:(int)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end

