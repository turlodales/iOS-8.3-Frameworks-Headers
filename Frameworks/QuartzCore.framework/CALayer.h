//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAMediaTiming.h"
#import "CAPropertyInfo.h"
#import "NSCoding.h"

@class CAMeshTransform, NSArray, NSDictionary, NSString;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming>
{
    struct _CALayerIvars _attr;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)layer;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (void)CAMLParserEndElement:(id)arg1;
+ (BOOL)needsLayoutForKey:(id)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (void *)regionBeingDrawn;
- (void)scrollPoint:(struct CGPoint)arg1;
@property BOOL acceleratesDrawing;
@property float anchorPointZ;
@property float zPosition;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setContentsChanged;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(copy) NSDictionary *actions;
- (BOOL)hidden;
- (oneway void)release;
@property BOOL allowsDisplayCompositing;
@property(copy) CAMeshTransform *meshTransform;
- (BOOL)isFlipped;
- (id)modelLayer;
@property(copy) NSArray *backgroundFilters;
@property BOOL sortsSublayers;
- (struct CGSize)preferredFrameSize;
@property BOOL contentsOpaque;
@property(copy) NSArray *behaviors;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(copy) NSString *minificationFilter;
@property unsigned int edgeAntialiasingMask;
@property struct CATransform3D sublayerTransform;
@property float shadowRadius;
@property(getter=isDoubleSided) BOOL doubleSided;
@property struct CGRect contentsRect;
@property float shadowOpacity;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (id)initWithLayer:(id)arg1;
@property BOOL allowsEdgeAntialiasing;
@property struct CGColor *borderColor;
@property float borderWidth;
- (BOOL)opaque;
- (void)_display;
- (id).cxx_construct;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
@property float mass;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_dealloc;
- (void)setFlipped:(BOOL)arg1;
@property(retain) id compositingFilter;
@property(copy) NSString *contentsScaling;
@property struct CGPath *shadowPath;
@property(readonly) struct CGRect visibleRect;
@property(getter=isFrozen) BOOL frozen;
@property BOOL preloadsCache;
@property BOOL allowsGroupOpacity;
@property struct CGColor *shadowColor;
@property struct CGPoint anchorPoint;
@property(copy) NSDictionary *style;
@property double timeOffset;
@property struct CGSize shadowOffset;
- (void)setDoublePosition:(struct CADoublePoint)arg1;
- (struct CADoublePoint)doublePosition;
- (void)setDoubleBounds:(struct CADoubleRect)arg1;
- (struct CADoubleRect)doubleBounds;
@property BOOL needsLayoutOnGeometryChange;
- (id)ancestorSharedWithLayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
@property struct CGAffineTransform contentsTransform;
- (void)invalidateContents;
@property(retain) id contents;
@property float rasterizationScale;
@property BOOL shouldRasterize;
- (void)removeAllAnimations;
@property(copy) NSArray *filters;
@property float speed;
@property double beginTime;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (void)displayIfNeeded;
- (void)clearHasBeenCommitted;
@property BOOL clearsContext;
@property float opacity;
@property BOOL masksToBounds;
- (BOOL)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
@property float contentsScale;
@property(copy) NSString *contentsGravity;
@property BOOL needsDisplayOnBoundsChange;
@property(copy) NSArray *sublayers;
- (void)removeFromSuperlayer;
- (void)layoutBelowIfNeeded;
- (BOOL)needsLayout;
@property struct CGPoint position;
@property float cornerRadius;
- (void)renderInContext:(struct CGContext *)arg1;
@property(retain) CALayer *mask;
@property BOOL allowsGroupBlending;
@property struct CGRect contentsCenter;
@property(copy) NSString *magnificationFilter;
- (id)presentationLayer;
@property float repeatCount;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)hasBeenCommitted;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)context;
- (struct CADoublePoint)convertDoublePoint:(struct CADoublePoint)arg1 fromLayer:(id)arg2;
- (struct CADoublePoint)convertDoublePoint:(struct CADoublePoint)arg1 toLayer:(id)arg2;
@property(getter=isOpaque) BOOL opaque;
- (void)removeAnimationForKey:(id)arg1;
@property struct CATransform3D transform;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
@property(readonly) CALayer *superlayer;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)setAffineTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)affineTransform;
- (id)actionForKey:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)display;
@property double duration;
@property BOOL hitTestsAsOpaque;
- (void)layoutIfNeeded;
@property(copy) NSString *name;
@property __weak id delegate;
- (id)debugDescription;
- (unsigned int)retainCount;
@property struct CGRect bounds;
@property struct CGRect frame;
- (void)addSublayer:(id)arg1;
- (id)init;
@property(getter=isHidden) BOOL hidden;
- (void)setNeedsLayout;
- (void)encodeWithCoder:(id)arg1;
@property struct CGColor *backgroundColor;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)size;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)retain;
@property double repeatDuration;
@property float shininess;
- (BOOL)getRendererInfo:(struct _CARenderRendererInfo *)arg1 size:(unsigned long)arg2;
@property float coefficientOfRestitution;
@property float momentOfInertia;
@property float velocityStretch;
@property float metallicity;
@property float specularReflectance;
@property float diffuseReflectance;
@property float ambientReflectance;
@property BOOL acceptsLights;
@property(copy) NSArray *lights;
@property struct CGSize backgroundColorPhase;
@property BOOL swapsMaskAndLayer;
@property BOOL invertsShadow;
@property BOOL canDrawConcurrently;
@property BOOL literalContentsCenter;
@property BOOL allowsHitTesting;
- (BOOL)doubleSided;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (BOOL)layoutIsActive;
- (BOOL)_canDisplayConcurrently;
- (struct CADoubleRect)convertDoubleRect:(struct CADoubleRect)arg1 fromLayer:(id)arg2;
- (void)_didCommitLayer:(struct Transaction *)arg1;
@property BOOL shadowPathIsBounds;
@property BOOL drawsAsynchronously;
@property BOOL rasterizationPrefersDisplayCompositing;
@property struct CGRect cornerContentsCenter;
@property unsigned int maskedCorners;
@property(retain) id cornerContents;
- (struct CGSize)_preferredSize;
@property struct CGSize sizeRequisition;
- (BOOL)drawsMipmapLevels;
- (void)_renderBorderInContext:(struct CGContext *)arg1;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (void)_prepareContext:(struct CGContext *)arg1;
- (void)_cancelAnimationTimer;
- (BOOL)_scheduleAnimationTimer;
- (BOOL)ignoresHitTesting;
- (BOOL)_deferrsDidBecomeVisiblePostCommit;
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;
@property float minificationFilterBias;
- (unsigned int)_renderImageCopyFlags;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (id)_initWithReference:(id)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (struct CGRect)_visibleRectOfLayer:(id)arg1;
- (void)_scrollRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (void)_scrollPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)addState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (BOOL)contentsAreFlipped;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (struct CADoubleRect)convertDoubleRect:(struct CADoubleRect)arg1 toLayer:(id)arg2;
- (id)initWithBounds:(struct CGRect)arg1;

// Remaining properties
@property(copy) NSArray *stateTransitions; // @dynamic stateTransitions;
@property(copy) NSArray *states; // @dynamic states;

@end

