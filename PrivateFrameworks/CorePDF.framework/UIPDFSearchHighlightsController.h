//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIPDFPageView, UIPDFSelection;

@interface UIPDFSearchHighlightsController : NSObject
{
    NSMutableArray *_searchHighlightLayers;
    UIPDFPageView *_pageView;
    struct CGColor *_highlightColor;
    struct CGColor *_borderColor;
    struct CGColor *_shadowColor;
    BOOL _pageRendered;
    NSMutableArray *_rectangles;
    UIPDFSelection *_selection;
}

- (void)makeType4Path:(struct CGPath *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 shadowPath:(struct CGPath *)arg4;
- (void)makeType3Path:(struct CGPath *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 shadowPath:(struct CGPath *)arg4;
- (void)makeType2Path:(struct CGPath *)arg1 to:(unsigned int)arg2 shadowPath:(struct CGPath *)arg3;
- (void)addLayer:(struct CGRect)arg1 path:(struct CGPath *)arg2 shadowPath:(struct CGPath *)arg3 animated:(BOOL)arg4;
- (void)makeType1Path:(struct CGPath *)arg1 shadowPath:(struct CGPath *)arg2;
- (unsigned int)indexOfColumnBreakStartingAt:(unsigned int)arg1;
- (void)addSearchHighlightForRotatedSelection:(id)arg1 animated:(BOOL)arg2;
- (void)makeType2Shadow:(struct CGPath *)arg1 rect:(struct CGRect)arg2;
- (void)makeType1Shadow:(struct CGPath *)arg1 rect:(struct CGRect)arg2 inset:(struct CGPoint)arg3;
- (struct CGRect)unionFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)_addAnimation2:(id)arg1;
- (void)_addAnimation:(id)arg1;
- (void)pageDidRender:(id)arg1;
- (BOOL)hasSearchHighlights;
- (void)clearSearchHighlights;
- (void)addSearchHighlightForSelection:(id)arg1 animated:(BOOL)arg2;
- (id)initWithPageView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)dealloc;

@end

