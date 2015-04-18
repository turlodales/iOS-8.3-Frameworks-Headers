//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIImage, UIImageView;

@interface SKUISlideshowImageScrollView : UIScrollView
{
    UIImageView *_imageView;
    struct CGPoint _centerPointBeforeResize;
    float _scaleBeforeResize;
    UIImage *_image;
}

- (void)zoomIntoPoint:(struct CGPoint)arg1;
- (void)resetZoomScale;
- (void)_resetMinMaxZoomScales;
- (void)_recoverFromResize;
- (void)_prepareToResize;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGRect)visibleRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

