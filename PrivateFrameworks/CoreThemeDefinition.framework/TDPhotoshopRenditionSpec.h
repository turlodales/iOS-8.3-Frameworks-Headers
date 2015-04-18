//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDPhotoshopLayer;

@interface TDPhotoshopRenditionSpec : TDRenditionSpec
{
}

- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned int)arg3;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 baselineMetricsMask:(id)arg5 colorSpaceID:(unsigned int)arg6;
- (id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned int)arg3;
- (void)_logWarning:(id)arg1;
- (int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7;
- (int)_layerIndexInPSDImage:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (void)_logError:(id)arg1;
- (id)debugDescription;

// Remaining properties
@property(retain, nonatomic) TDPhotoshopLayer *photoshopLayer; // @dynamic photoshopLayer;

@end

