//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUNavigationTransition.h>

#import "PUCollectionViewLayoutTransitioningDelegate.h"
#import "PUTransitionViewAnimatorDelegate.h"

@class NSSet, NSString, PHCollection, PUPhotoPinchGestureRecognizer, PUStackedAlbumLayout, PUStackedAlbumTransitionLayout, PUTransitionViewAnimator, UIView, UIViewController<PUStackedAlbumControllerTransition>;

@interface PUStackedAlbumTransition : PUNavigationTransition <PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate>
{
    struct CGRect _popTransitionInitialVisibleBounds;
    NSSet *_popTransitionInitialVisibleStackedAssetIndexPaths;
    UIView *_animatorView;
    BOOL _isExpanding;
    BOOL _isForStandInAlbum;
    BOOL _forFolder;
    id <PLAssetContainer> _photoCollection;
    PHCollection *_ph_photoCollection;
    id <PUStackedAlbumTransitionDelegate> _delegate;
    PUStackedAlbumLayout *__transitionLayout;
    PUStackedAlbumTransitionLayout *__interactiveTransitionLayout;
    PUTransitionViewAnimator *__transitionViewAnimator;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    id __disableToken;
    struct CGPoint _interactionCenter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUStackedAlbumTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic, getter=isForFolder) BOOL forFolder; // @synthesize forFolder=_forFolder;
@property(nonatomic, setter=setForStandInAlbum:) BOOL isForStandInAlbum; // @synthesize isForStandInAlbum=_isForStandInAlbum;
@property(retain, nonatomic, setter=ph_setPhotoCollection:) PHCollection *ph_photoCollection; // @synthesize ph_photoCollection=_ph_photoCollection;
@property(retain, nonatomic) id <PLAssetContainer> photoCollection; // @synthesize photoCollection=_photoCollection;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (void)completeInteractiveOperation:(int)arg1 finished:(BOOL)arg2;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (BOOL)collectionViewLayoutShouldProvideCustomAnimations:(id)arg1;
- (void)collectionViewLayout:(id)arg1 willSupplyLayoutAttributes:(id)arg2;
@property(nonatomic, setter=_setTransitionLayout:) __weak PUStackedAlbumLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
- (id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)arg1;
- (id)_newTransitionLayoutWithStackedAlbumLayout:(id)arg1 otherLayout:(id)arg2 forPush:(BOOL)arg3;
@property(retain, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator; // @synthesize _transitionViewAnimator=__transitionViewAnimator;
- (id)_newInteractiveTransitionViewAnimatorForLayout:(id)arg1 collectionView:(id)arg2;
@property(retain, nonatomic, setter=_setDisableToken:) id _disableToken; // @synthesize _disableToken=__disableToken;
@property(retain, nonatomic, setter=_setInteractiveTransitionLayout:) PUStackedAlbumTransitionLayout *_interactiveTransitionLayout; // @synthesize _interactiveTransitionLayout=__interactiveTransitionLayout;
@property(retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
- (void)_setExpanding:(BOOL)arg1;
@property(nonatomic) struct CGPoint interactionCenter; // @synthesize interactionCenter=_interactionCenter;
@property(nonatomic) BOOL isExpanding; // @synthesize isExpanding=_isExpanding;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 isExpanding:(BOOL)arg2;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *fromViewController;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *toViewController;

@end

