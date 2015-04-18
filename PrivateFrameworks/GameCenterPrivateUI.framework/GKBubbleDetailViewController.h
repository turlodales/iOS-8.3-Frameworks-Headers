//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKCenteredContentViewController.h>

@class GKHorizontalBubbleControlsView, GKLabel, GKPlayerWithSpeechBalloonView, NSArray, UIImageView;

@interface GKBubbleDetailViewController : GKCenteredContentViewController
{
    BOOL _showPlayerWithSpeechView;
    BOOL _showDescriptionView;
    BOOL _didFloatInBubbles;
    BOOL _didTransition;
    UIImageView *_iconView;
    GKLabel *_titleLabel;
    GKLabel *_subtitleLabel;
    GKLabel *_descriptionLabel;
    GKLabel *_disabledFunctionalityLabel;
    GKPlayerWithSpeechBalloonView *_playerWithSpeechView;
    GKHorizontalBubbleControlsView *_bubblesView;
    NSArray *_portraitConstraints;
    NSArray *_landscapeConstraints;
    NSArray *_activeConstraints;
}

+ (Class)iconViewClass;
@property(nonatomic) BOOL didTransition; // @synthesize didTransition=_didTransition;
@property(nonatomic) BOOL didFloatInBubbles; // @synthesize didFloatInBubbles=_didFloatInBubbles;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSArray *landscapeConstraints; // @synthesize landscapeConstraints=_landscapeConstraints;
@property(retain, nonatomic) NSArray *portraitConstraints; // @synthesize portraitConstraints=_portraitConstraints;
@property(nonatomic) BOOL showDescriptionView; // @synthesize showDescriptionView=_showDescriptionView;
@property(nonatomic) BOOL showPlayerWithSpeechView; // @synthesize showPlayerWithSpeechView=_showPlayerWithSpeechView;
@property(retain, nonatomic) GKHorizontalBubbleControlsView *bubblesView; // @synthesize bubblesView=_bubblesView;
@property(retain, nonatomic) GKPlayerWithSpeechBalloonView *playerWithSpeechView; // @synthesize playerWithSpeechView=_playerWithSpeechView;
@property(retain, nonatomic) GKLabel *disabledFunctionalityLabel; // @synthesize disabledFunctionalityLabel=_disabledFunctionalityLabel;
@property(retain, nonatomic) GKLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)animateOutBubbleWithFocus:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideBubbles;
- (void)floatInBubbles;
- (void)registerForAppSwitching;
- (void)prepareViewsForAppear;
- (void)prepareViewsForDisappear;
- (void)activateAppropriateConstraints;
- (void)willAnimateAppearingWithBubbleFlow;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)init;
- (void)dealloc;

@end
