//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UILabel, _UIBackdropView;

@interface UIWebPDFLabelView : UIView
{
    UILabel *_label;
    _UIBackdropView *_backdropView;
    NSTimer *_timer;
    unsigned int currentPageIndex;
}

- (void)_fadeOutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (double)_fadeOutDelay;
- (void)_makeRoundedCorners;
- (double)_fadeOutDuration;
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4;
@property(nonatomic) unsigned int currentPageIndex; // @synthesize currentPageIndex;
@property(readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
- (void)clearTimer;
- (void)fadeOut;
- (void)sizeToFit;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
