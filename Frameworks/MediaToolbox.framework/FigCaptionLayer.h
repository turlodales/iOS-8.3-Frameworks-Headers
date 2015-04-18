//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer
{
    FigCaptionLayerPrivate *_priv;
}

- (void)finalize;
- (void)layoutSublayers;
- (void)setFontName:(const char *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)init;
- (void)dealloc;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer *)arg1;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;

@end
