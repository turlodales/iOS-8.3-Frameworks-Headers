//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFContextProvider.h"
#import "MCDNowPlayingViewControllerDataSource.h"
#import "MCDNowPlayingViewControllerDelegate.h"

@class MCDButton, MCDNowPlayingViewController, MPAVController, MPMediaQuery, NSArray, NSString, NSTimer, UIAlertController, UIImage, UILabel;

@interface MCDMusicNowPlayingViewController : UIViewController <AFContextProvider, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate>
{
    id <MCDCarDisplayServiceProvider> _serviceProvider;
    MPAVController *_player;
    MCDNowPlayingViewController *_nowPlayingViewController;
    MPMediaQuery *_albumQuery;
    NSString *_nowPlayingTitle;
    NSString *_nowPlayingArtist;
    NSString *_nowPlayingAlbum;
    UIImage *_nowPlayingAlbumArt;
    MCDButton *_wishlistButton;
    UILabel *_rightTitleLabel;
    UIAlertController *_actionSheetAlertController;
    BOOL _isLive;
    BOOL _isExplicitTrack;
    NSTimer *_updateTimer;
    NSArray *_controlPages;
    unsigned int _currentPageIndex;
    int _viewMode;
}

@property(retain, nonatomic) NSArray *controlPages; // @synthesize controlPages=_controlPages;
- (BOOL)nowPlayingViewControllerShouldUseWishlist:(id)arg1;
- (id)initWithQueryToShuffle:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (void)nowPlayingViewControllerCreate:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (BOOL)nowPlayingViewControllerCanCreate:(id)arg1;
- (BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(int)arg2 state:(int)arg3;
- (BOOL)nowPlayingViewController:(id)arg1 shouldEnableButton:(int)arg2;
- (BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(int)arg2 withImage:(out id *)arg3 tinted:(out char *)arg4;
- (id)repeatStringForNowPlayingViewController:(id)arg1;
- (unsigned int)repeatTypeForNowPlayingViewController:(id)arg1;
- (id)shuffleStringForNowPlayingViewController:(id)arg1;
- (unsigned int)shuffleTypeForNowPlayingViewController:(id)arg1;
- (BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;
- (double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double *)arg2;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (void)_updatePlaymodesForRadio;
- (void)_wishlistPressed:(id)arg1;
- (void)_updateWishlistString;
- (void)_playerTick;
- (void)_setPlayerRepeatType:(unsigned int)arg1;
- (void)_presentNowPlayingInfo;
- (void)_itemStoreIDDidChangeNotification:(id)arg1;
- (void)_playbackContentsChanged:(id)arg1;
- (void)updateTrackInformation;
@property(nonatomic) int viewMode; // @synthesize viewMode=_viewMode;
- (id)initWithRadioStation:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 startPlay:(BOOL)arg3;
- (id)initWithGeniusMixPlaylist:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)newPresentationNavigationController;
- (id)initWithQuery:(id)arg1 startingAtIndex:(unsigned int)arg2 player:(id)arg3 serviceProvider:(id)arg4;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
@property(nonatomic) unsigned int currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusedItem;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)_itemChanged:(id)arg1;
- (void)_registerForNotifications;
- (void)_playbackStateChanged:(id)arg1;
- (void)_unregisterForNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

