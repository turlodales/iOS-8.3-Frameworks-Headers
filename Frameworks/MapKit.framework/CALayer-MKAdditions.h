//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface CALayer (MKAdditions)
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (BOOL)getPresentationValue:(id *)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;
- (BOOL)getPresentationValue:(id *)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
@property(readonly, retain, nonatomic) CALayer *currentLayer;
@property(readonly, retain, nonatomic) CALayer *_mapKit_mapLayer;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
@end

