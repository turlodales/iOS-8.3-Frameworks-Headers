//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/_GCControllerButtonInput.h>

@class _GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : _GCControllerButtonInput
{
    _GCControllerAxisInput *_axis;
    BOOL _positive;
}

- (BOOL)_setValue:(float)arg1;
- (void).cxx_destruct;
@property __weak _GCControllerAxisInput *axis; // @synthesize axis=_axis;
- (float)value;
- (id)description;
@property(readonly, getter=isPositive) BOOL positive; // @synthesize positive=_positive;
- (id)initWithAxis:(id)arg1 positive:(BOOL)arg2;
- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1;
- (BOOL)isAnalog;
- (BOOL)_setValueFromAxisButton:(float)arg1;
- (id)collection;

@end

