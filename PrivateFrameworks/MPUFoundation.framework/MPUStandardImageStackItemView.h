//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPUFoundation/MPUImageStackItemView.h>

@class MPUBorderConfiguration, MPUBorderView, UIColor;

@interface MPUStandardImageStackItemView : MPUImageStackItemView
{
    MPUBorderConfiguration *_borderConfiguration;
    MPUBorderView *_borderView;
    BOOL _hasPendingBorderUpdates;
    BOOL _isBeingConfigured;
    float _dropShadowAlpha;
    UIColor *_dropShadowColor;
    unsigned int _dropShadowEdges;
    float _dropShadowWidth;
    float _overlayBorderWidth;
    float _overlayBorderAlpha;
    UIColor *_overlayBorderColor;
    float _overlayCenterAlpha;
    UIColor *_overlayCenterColor;
}

@property(retain, nonatomic) UIColor *dropShadowColor; // @synthesize dropShadowColor=_dropShadowColor;
@property(retain, nonatomic) UIColor *overlayBorderColor; // @synthesize overlayBorderColor=_overlayBorderColor;
@property(retain, nonatomic) UIColor *overlayCenterColor; // @synthesize overlayCenterColor=_overlayCenterColor;
@property(nonatomic) float overlayBorderWidth; // @synthesize overlayBorderWidth=_overlayBorderWidth;
@property(nonatomic) float dropShadowWidth; // @synthesize dropShadowWidth=_dropShadowWidth;
@property(nonatomic) unsigned int dropShadowEdges; // @synthesize dropShadowEdges=_dropShadowEdges;
@property(nonatomic) float overlayBorderAlpha; // @synthesize overlayBorderAlpha=_overlayBorderAlpha;
@property(nonatomic) float overlayCenterAlpha; // @synthesize overlayCenterAlpha=_overlayCenterAlpha;
- (void)_updateForBorderViewChange;
@property(nonatomic) float dropShadowAlpha; // @synthesize dropShadowAlpha=_dropShadowAlpha;
- (void)didCompleteItemViewConfiguration;
- (void)willBeginItemViewConfiguration;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

