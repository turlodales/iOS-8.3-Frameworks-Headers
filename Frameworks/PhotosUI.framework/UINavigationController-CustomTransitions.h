//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface UINavigationController (CustomTransitions)
- (void)_pu_setCurrentNavigationTransition:(id)arg1;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)pu_navigationTransitionWillStart:(id)arg1;
- (void)pu_popToViewController:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (id)pu_currentNavigationTransition;
- (void)pu_pushViewController:(id)arg1 withTransition:(id)arg2 animated:(BOOL)arg3 isInteractive:(BOOL)arg4;
- (void)pu_popViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (id)pu_currentInteractiveTransition;
@end

