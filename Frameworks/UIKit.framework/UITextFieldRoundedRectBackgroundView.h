//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextFieldBackgroundView.h>

@class UIImageView;

@interface UITextFieldRoundedRectBackgroundView : UITextFieldBackgroundView
{
    UIImageView *_leftCap;
    UIImageView *_center;
    UIImageView *_rightCap;
    UIImageView *_progressFill;
}

- (void)_updateImages;
- (void)layoutSubviews;
- (void)dealloc;

@end

