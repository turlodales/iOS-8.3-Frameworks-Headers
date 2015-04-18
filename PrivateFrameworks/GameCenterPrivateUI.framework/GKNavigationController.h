//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationBarDelegate.h"
#import "UIViewControllerRestoration.h"

@class NSMutableArray, NSString;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration, UINavigationBarDelegate>
{
    NSMutableArray *_deferredTransitions;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(BOOL)arg3;
@property(retain, nonatomic) NSMutableArray *deferredTransitions; // @synthesize deferredTransitions=_deferredTransitions;
- (void)_performDeferredTransition;
- (void)setupGKNavigationController;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

