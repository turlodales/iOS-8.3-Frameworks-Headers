//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CHAutoStyling.h>

#import "CHAutoStyling.h"

@class NSString;

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling>
{
    BOOL __autoChartFillIsHollow;
    BOOL __autoChartStrokeIsHollow;
}

+ (int)styleIdWithStyleRow:(int)arg1 styleColumn:(int)arg2;
+ (id)colorWithSchemeColorId:(int)arg1 shade:(float)arg2;
+ (id)colorWithSchemeColorId:(int)arg1 tint:(float)arg2;
+ (int)styleColumnWithStyleId:(int)arg1;
+ (int)styleRowWithStyleId:(int)arg1;
+ (id)colorWithSchemeColorId:(int)arg1 transformType:(int)arg2 transformValue:(float)arg3;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned int)arg2 isLine:(_Bool)arg3;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned int)arg3;
- (id)autoTextFill;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (void)setAutoChartStrokeIsHollow:(BOOL)arg1;
- (void)setAutoChartFillIsHollow:(BOOL)arg1;
@property BOOL _autoChartStrokeIsHollow; // @synthesize _autoChartStrokeIsHollow=__autoChartStrokeIsHollow;
- (id)autoOtherStrokeColor;
@property BOOL _autoChartFillIsHollow; // @synthesize _autoChartFillIsHollow=__autoChartFillIsHollow;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)arg1;
- (int)styleRow;
- (id)autoColorOfSeriesWithIndex:(unsigned int)arg1;
- (id)autoMinorGridColor;
- (id)autoAxisAndMajorGridColor;
- (id)autoFloorAndWallsAndPlotArea2DFillColor;
- (unsigned long)autoFloorAndWallsFillIndex;
- (id)autoChartAreaAndDataTableAndFloorStrokeColor;
- (unsigned long)autoFloorAndChartAreaStrokeIndex;
- (id)autoChartAreaFillColor;
- (id)autoColorOfFirstColumnSeriesWithIndex:(unsigned int)arg1 seriesCount:(unsigned int)arg2;
- (int)styleColumn;
- (int)styleId;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (id)autoStrokeForSeriesIndex:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

