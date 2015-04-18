//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLCloudCommentsChangeObserver.h"
#import "PLDismissableViewController.h"
#import "PLPhotoCommentEntryViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAGradientLayer, NSCache, NSString, PLCloudSharedComment, PLManagedAsset, PLPhotoCommentEntryView, UIBarButtonItem, UIImageView, UITableView, UIView, _UIBackdropView;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLPhotoCommentEntryViewDelegate, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIView *_tableContainerView;
    PLManagedAsset *_asset;
    CAGradientLayer *_maskLayer;
    PLPhotoCommentEntryView *_entryView;
    PLCloudSharedComment *_justInsertedComment;
    BOOL _justTappedSmileButton;
    BOOL _editMode;
    BOOL _temporaryKeyboardHideReshow;
    BOOL _shouldAdjustInitialScrollPosition;
    float _keyboardOverlap;
    id <PLCommentsViewControllerDelegate> _commentsControllerDelegate;
    UIView *_containerView;
    NSCache *_commentsHeightCache;
    UIImageView *_gradientView;
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_cancelButton;
    BOOL _isCompact;
    struct CGRect _availableBounds;
}

@property(nonatomic) BOOL editMode; // @synthesize editMode=_editMode;
- (void)cloudCommentsDidChange:(id)arg1;
@property(nonatomic) struct CGRect availableBounds; // @synthesize availableBounds=_availableBounds;
@property(nonatomic) BOOL isCompact; // @synthesize isCompact=_isCompact;
@property(nonatomic) id <PLCommentsViewControllerDelegate> commentsControllerDelegate; // @synthesize commentsControllerDelegate=_commentsControllerDelegate;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
@property(retain, nonatomic) PLCloudSharedComment *justInsertedComment; // @synthesize justInsertedComment=_justInsertedComment;
- (BOOL)checkAndAlertMaxLikesReached;
- (BOOL)_checkAndAlertMaxCommentsReachedWhenFinalizing:(BOOL)arg1;
- (void)_addCommentButtonTapped:(id)arg1;
- (void)_smileButtonTapped:(id)arg1;
- (int)textCommentSection;
- (int)assetOwnerCommentSection;
- (int)smileCommentSection;
- (BOOL)shouldShowCommentPostingUI;
- (id)_firstUnreadCloudComment;
- (void)_postCommentValidated:(id)arg1;
- (int)postCommentSection;
- (struct CGSize)_preferredViewSizeInContainerSize:(struct CGSize)arg1 forInterfaceOrientation:(int)arg2 tableViewSize:(struct CGSize *)arg3;
- (void)_stopWatchingKeyboard;
- (void)_startWatchingKeyboard;
- (void)_adjustInitialScrollPosition:(BOOL)arg1;
- (void)_updateLayerMaskWithBoundsChange;
- (BOOL)_adjustTextEntrySize;
- (float)_tableViewHeightForWidth:(float)arg1 interfaceOrientation:(int)arg2;
- (float)_heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
- (BOOL)showAssetOwnerSection;
- (void)updateForSizeChange;
@property(retain, nonatomic) NSString *draftComment;
- (void)setEditMode:(BOOL)arg1 shouldBecomeFirstResponder:(BOOL)arg2;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelDeleteMode:(id)arg1;
- (void)setRasterization:(BOOL)arg1;
- (void)cancelCurrentAction:(id)arg1;
- (void)scrollToComment:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PLManagedAsset *asset; // @synthesize asset=_asset;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) UIBarButtonItem *cancelButton;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

