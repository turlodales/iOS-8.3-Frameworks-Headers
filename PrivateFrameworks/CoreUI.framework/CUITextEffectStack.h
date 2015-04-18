//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIShapeEffectStack.h>

@interface CUITextEffectStack : CUIShapeEffectStack
{
    _Bool renderHighQuality;
}

- (void)drawUsingQuartz:(CDUnknownBlockType)arg1 inContext:(struct CGContext *)arg2 inBounds:(struct CGRect)arg3 atScale:(float)arg4;
- (void)drawGlyphs:(const unsigned short *)arg1 inContext:(struct CGContext *)arg2 usingFont:(struct __CTFont *)arg3 atPositions:(const struct CGPoint *)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(struct CGRect)arg7 atScale:(float)arg8;
- (void)drawGlyphs:(const unsigned short *)arg1 inContext:(struct CGContext *)arg2 usingFont:(struct __CTFont *)arg3 withAdvances:(const struct CGSize *)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(struct CGRect)arg7 atScale:(float)arg8;
- (float)effectiveInteriorFillOpacity;
- (void)_drawShadow:(CDStruct_e412a414)arg1 usingQuartz:(CDUnknownBlockType)arg2 inContext:(struct CGContext *)arg3;
- (void)_drawShadow:(CDStruct_e412a414)arg1 forGlyphs:(const unsigned short *)arg2 inContext:(struct CGContext *)arg3 usingFont:(struct __CTFont *)arg4 atPositions:(const struct CGPoint *)arg5 count:(unsigned long)arg6;
- (void)_drawShadow:(CDStruct_e412a414)arg1 forGlyphs:(const unsigned short *)arg2 inContext:(struct CGContext *)arg3 usingFont:(struct __CTFont *)arg4 withAdvances:(const struct CGSize *)arg5 count:(unsigned long)arg6;
- (struct CGColor *)newBackgroundPatternColorWithSize:(struct CGSize)arg1 contentScale:(float)arg2 forContext:(struct CGContext *)arg3;
- (void)drawProcessedMask:(struct CGContext *)arg1 atBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 withScale:(float)arg4;
- (struct CGContext *)newGlyphMaskContextForBounds:(struct CGRect)arg1 fromContext:(struct CGContext *)arg2 withScale:(float)arg3;
- (BOOL)useCoreImageRendering;
- (id)initWithEffectPreset:(id)arg1;

@end

