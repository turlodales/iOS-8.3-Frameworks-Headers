//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "APDDataManagerDelegate.h"
#import "APDGlossaryViewControllerDelegate.h"
#import "APDSearchViewControllerDelegate.h"
#import "APDTOCViewControllerDelegate.h"
#import "APDTopicViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIToolbarDelegate.h"

@class APDDataManager, APDGlossaryViewController, APDKVOManager, APDSearchViewController, APDTOCViewController, APDTopicViewController, NSArray, NSString, NSURL, UIBarButtonItem, UIColor, UIImageView, UINavigationController, UITapGestureRecognizer, UIToolbar, UIView;

@interface APDLearnMoreViewController : UIViewController <UIGestureRecognizerDelegate, APDDataManagerDelegate, UIAlertViewDelegate, APDTOCViewControllerDelegate, APDTopicViewControllerDelegate, APDSearchViewControllerDelegate, APDGlossaryViewControllerDelegate, UIToolbarDelegate>
{
    BOOL _reloadTopicPending;
    BOOL _viewDidAppeared;
    BOOL _useDefaultToolbarColor;
    BOOL _displayAsPopover;
    BOOL _dismissTopicViewWhenLoded;
    BOOL _panning;
    BOOL _panningPending;
    BOOL _topicWebViewAnimating;
    struct CGSize _popoverSize;
    float _topicContainerOriginX;
    float _topicContainerStartingY;
    UITapGestureRecognizer *_topicWebViewTapGestureRecognizer;
    UINavigationController *_glossaryNavigationController;
    APDTopicViewController *_topicViewController;
    APDDataManager *_dataManager;
    APDGlossaryViewController *_glossaryViewController;
    BOOL _showDoneButton;
    BOOL _RTL;
    UIView *_topicView;
    id <APDLearnMoreViewControllerDelegate> _delegate;
    int _mode;
    UIColor *_toolbarTintColor;
    UIColor *_searchBarTintColor;
    NSString *_selectedTopicName;
    UIToolbar *_toolbar;
    UIView *_toolbarBottomStrokeView;
    UIImageView *_topicViewLeftShadow;
    UIBarButtonItem *_tocToolbarButton;
    UIBarButtonItem *_searchToolbarButton;
    UIBarButtonItem *_backToolbarButton;
    UIBarButtonItem *_forwardToolbarButton;
    UIBarButtonItem *_doneToolbarButton;
    NSArray *_viewInterfaceOrientations;
    APDKVOManager *_KVOManager;
    APDTOCViewController *_TOCViewController;
    APDSearchViewController *_searchViewController;
}

