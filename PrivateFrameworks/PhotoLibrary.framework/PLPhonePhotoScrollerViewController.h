//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLPhotoScrollerViewController.h>

#import "UINavigationControllerDelegate.h"

@class NSString, UIView;

@interface PLPhonePhotoScrollerViewController : PLPhotoScrollerViewController <UINavigationControllerDelegate>
{
    BOOL _isModalTransition;
    BOOL _didDisappearUnderModalTransition;
    UIView *_viewToRemoveForSlideShow;
}

- (BOOL)isModalTransitioning;
- (void)beginSlideshowByRemovingView:(id)arg1;
- (BOOL)_isPerformingModalTransitionFromCamera;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithPhotoAtIndexPath:(id)arg1 inAssetCollections:(id)arg2 dataSource:(id)arg3 lockStatusBar:(BOOL)arg4 delayImageLoading:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
