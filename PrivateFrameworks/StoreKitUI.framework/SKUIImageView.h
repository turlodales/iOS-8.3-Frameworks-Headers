//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UITapGestureRecognizer;

@interface SKUIImageView : UIImageView
{
    struct CGSize _imageSize;
    UITapGestureRecognizer *_tapRecognizer;
}

- (void)drawDecorationsWithImageRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

