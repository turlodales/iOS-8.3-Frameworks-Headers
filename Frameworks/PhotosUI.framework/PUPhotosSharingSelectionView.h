//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIImageView;

@interface PUPhotosSharingSelectionView : UICollectionReusableView
{
    UIImageView *_imageView;
    BOOL _selected;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateSelected;

@end

