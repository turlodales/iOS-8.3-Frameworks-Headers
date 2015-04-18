//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "StockGraphViewContainer.h"

@class ChartLabelInfoManager, NSMutableArray, Stock, StockChartData, StockChartDisplayMode, StockGraphView;

@interface SPChartView : UIView <StockGraphViewContainer>
{
    int _selectedInterval;
    StockGraphView *_graph;
    NSMutableArray *_xAxisLabels;
    NSMutableArray *_yAxisLabels;
    ChartLabelInfoManager *_labelInfoManager;
    BOOL _showsHorizontalLines;
    BOOL _glanceGraph;
    BOOL _compactGraph;
    StockChartData *_chartData;
    Stock *_stock;
    id <SPChartViewDelegate> _delegate;
    StockChartDisplayMode *_currentDisplayMode;
}

@property(retain, nonatomic) Stock *stock; // @synthesize stock=_stock;
@property(nonatomic) BOOL compactGraph; // @synthesize compactGraph=_compactGraph;
@property(nonatomic) BOOL glanceGraph; // @synthesize glanceGraph=_glanceGraph;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (float)widestYLabelWidthForMode:(id)arg1;
- (float)lineGraphBottomPadding;
- (struct CGRect)graphViewFrameForMode:(id)arg1;
@property(nonatomic) BOOL showsHorizontalLines; // @synthesize showsHorizontalLines=_showsHorizontalLines;
- (void)_prepareXAxisLabelsForLabelInfoArray:(id)arg1;
@property(readonly, nonatomic) StockChartDisplayMode *currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
- (struct CGRect)lineGraphFrame;
- (void)_setMonthAndYearLabels;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(BOOL)arg2;
- (void)_setHourLabels;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_prepareYAxisLabelsAndPositions;
- (void)setYAxisLabelCount:(unsigned int)arg1;
- (void)clearData;
@property(retain, nonatomic) StockChartData *chartData; // @synthesize chartData=_chartData;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPChartViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

