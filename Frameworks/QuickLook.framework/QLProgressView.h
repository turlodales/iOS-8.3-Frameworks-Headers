//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface QLProgressView : UIView
{
    int _backgroundColorType;
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_loadingTextLabel;
}

@property(copy) NSString *loadingText;
- (void)_update;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;
@property int backgroundColorType;

@end

