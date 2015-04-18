//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUICatalog, CUIStyleEffectConfiguration;

@interface NSLineFragmentRenderingContext : NSObject
{
    void *_runs;
    long _numRuns;
    unsigned short *_glyphs;
    struct CGSize *_advancements;
    float _leftSideDelta;
    float _lineWidth;
    float _leftControlWidth;
    float _rightControlWidth;
    float _elasticWidth;
    struct CGRect _imageBounds;
    struct {
        unsigned int _isRTL:1;
        unsigned int _vAdvance:1;
        unsigned int _flipped:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _reserved:28;
    } _flags;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (void)finalize;
@property(retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // @synthesize cuiStyleEffects=_styleEffects;
@property(retain, nonatomic) CUICatalog *cuiCatalog; // @synthesize cuiCatalog=_catalog;
- (struct CGRect)imageBounds;
- (BOOL)isRTL;
- (float)elasticWidth;
- (float)lineFragmentWidth;
- (void)getMaximumAscender:(float *)arg1 minimumDescender:(float *)arg2;
- (struct CGSize)sizeWithBehavior:(int)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(float *)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithRuns:(struct __CFArray *)arg1 glyphOrigin:(float)arg2 lineFragmentWidth:(float)arg3 elasticWidth:(float)arg4 usesScreenFonts:(BOOL)arg5 isRTL:(BOOL)arg6;
- (oneway void)release;
@property(nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;

@end

