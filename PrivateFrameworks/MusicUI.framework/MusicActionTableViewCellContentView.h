//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicTableViewCellContentView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface MusicActionTableViewCellContentView : MusicTableViewCellContentView
{
    BOOL _displayAsDisabled;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    struct UIOffset _imageOffset;
}

- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
@property(nonatomic, getter=isDisplayingAsDisabled) BOOL displayAsDisabled; // @synthesize displayAsDisabled=_displayAsDisabled;
@property(nonatomic) struct UIOffset imageOffset; // @synthesize imageOffset=_imageOffset;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

