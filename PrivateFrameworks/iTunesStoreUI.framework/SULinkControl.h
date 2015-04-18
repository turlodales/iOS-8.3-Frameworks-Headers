//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UILabel;

@interface SULinkControl : UIControl
{
    UILabel *_label;
    BOOL _shouldDrawUnderline;
    unsigned int _sizeIsDirty:1;
    int _style;
}

@property(nonatomic) BOOL shouldDrawUnderline; // @synthesize shouldDrawUnderline=_shouldDrawUnderline;
- (void)_updateLabel;
- (void)setHighlighted:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)sizeToFit;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)_label;

@end

