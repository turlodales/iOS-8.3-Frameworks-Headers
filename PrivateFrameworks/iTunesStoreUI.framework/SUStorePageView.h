//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIScrollView;

@interface SUStorePageView : UIView
{
    UIView *_backdropView;
    UIView *_contentView;
    UIView *_headerView;
    UIScrollView *_headerScrollView;
    UIView *_previewOverlayView;
    struct UIEdgeInsets _contentViewInsets;
}

@property(nonatomic) struct UIEdgeInsets contentViewInsets; // @synthesize contentViewInsets=_contentViewInsets;
@property(retain, nonatomic) UIView *previewOverlayView; // @synthesize previewOverlayView=_previewOverlayView;
@property(retain, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (void)dealloc;

@end

