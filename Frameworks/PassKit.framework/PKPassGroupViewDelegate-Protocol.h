//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPass, PKPassGroupView, PKPassView, PKReusablePassViewQueue;

@protocol PKPassGroupViewDelegate <NSObject>

@optional
- (int)groupViewContentModeForFrontmostPassWhenStacked:(PKPassGroupView *)arg1;
- (PKReusablePassViewQueue *)groupViewReusablePassViewQueue:(PKPassGroupView *)arg1;
- (unsigned int)groupViewPassesSuppressedContent:(PKPassGroupView *)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(PKPassGroupView *)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(PKPassGroupView *)arg1;
- (void)groupView:(PKPassGroupView *)arg1 flipButtonPressedForPass:(PKPass *)arg2;
- (BOOL)groupView:(PKPassGroupView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didUpdatePassView:(PKPassView *)arg2;
- (void)groupViewFrontPassDidFlip:(PKPassGroupView *)arg1 animated:(BOOL)arg2;
- (BOOL)groupViewShouldAllowPassFlip:(PKPassGroupView *)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(PKPassGroupView *)arg1;
- (void)groupView:(PKPassGroupView *)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)groupViewPanDidEnd:(PKPassGroupView *)arg1;
- (void)groupViewPanDidBegin:(PKPassGroupView *)arg1;
- (BOOL)groupViewShouldAllowPanning:(PKPassGroupView *)arg1;
- (void)groupView:(PKPassGroupView *)arg1 didEndShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didBeginShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupViewTapped:(PKPassGroupView *)arg1;
@end

