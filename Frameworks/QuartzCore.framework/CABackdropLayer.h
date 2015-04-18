//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer
{
}

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property float marginWidth;
@property BOOL disablesOccludedBackdropBlurs;
- (id)statisticsValues;
@property double statisticsInterval;
@property(copy) NSString *statisticsType;
@property(copy) NSString *groupName;
@property float scale;
@property(getter=isEnabled) BOOL enabled;
- (void)didChangeValueForKey:(id)arg1;
@property struct CGRect backdropRect;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;

@end

