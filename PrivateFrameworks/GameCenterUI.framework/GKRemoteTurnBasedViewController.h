//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKRemoteViewController.h>

#import "GKTurnBasedServiceViewControllerDelegate.h"

@class GKGame, GKTurnBasedMatchmakerViewController, NSString;

@interface GKRemoteTurnBasedViewController : GKRemoteViewController <GKTurnBasedServiceViewControllerDelegate>
{
    GKTurnBasedMatchmakerViewController *_delegateWeak;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)remoteViewControllerIsCanceling;
- (void)setupRemoteView;
- (void)setMatchRequestInternal:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)finishWithError:(id)arg1;
@property(nonatomic) GKTurnBasedMatchmakerViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

