//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RUMiniPlayerPlaybackControlsView.h"

@class UIView;

@interface MusicMiniPlayerPlaybackControlsView : RUMiniPlayerPlaybackControlsView
{
}

- (id)_albumTextForItem:(id)arg1;
- (void)_setupVisibleAndDisabledPartsForItem:(id)arg1;
- (Class)_miniPlayerActionsViewControllerClass;
- (Class)_transportControlsClassForItem:(id)arg1;
- (void)_applyShuffleSettingsToButton:(id)arg1;
- (void)_applyRepeatSettingsToButton:(id)arg1;
@property(readonly, nonatomic) UIView *viewForPresentingRepeat;
- (void)layoutSubviews;
- (void)reloadView;
- (id)newButtonForPart:(unsigned long long)arg1;

@end

