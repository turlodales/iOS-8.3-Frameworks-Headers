//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaEntity, UIViewController;

@protocol MPUCoverZoomViewControllerDelegate <NSObject>
- (UIViewController *)detailViewControllerForEntity:(MPMediaEntity *)arg1;

@optional
- (float)imageAspectRatio;
- (unsigned int)maximumNumberOfRows;
- (unsigned int)minimumNumberOfRows;
- (unsigned int)defaultNumberOfRows;
@end

