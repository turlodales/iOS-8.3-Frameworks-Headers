//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUGridZoomLevelInfo.h>

#import "PUSectionedGridLayoutDelegate.h"

@class NSMutableDictionary, NSString, PHFetchResult;

@interface PUYearsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate>
{
    PHFetchResult *_yearsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}

- (int)imageFormat;
- (void).cxx_destruct;
- (id)displayTitle;
- (id)imageDataForAsset:(id)arg1 itemContentScale:(float)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (void)modelDidChange:(id)arg1;
- (int)maxRowsPerSection;
- (id)momentsInCollectionList:(id)arg1;
- (id)_yearsFetchResult;
- (id)initWithZoomLevel:(unsigned int)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)newCollectionViewLayout;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
- (id)renderedStripsElementKind;
- (void)willShowMagnifiedViewController:(id)arg1;
- (double)cellAspectRatioHint;
- (int)imageDeliveryMode;
- (int)cellFillMode;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (BOOL)supportsIncrementalChangeNotifications;
- (id)sectionHeaderElementKind;
- (struct __CFString *)aggregateLevelKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

