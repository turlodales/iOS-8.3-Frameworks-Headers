//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

#import "NSCopying.h"

@class VKRasterTile;

@interface VKMapTile : VKTile <NSCopying>
{
    VKTile *_tiles[34];
    unsigned int _states[34];
    double _stateDates[34];
    id _stateMetas[34];
    struct {
        float x0;
        float x1;
        float y0;
        float y1;
    } _localBounds[34];
    VKRasterTile *_rasterized;
    BOOL _needsRasterization;
    float _maximumStyleZ;
    shared_ptr_89f9185e _labelMapTile;
}

- (CDStruct_818bb265)localBoundsForLayer:(unsigned long long)arg1;
- (void)_setTile:(id)arg1 state:(unsigned int)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4 timestamp:(double)arg5;
@property(nonatomic) BOOL needsRasterization; // @synthesize needsRasterization=_needsRasterization;
- (void)setTile:(id)arg1 state:(unsigned int)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4;
- (unsigned int)tileStateForLayer:(unsigned long long)arg1;
@property(retain, nonatomic) VKRasterTile *rasterized; // @synthesize rasterized=_rasterized;
@property(nonatomic) shared_ptr_89f9185e labelMapTile; // @synthesize labelMapTile=_labelMapTile;
@property(readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
- (id)tileForLayer:(unsigned long long)arg1;
- (id)detailedDescription;
- (id)initWithKey:(const struct VKTileKey *)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

