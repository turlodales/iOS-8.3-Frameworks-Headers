//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpec.h>

#import "PUPhotoEditLayoutDynamicAdaptable.h"

@class NSString;

@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable>
{
    int _layoutOrientation;
}

- (void)setLayoutOrientation:(int)arg1;
@property(readonly, nonatomic) int layoutOrientation;
@property(readonly, nonatomic) float standardSideBarWidth;
@property(readonly, nonatomic) float standardBottomBarHeight;
- (void)setLayoutOrientation:(int)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

