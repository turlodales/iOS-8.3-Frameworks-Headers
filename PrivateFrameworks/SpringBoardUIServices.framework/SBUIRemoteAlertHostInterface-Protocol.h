//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SBUIRemoteAlertHostInterface
- (void)setSupportedInterfaceOrientationOverride:(unsigned int)arg1;
- (void)setShouldDisableFadeInAnimation:(BOOL)arg1;
- (void)setShouldDismissOnUILock:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2;
- (void)setDesiredAutoLockDuration:(double)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(NSString *)arg2;
- (void)setDesiredStatusBarStyleOverrides:(int)arg1;
- (void)setDismissalAnimationStyle:(int)arg1;
- (void)setAllowsAlertStacking:(BOOL)arg1;
- (void)setBackgroundStyle:(int)arg1 withDuration:(double)arg2;
- (void)setWallpaperTunnelActive:(BOOL)arg1;
- (void)setAllowsMenuButtonDismissal:(BOOL)arg1;
- (void)setDesiredHardwareButtonEvents:(int)arg1;
- (void)dismissAndLockUIIfNecessary;
- (void)dismiss;
- (void)setAllowsBanners:(BOOL)arg1;
@end

