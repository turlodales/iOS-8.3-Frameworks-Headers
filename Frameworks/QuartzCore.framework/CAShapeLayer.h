//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAShapeLayer : CALayer
{
}

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property(copy) NSString *lineCap;
@property float strokeStart;
@property float strokeEnd;
@property(copy) NSString *lineJoin;
@property(copy) NSArray *lineDashPattern;
@property struct CGPath *path;
@property struct CGColor *strokeColor;
@property(copy) NSString *fillRule;
@property struct CGColor *fillColor;
- (id)implicitAnimationForKeyPath:(id)arg1;
@property float miterLimit;
@property float lineWidth;
- (void)didChangeValueForKey:(id)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
@property float lineDashPhase;

@end

