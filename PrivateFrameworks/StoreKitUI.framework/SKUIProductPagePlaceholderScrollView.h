//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView
{
    UIView *_placeholderView;
    float _offset;
    BOOL _isPad;
}

@property(nonatomic) BOOL isPad; // @synthesize isPad=_isPad;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
@property(nonatomic) float offset; // @synthesize offset=_offset;
- (void)layoutSubviews;

@end

