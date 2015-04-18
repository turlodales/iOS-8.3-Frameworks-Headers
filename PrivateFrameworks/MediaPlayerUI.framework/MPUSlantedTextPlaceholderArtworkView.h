//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIColor, UIImage;

@interface MPUSlantedTextPlaceholderArtworkView : UIImageView
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIColor *_externalBackgroundColor;
    int _externalContentMode;
    UIImage *_externalImage;
    BOOL _hasValidEffectiveImage;
    BOOL _hasValidPlaceholderImage;
    BOOL _hasValidPlaceholderTextAttributes;
    UIColor *_placeholderBackgroundColor;
    NSObject<OS_dispatch_queue> *_placeholderCreationQueue;
    NSMutableDictionary *_placeholderSubtitleTextAttributes;
    NSMutableDictionary *_placeholderTitleTextAttributes;
    unsigned int _placeholderVersion;
    BOOL _drawsArtworkAsynchronously;
    int _placeholderContentMode;
    UIImage *_placeholderImage;
    UIColor *_placeholderStrokeColor;
    float _placeholderStrokeLineWidth;
    int _placeholderStyle;
    NSString *_placeholderSubtitle;
    NSString *_placeholderTitle;
    struct CGSize _placeholderSize;
}

@property(nonatomic) struct CGSize placeholderSize; // @synthesize placeholderSize=_placeholderSize;
@property(copy, nonatomic) NSString *placeholderTitle; // @synthesize placeholderTitle=_placeholderTitle;
@property(copy, nonatomic) NSString *placeholderSubtitle; // @synthesize placeholderSubtitle=_placeholderSubtitle;
@property(nonatomic) int placeholderStyle; // @synthesize placeholderStyle=_placeholderStyle;
@property(nonatomic) float placeholderStrokeLineWidth; // @synthesize placeholderStrokeLineWidth=_placeholderStrokeLineWidth;
@property(retain, nonatomic) UIColor *placeholderStrokeColor; // @synthesize placeholderStrokeColor=_placeholderStrokeColor;
@property(nonatomic) int placeholderContentMode; // @synthesize placeholderContentMode=_placeholderContentMode;
@property(retain, nonatomic) UIColor *placeholderBackgroundColor; // @synthesize placeholderBackgroundColor=_placeholderBackgroundColor;
@property(nonatomic) BOOL drawsArtworkAsynchronously; // @synthesize drawsArtworkAsynchronously=_drawsArtworkAsynchronously;
- (void)_drawPlaceholderWithBounds:(struct CGRect)arg1 displayScale:(float)arg2;
- (void)_updatePlaceholderTextAttributes;
- (void)_invalidatePlaceholderTextAttributes;
- (void)_invalidateForChangedPlaceholderProperties;
- (void)_invalidateEffectiveImage;
- (void)_updateEffectiveImage;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setContentMode:(int)arg1;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updatePlaceholderImage;

@end

