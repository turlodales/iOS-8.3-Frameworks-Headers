//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAShapeLayer.h"

@interface NLArcLayer : CAShapeLayer
{
    BOOL _needsRegeneration;
    float _arcStart;
    float _radius;
    struct CGPoint _center;
}

- (void)setNeedsRegeneration;
- (void)animatePathCenter:(struct CGPoint)arg1 radius:(float)arg2 lineWidth:(float)arg3 duration:(float)arg4;
- (void)_regeneratePath;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (void)layoutSublayers;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)actionForKey:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;

@end

