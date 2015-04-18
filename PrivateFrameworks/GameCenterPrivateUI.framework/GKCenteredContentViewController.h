//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKViewController.h>

#import "UIScrollViewDelegate.h"

@class GKCenteringScrollView, NSString, UIView;

@interface GKCenteredContentViewController : GKViewController <UIScrollViewDelegate>
{
    GKCenteringScrollView *_scrollView;
    UIView *_containerView;
}

@property(retain, nonatomic) GKCenteringScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
