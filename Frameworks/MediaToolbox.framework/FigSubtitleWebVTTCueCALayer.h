//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface FigSubtitleWebVTTCueCALayer : CALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;
}

- (void)finalize;
- (unsigned char)isDirty;
- (void)setContent:(struct __CFAttributedString *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (id)init;
- (void)dealloc;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (struct __CFString *)getContentID;
- (void)setCuePosition:(struct CGPoint)arg1;
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;
- (void)setDefaultFontSize:(float)arg1;
- (void)setViewport:(struct CGRect)arg1;

@end

