//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/GCControllerElement.h>

@interface GCControllerButtonInput : GCControllerElement
{
}

- (BOOL)_setValue:(float)arg1;
@property(readonly) float value;
@property(copy) CDUnknownBlockType pressedChangedHandler;
@property(copy) CDUnknownBlockType valueChangedHandler;
@property(readonly, getter=isPressed) BOOL pressed;
- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1;

@end

