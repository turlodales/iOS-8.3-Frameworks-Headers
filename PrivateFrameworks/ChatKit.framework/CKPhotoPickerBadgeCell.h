//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIImageView;

@interface CKPhotoPickerBadgeCell : UICollectionReusableView
{
    BOOL _selected;
    UIImageView *_checkmarkImageView;
}

@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

