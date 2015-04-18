//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet;

@interface MKOverlayContainerView : UIView
{
    NSMutableOrderedSet *_overlays[2];
    NSMapTable *_overlayToDrawable[2];
    NSMutableArray *_drawables[2];
    NSMutableArray *_vkOverlays[2];
    UIView *_viewContainers[2];
    id <MKOverlayContainerViewDelegate> _delegate;
    float _mapZoomScale;
}

- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MKOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToWindow;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addOverlays:(id)arg1;
- (void)removeOverlays:(id)arg1;
@property(nonatomic) float mapZoomScale; // @synthesize mapZoomScale=_mapZoomScale;
- (void)visibleRectChanged;
- (id)_viewContainerForLevel:(int)arg1;
- (void)_updateContentScale:(id)arg1;
- (void)_exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2 level:(int)arg3;
- (int)_levelForOverlay:(id)arg1 exists:(char *)arg2;
- (id)_considerAddingDrawable:(id)arg1 inAddRect:(CDStruct_90e2a262)arg2 level:(int)arg3;
- (void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(int)arg3;
- (CDStruct_90e2a262)_mapRectWithFractionOfVisible:(double)arg1;
- (void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(int)arg3;
- (void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(int)arg3 level:(int)arg4;
- (int)_drawableIndexForDrawable:(id)arg1 level:(int)arg2;
- (id)overlaysInLevel:(int)arg1;
- (id)drawableForOverlay:(id)arg1;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2 level:(int)arg3;
- (void)addOverlays:(id)arg1 level:(int)arg2;
- (void)addOverlay:(id)arg1 level:(int)arg2;
- (void)addAndRemoveOverlayViews;

@end

