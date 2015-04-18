//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "SKUIMoreNavigationControllerDelegate.h"

@class NSString, SKUIFloatingOverlayView, SKUITabBarBackgroundView, UIViewController;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate>
{
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    SKUITabBarBackgroundView *_tabBarBackgroundView;
}

+ (Class)_moreNavigationControllerClass;
@property(readonly, nonatomic) UIViewController *floatingOverlayViewController; // @synthesize floatingOverlayViewController=_floatingOverlayViewController;
- (void)cancelTransientViewController:(id)arg1;
- (void)setTabBarBackdropStyle:(int)arg1;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(BOOL)arg2;
- (id)skui_activeNavigationController;
- (void)_layoutFloatingOverlayView;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void).cxx_destruct;
- (void)_setSelectedViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (id)moreNavigationController;
- (id)_backdropGroupName;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

