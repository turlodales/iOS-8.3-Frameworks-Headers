//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/WLEasyToHitCustomView.h>

@class CAFilter, NSArray, NSMutableArray, NSMutableSet, PKBarcodeStickerView, PKPass, PKPassColorProfile, PKPassFaceTemplate, UIImage, UIImageView, UIView;

@interface PKPassFaceView : WLEasyToHitCustomView
{
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
    BOOL _showingHeader;
    BOOL _showingBody;
    UIView *_contentView;
    UIImageView *_backgroundView;
    UIImage *_faceImage;
    UIImage *_partialFaceImage;
    CAFilter *_dimmingFilter;
    NSMutableArray *_headerBucketViews;
    NSMutableArray *_bodyBucketViews;
    PKBarcodeStickerView *_barcodeView;
    unsigned int _contentViewCreatedRegions;
    unsigned int _invariantViewCreatedRegions;
    PKPassFaceTemplate *_faceTemplate;
    BOOL _allowBackgroundPlaceHolders;
    BOOL _clipsContent;
    NSArray *_buckets;
    int _style;
    id <PKPassFaceDelegate> _delegate;
    int _backgroundMode;
    unsigned int _visibleRegions;
    float _clippedContentHeight;
}

+ (id)newBackFaceViewForStyle:(int)arg1 tall:(BOOL)arg2;
+ (id)newFrontFaceViewForStyle:(int)arg1;
+ (Class)_faceClassForStyle:(int)arg1 front:(BOOL)arg2;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) UIView *contentView;
- (struct UIEdgeInsets)alignmentRectInsets;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(nonatomic) id <PKPassFaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSMutableArray *headerBucketViews; // @synthesize headerBucketViews=_headerBucketViews;
@property(nonatomic) float clippedContentHeight; // @synthesize clippedContentHeight=_clippedContentHeight;
@property(nonatomic) BOOL clipsContent; // @synthesize clipsContent=_clipsContent;
@property(nonatomic) unsigned int visibleRegions; // @synthesize visibleRegions=_visibleRegions;
@property(nonatomic) int backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property(nonatomic) BOOL allowBackgroundPlaceHolders; // @synthesize allowBackgroundPlaceHolders=_allowBackgroundPlaceHolders;
@property(readonly, retain, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
- (void)prepareForFlip;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) PKBarcodeStickerView *barcodeView;
- (void)createContentViewsWithFade:(BOOL)arg1;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL bodyContentCreated;
- (void)removeContentView:(id)arg1 ofType:(int)arg2;
- (void)setPass:(id)arg1 colorProfile:(id)arg2;
- (void)_flushContentViewsForRegions:(unsigned int)arg1;
- (void)createHeaderContentViews;
- (void)createBodyInvariantViews;
- (void)createHeaderInvariantViews;
- (int)_validityStateForPass:(id)arg1;
- (id)_relevantBuckets;
- (void)_positionBarcodeView;
@property(readonly, nonatomic) BOOL isFrontFace;
- (void)_setContentViewsAlpha:(float)arg1;
- (void)_setShowsBackgroundView:(BOOL)arg1;
- (void)_setShowsBodyViews:(BOOL)arg1;
- (void)_setShowsHeaderViews:(BOOL)arg1;
- (void)_createContentViewsForRegions:(unsigned int)arg1;
- (void)_createInvariantViewsForRegions:(unsigned int)arg1;
- (id)_viewSetForContentViewType:(int)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets shadowInsets;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (id)passFaceTemplate;
- (struct CGRect)barcodeFrame;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (void)insertContentView:(id)arg1 ofType:(int)arg2;
@property(readonly, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
- (void)createBodyContentViews;

@end

