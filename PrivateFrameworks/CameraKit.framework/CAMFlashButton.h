//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMExpandableMenuButton.h>

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton
{
    BOOL _allowsAutomaticFlash;
    BOOL _unavailable;
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
}

- (int)numberOfMenuItems;
@property(readonly, nonatomic) UIImageView *_warningIndicatorView; // @synthesize _warningIndicatorView=__warningIndicatorView;
@property(nonatomic) BOOL allowsAutomaticFlash; // @synthesize allowsAutomaticFlash=_allowsAutomaticFlash;
- (void)_commonCAMFlashButtonInitialization;
- (int)indexForMode:(int)arg1;
- (int)modeForIndex:(int)arg1;
@property(nonatomic, getter=isUnavailable) BOOL unavailable; // @synthesize unavailable=_unavailable;
- (BOOL)shouldIgnoreMenuInteraction;
- (id)hiddenIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(int)arg1;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
- (id)initWithExpansionOrientation:(int)arg1;
- (void).cxx_destruct;
- (id)headerView;
- (void)reloadData;
@property(nonatomic) int flashMode;

@end
