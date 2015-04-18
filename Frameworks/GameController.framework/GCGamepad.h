//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCGamepad : NSObject
{
}

+ (BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1;
- (id)button2;
@property(readonly) __weak GCController *controller;
- (id)initWithController:(id)arg1;
- (void)setButton:(id)arg1 pressed:(BOOL)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (id)button3;
- (id)button1;
- (id)button0;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)didChangeValueForElement:(id)arg1;
@property(copy) CDUnknownBlockType valueChangedHandler;
@property(readonly) GCControllerButtonInput *rightShoulder;
@property(readonly) GCControllerButtonInput *leftShoulder;
@property(readonly) GCControllerButtonInput *buttonY;
@property(readonly) GCControllerButtonInput *buttonX;
@property(readonly) GCControllerButtonInput *buttonB;
@property(readonly) GCControllerButtonInput *buttonA;
@property(readonly) GCControllerDirectionPad *dpad;
- (id)saveSnapshot;

@end
