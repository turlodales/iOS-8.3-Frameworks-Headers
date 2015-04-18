//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPUArtworkView, NSArray, UIImage, UIImageView;

@interface MPUExtrasConstrainedArtworkContainerView : UIView
{
    BOOL _shouldAutoresizeMaskLayerToFillBounds;
    BOOL _shouldBottomAlignArtwork;
    MPUArtworkView *_artworkView;
    UIImage *_overlayImage;
    float _overlayScale;
    unsigned int _overlayPosition;
    UIImageView *_overlayView;
    NSArray *_overlaySizeConstraints;
    NSArray *_overlayPositionConstraints;
}

@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) unsigned int overlayPosition; // @synthesize overlayPosition=_overlayPosition;
@property(nonatomic) float overlayScale; // @synthesize overlayScale=_overlayScale;
@property(nonatomic) BOOL shouldAutoresizeMaskLayerToFillBounds; // @synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds;
@property(retain, nonatomic) NSArray *overlayPositionConstraints; // @synthesize overlayPositionConstraints=_overlayPositionConstraints;
@property(retain, nonatomic) NSArray *overlaySizeConstraints; // @synthesize overlaySizeConstraints=_overlaySizeConstraints;
@property(nonatomic) BOOL shouldBottomAlignArtwork; // @synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork;
@property(retain, nonatomic) MPUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

