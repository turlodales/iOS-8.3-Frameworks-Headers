//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CHDAxis.h>

@interface CHDCategoryAxis : CHDAxis
{
    _Bool mAutomatic;
    _Bool mNoMultipleLevelLabel;
    int mLabelAlignment;
    long mLabelFrequency;
    _Bool mLabelFrequencyAutomatic;
    _Bool mShowSeriesNames;
}

- (_Bool)isLabelFrequencyAutomatic;
- (_Bool)showSeriesLabels;
- (void)setShowSeriesLabels:(_Bool)arg1;
- (void)setLabelAlignment:(int)arg1;
- (int)labelAlignment;
- (void)setNoMultipleLevelLabel:(_Bool)arg1;
- (_Bool)isNoMultipleLabellevel;
- (void)setAutomatic:(_Bool)arg1;
- (_Bool)isAutomatic;
- (void)adjustAxisPositionForHorizontalChart;
- (long)labelFrequency;
- (void)setLabelFrequency:(long)arg1;
- (id)initWithResources:(id)arg1;

@end

