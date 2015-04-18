//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "DDRemoteActionPresenter.h"

@class DDAction, DDActionController;

@interface DDRemoteActionViewController : _UIRemoteViewController <DDRemoteActionPresenter>
{
    BOOL _proxyConfigured;
    DDAction *_action;
    DDActionController *_actionController;
    BOOL _waitingForRemoteConfiguration;
}

+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;
- (void)viewControllerReadyAndIsModal:(BOOL)arg1;
- (void)getIsBeingPresentedInPopover:(CDUnknownBlockType)arg1;
@property DDActionController *actionController; // @synthesize actionController=_actionController;
- (void)actionDidFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
@property(retain) DDAction *action; // @synthesize action=_action;

@end

