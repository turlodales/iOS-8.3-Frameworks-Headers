//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubbleFlowRootViewController.h>

@class _GKBubbleFlowPseudoModalViewController;

@interface _GKBubbleFlowOnDemandFormSheetViewController : GKBubbleFlowRootViewController
{
    BOOL _falseDismissSkippedOrCompleted;
    _GKBubbleFlowPseudoModalViewController *_pseudoModalViewController;
}

@property(nonatomic) BOOL falseDismissSkippedOrCompleted; // @synthesize falseDismissSkippedOrCompleted=_falseDismissSkippedOrCompleted;
@property(retain, nonatomic) _GKBubbleFlowPseudoModalViewController *pseudoModalViewController; // @synthesize pseudoModalViewController=_pseudoModalViewController;
- (BOOL)_obscuringContentUnderneath;
- (void)_cleanUpOurPresentedModalSetupRootViewControllerIfNecessaryAnimated:(BOOL)arg1;
- (void)_ensureWeHaveAPresentedModalSetupRootViewControllerToPresent:(id)arg1 andThen:(CDUnknownBlockType)arg2 animated:(BOOL)arg3;
- (BOOL)isCoveringContentUnderneath;
- (void)clearInterstitialViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;

@end