+ (id)learnMoreViewControllerWithTopicTitle:(id)arg1;
+ (id)learnMoreViewController;
+ (id)learnMoreViewControllerWithAPDID:(id)arg1;
+ (id)version;
@property(copy, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) APDTOCViewController *TOCViewController; // @synthesize TOCViewController=_TOCViewController;
@property(retain, nonatomic) APDKVOManager *KVOManager; // @synthesize KVOManager=_KVOManager;
@property(nonatomic) __weak UIBarButtonItem *doneToolbarButton; // @synthesize doneToolbarButton=_doneToolbarButton;
@property(nonatomic) __weak UIBarButtonItem *forwardToolbarButton; // @synthesize forwardToolbarButton=_forwardToolbarButton;
@property(nonatomic) __weak UIBarButtonItem *backToolbarButton; // @synthesize backToolbarButton=_backToolbarButton;
@property(nonatomic) __weak UIBarButtonItem *searchToolbarButton; // @synthesize searchToolbarButton=_searchToolbarButton;
@property(nonatomic) __weak UIBarButtonItem *tocToolbarButton; // @synthesize tocToolbarButton=_tocToolbarButton;
@property(nonatomic) __weak UIImageView *topicViewLeftShadow; // @synthesize topicViewLeftShadow=_topicViewLeftShadow;
@property(nonatomic) __weak UIView *toolbarBottomStrokeView; // @synthesize toolbarBottomStrokeView=_toolbarBottomStrokeView;
@property(copy, nonatomic) NSString *selectedTopicName; // @synthesize selectedTopicName=_selectedTopicName;
@property(copy, nonatomic) UIColor *searchBarTintColor; // @synthesize searchBarTintColor=_searchBarTintColor;
@property(copy, nonatomic) UIColor *toolbarTintColor; // @synthesize toolbarTintColor=_toolbarTintColor;
@property(nonatomic) BOOL showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) __weak UIView *topicView; // @synthesize topicView=_topicView;
- (void)onSearchButtonTapped:(id)arg1;
- (void)onTocButtonTapped:(id)arg1;
- (void)onForwardButtonTapped:(id)arg1;
- (void)onBackButtonTapped:(id)arg1;
- (void)setSupportPortrait:(BOOL)arg1 upsideDown:(BOOL)arg2 landscapeLeft:(BOOL)arg3 landscapeRight:(BOOL)arg4;
- (void)setBaseURL:(id)arg1 appName:(id)arg2 deviceType:(id)arg3 helpVersion:(id)arg4;
- (void)dismissViewController:(id)arg1;
- (void)searchViewControllerSearchHidden:(id)arg1;
- (void)searchViewControllerSearchWillHide:(id)arg1;
- (void)searchViewControllerSearchBarShown:(id)arg1;
- (void)topicViewControllerWebViewDidFinishLoading:(id)arg1;
- (void)topicViewControllerLoadTopicFailed:(id)arg1;
- (void)topicViewControllerLoadTopic:(id)arg1;
- (void)topicViewController:(id)arg1 loadMovieURL:(id)arg2;
- (void)topicViewControllerSelectedTopicIDChanged:(id)arg1;
- (id)topicViewController:(id)arg1 lastScrollPositionForTopic:(id)arg2;
- (BOOL)topicViewController:(id)arg1 loadNavigationItem:(id)arg2 request:(id)arg3;
- (void)navigationTableViewControllerOnSameTopicSelected:(id)arg1;
- (void)navigationViewController:(id)arg1 showNavigationTopic:(id)arg2;
- (void)dataManagerRequestFailed:(id)arg1;
- (void)showGlossaryTopic:(id)arg1;
- (void)presentViewController:(id)arg1;
@property(copy, nonatomic) NSArray *viewInterfaceOrientations; // @synthesize viewInterfaceOrientations=_viewInterfaceOrientations;
- (void)showTopicWebView;
- (void)showTopicWebViewAnimated:(BOOL)arg1 duration:(float)arg2;
- (void)dismissTopicWebView;
- (BOOL)topicWebViewCanGoForward;
- (BOOL)topicWebViewCanGoBack;
- (void)dismissTopicWebViewWithDuration:(float)arg1 animated:(BOOL)arg2;
- (void)onSectionListChanged:(id)arg1;
- (void)onLocalizationsListChanged:(id)arg1;
- (void)updateTOCToolbarAccessibilityHint;
@property(copy, nonatomic) UIColor *searchBarBarTintColor; // @dynamic searchBarBarTintColor;
@property(copy, nonatomic) UIColor *toolbarBarTintColor; // @dynamic toolbarBarTintColor;
@property(copy, nonatomic) NSString *configServerTargetedReleaseVersion; // @dynamic configServerTargetedReleaseVersion;
@property(copy, nonatomic) NSString *configServerAppIdentifier; // @dynamic configServerAppIdentifier;
@property(copy, nonatomic) NSURL *configServerURL; // @dynamic configServerURL;
@property(copy, nonatomic) NSString *selectedISOCode; // @dynamic selectedISOCode;
@property(copy, nonatomic) NSString *helpVersion; // @dynamic helpVersion;
@property(copy, nonatomic) NSURL *localResourceBundleURL; // @dynamic localResourceBundleURL;
@property(copy, nonatomic) NSURL *remoteHelpURL; // @dynamic remoteHelpURL;
@property(nonatomic) BOOL enableContextMenu;
@property(nonatomic) BOOL showGlossaryLinks;
@property(nonatomic) BOOL useRemoteAssetsForLocalHelp; // @dynamic useRemoteAssetsForLocalHelp;
- (void)updateScrollToTop;
- (void)updateViewLayout;
- (void)updateLocalizationModel;
- (void)onRemoteHelpURLChanged:(id)arg1;
- (void)updateLocalizedStrings;
- (void)showWebViewWithTopic:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSString *selectedTopicID; // @dynamic selectedTopicID;
- (void)onDoneTapped:(id)arg1;
- (void)panned:(id)arg1;
- (void)updateToolbarButtons;
@property(nonatomic) BOOL translucentBar; // @dynamic translucentBar;
- (void)onLocaleChanged:(id)arg1;
@property(nonatomic) BOOL RTL; // @synthesize RTL=_RTL;
@property(copy, nonatomic) UIColor *cellHighlightedColor; // @dynamic cellHighlightedColor;
@property(copy, nonatomic) NSURL *baseURL; // @dynamic baseURL;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)arg1;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)setContentSizeForViewInPopover:(struct CGSize)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (int)positionForBar:(id)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(nonatomic) __weak id <APDLearnMoreViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) APDSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(copy, nonatomic) NSString *appName; // @dynamic appName;
- (BOOL)isPortrait;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

