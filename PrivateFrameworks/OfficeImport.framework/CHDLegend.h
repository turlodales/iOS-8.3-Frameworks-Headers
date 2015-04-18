//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDCollection, EDResources, OADGraphicProperties;

@interface CHDLegend : NSObject
{
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    unsigned int mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    _Bool mIsVertical;
}

- (_Bool)isSingleColumnLegend;
- (id)legendEntries;
- (unsigned int)fontIndex;
- (void)setIsSingleColumnLegend:(_Bool)arg1;
- (void)setLegendPosition:(int)arg1;
- (id)initWithResources:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (int)legendPosition;
- (id)graphicProperties;
- (id)font;
- (void)setFont:(id)arg1;
- (void)dealloc;

@end

