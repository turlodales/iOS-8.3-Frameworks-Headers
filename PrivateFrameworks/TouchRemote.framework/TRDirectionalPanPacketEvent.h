//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalPanPacketEvent : TRPacketEvent
{
    int _gestureState;
    struct CGPoint _location;
    struct CGPoint _velocity;
}

+ (unsigned int)_packetEventType;
- (id)initWithGestureState:(int)arg1 location:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
@property(readonly, nonatomic) int gestureState; // @synthesize gestureState=_gestureState;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
- (id)description;

@end

