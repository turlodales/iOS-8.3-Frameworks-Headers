//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, OADGraphicFeatureCache;

@interface OADGraphicStyleCache : NSObject
{
    OADGraphicFeatureCache *mFillCacheArray[4];
    OADGraphicFeatureCache *mStrokeCache;
    OADGraphicFeatureCache *mShadowCache;
    OADGraphicFeatureCache *mColorCache;
    OADGraphicFeatureCache *mFontFaceCache;
    OADGraphicFeatureCache *mTextStyleCache;
    OADGraphicFeatureCache *mTableIdCache;
    NSMutableDictionary *mTableStyleCache;
    OADGraphicFeatureCache *mChartIdCache;
    OADGraphicFeatureCache *mDrawableStyleCacheArray[4];
}

+ (int)fillCatagory:(id)arg1;
- (void)applyCachedDrawableStyle:(id)arg1 toTextBodyProperties:(id)arg2;
- (void)applyCachedDrawableStyle:(id)arg1 toParagraphProperties:(id)arg2;
- (void)applyCachedDrawableStyle:(id)arg1 toGraphicProperties:(id)arg2;
- (id)cachedDrawableStylesOfCategory:(int)arg1;
- (id)chartStyleIds;
- (id)tableStyleIds;
- (id)fillsOfCategory:(int)arg1;
- (id)countedDrawableStyleOfCategory:(int)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)cacheDrawablePropertiesOfCategory:(int)arg1 withGraphicProperties:(id)arg2 textBodyProperties:(id)arg3 paragraphProperties:(id)arg4 characterProperties:(id)arg5 colorContext:(id)arg6;
- (void)cacheChartStyleId:(long)arg1;
- (id)tableStyleForId:(id)arg1;
- (void)cacheTableStyle:(id)arg1;
- (unsigned int)cacheDrawablePropertiesOfCategory:(int)arg1 withFillCategory:(int)arg2 fillIndex:(unsigned int)arg3 strokeIndex:(unsigned int)arg4 shadowIndex:(unsigned int)arg5 reflectionOpacity:(float)arg6 textStyleIndex:(unsigned int)arg7;
- (unsigned int)cacheShadow:(id)arg1;
- (unsigned int)cacheStroke:(id)arg1;
- (unsigned int)cacheFill:(id)arg1 returnCategory:(int *)arg2;
- (id)colorCache;
- (id)fontFaceCache;
- (id)shadows;
- (id)strokes;
- (id)init;
- (void)dealloc;

@end

