//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPDFSelectionWidget.h"

@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget>
{
    CALayer *_startSelectionGrabber;
    CALayer *_startBar;
    CALayer *_endSelectionGrabber;
    CALayer *_endBar;
    CALayer *_startHandle;
    CALayer *_endHandle;
    CALayer *_fixedSelectionGrabber;
    UIPDFPageView *_pageView;
    float _handleHeight;
    float _handleWidth;
    struct CGPoint _initialSelectionPointOnPage;
    float _offsetX;
    float _offsetY;
    unsigned int _startIndex;
    unsigned int _endIndex;
    struct CGColor *_grabberColor;
    long _startRectangle;
    long _endRectangle;
    _Bool _startLeft;
    _Bool _endRight;
    float _startX;
    float _endX;
}

- (void)layoutWidget;
- (void)layoutEndSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(float)arg3 extraHeight:(float)arg4 unitSize:(struct CGSize)arg5;
- (void)layoutStartSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(float)arg3 extraHeight:(float)arg4 unitSize:(struct CGSize)arg5;
@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage; // @synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage;
- (void)setSelectedGrabber:(unsigned int)arg1;
- (struct CGRect)selectionRectangle;
- (void)endTracking;
- (void)track:(struct CGPoint)arg1;
- (struct CGPoint)viewOffset;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(char *)arg3;
- (void)remove;
- (void)setSelection:(id)arg1;
- (void)layout;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)hide;

@end

