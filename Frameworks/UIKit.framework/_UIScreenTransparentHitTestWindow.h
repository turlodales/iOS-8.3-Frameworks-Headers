//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIView;

@interface _UIScreenTransparentHitTestWindow : UIWindow
{
    UIView *_hitTestableView;
}

- (void)setHitTestInsets:(struct UIEdgeInsets)arg1;
- (BOOL)pointWithinHitTestInsets:(struct CGPoint)arg1;
- (void)_updateTransformLayer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

