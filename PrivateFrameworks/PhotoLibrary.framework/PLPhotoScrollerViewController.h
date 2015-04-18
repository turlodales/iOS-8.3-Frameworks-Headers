//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLPhotoBrowserController.h>

@interface PLPhotoScrollerViewController : PLPhotoBrowserController
{
    BOOL _modalSheetIsPresent;
    BOOL _dontChangeStatusBar;
    BOOL _viewWillDisappear;
}

- (BOOL)dontChangeStatusBar;
- (void)setDontChangeStatusBar:(BOOL)arg1;
- (id)_initWithAssetCollections:(id)arg1 dataSource:(id)arg2 lockStatusBar:(BOOL)arg3 currentImageIndexPath:(id)arg4 delayImageLoading:(BOOL)arg5;
- (void)removeRemakerContainerView;
- (id)remakerContainerView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end

