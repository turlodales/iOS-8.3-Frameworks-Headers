//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSBundle, NSString, NSURL, UIImageView;

@interface SiriUIDownloadableImageView : UIView
{
    UIImageView *_imageView;
    NSURL *_imageURL;
    BOOL _showingPlaceHolderImage;
    NSString *_placeHolderImageName;
    NSBundle *_placeHolderImageBundle;
    float _placeHolderVerticalOffset;
}

- (void)setPlaceHolderVerticalOffset:(float)arg1;
- (void)setPlaceHolderImageName:(id)arg1;
- (id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3;
- (void)_setImage:(id)arg1 isPlaceHolder:(BOOL)arg2;
- (void)showPlaceHolderImage;
- (void)setImageURL:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

