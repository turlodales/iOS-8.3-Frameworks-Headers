//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView;

@interface PLFilledActivityIndicator : UIView
{
    UIActivityIndicatorView *_indicatorView;
}

- (void)startAnimatingAfterDelay:(double)arg1;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (BOOL)isOpaque;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithLocation:(struct CGPoint)arg1;

@end

