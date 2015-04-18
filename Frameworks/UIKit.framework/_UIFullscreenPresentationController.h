//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UICurrentContextPresentationController.h>

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController
{
    UIView *_counterRotatedView;
    float _counterRotatedAngle;
    struct CGRect _counterRotatedOriginalBounds;
    int _originalOrientation;
    int _computedOrientation;
}

- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(int)arg3 toOrientation:(int)arg4 force:(BOOL)arg5;
- (BOOL)_invokesDelegatesOnOrientationChange;
- (void)_removeCounterRotation;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (void)_setPresentedViewController:(id)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (int)presentationStyle;
- (void)dealloc;

@end

