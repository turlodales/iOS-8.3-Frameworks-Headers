//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/GCControllerButtonInput.h>

@interface _GCControllerButtonInput : GCControllerButtonInput
{
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _pressedChangedHandler;
    float _value;
}

- (BOOL)_setValue:(float)arg1;
- (void).cxx_destruct;
- (float)value;
- (void)setPressedChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)pressedChangedHandler;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;

@end

