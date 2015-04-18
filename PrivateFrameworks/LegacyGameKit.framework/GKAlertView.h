//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

@class UIView;

@interface GKAlertView : UIAlertView
{
    UIView *_clipView;
    UIView *_contentView;
}

+ (struct CGSize)preferredContentViewSize;
+ (void)initialize;
- (void)setContentView:(id)arg1 animated:(BOOL)arg2;
- (void)_replaceContentView:(id)arg1 animated:(BOOL)arg2;
- (void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)initAlertView;
- (void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)layoutAnimated:(BOOL)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (BOOL)_canDrawContent;
- (id)contentView;
- (void)dealloc;

@end

