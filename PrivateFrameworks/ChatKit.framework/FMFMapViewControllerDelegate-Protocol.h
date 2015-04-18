//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMFHandle, FMFMapViewController, UIImage, UIView;

@protocol FMFMapViewControllerDelegate <NSObject>

@optional
- (void *)annotationABRecordForHandle:(FMFHandle *)arg1;
- (UIView *)titleViewForSelectedHandle;
- (UIImage *)annotationImageForHandle:(FMFHandle *)arg1;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didReceiveLocation:(id <MKAnnotation>)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didDeselectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didSelectHandle:(FMFHandle *)arg2;
@end

