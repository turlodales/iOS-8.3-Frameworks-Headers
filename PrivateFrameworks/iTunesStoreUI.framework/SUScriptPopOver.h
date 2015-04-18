//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, UIPopoverController, UIViewController;

@interface SUScriptPopOver : SUScriptObject
{
    UIViewController *_contentViewController;
    BOOL _ignoreDismiss;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
- (void)_setIgnoresDismiss:(BOOL)arg1;
@property(readonly) int backgroundStyleShare;
@property(readonly) int backgroundStyleDefault;
@property(readonly) int backgroundStyleCream;
@property(readonly) int backgroundStyleClear;
@property(readonly) int backgroundStyleBlack;
@property float contentWidth;
@property float contentHeight;
@property(readonly, nonatomic) UIPopoverController *presentablePopoverController;
- (BOOL)showFromNavigationItem:(id)arg1;
- (BOOL)showFromElement:(id)arg1;
- (void)setContentWidth:(float)arg1 height:(float)arg2 animated:(BOOL)arg3;
@property(retain, nonatomic) UIPopoverController *nativePopoverController;
@property(readonly) UIViewController *activeViewController;
- (void)_setNativeViewController:(id)arg1;
- (id)_nativeViewController;
- (void)_showAsModalViewController;
- (BOOL)_isViewControllerVisible;
- (id)_popOverController;
- (BOOL)_shouldDisplayAsPopover;
- (void)_dismissAnimated:(BOOL)arg1;
- (id)_presentablePopoverController;
- (void)_viewControllerDidDismiss:(id)arg1;
- (void)_overlayWillShowNotification:(id)arg1;
- (void)tearDownUserInterface;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property int backgroundStyle;
- (void)dismissAnimated:(id)arg1;
- (BOOL)isVisible;
@property(retain) SUScriptViewController *viewController;
@property(readonly) SUScriptViewController *presentingViewController;
- (id)init;
- (void)dealloc;

@end

