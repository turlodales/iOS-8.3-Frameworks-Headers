//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImage, UIImageView;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_playIcon;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic, getter=isVideo) BOOL video;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect imageFrame;

@end

