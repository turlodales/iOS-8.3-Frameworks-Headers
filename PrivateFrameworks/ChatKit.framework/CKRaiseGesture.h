//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMGestureManager;

@interface CKRaiseGesture : NSObject
{
    BOOL _enabled;
    BOOL _proximityState;
    int _gestureState;
    id _target;
    SEL _action;
    CMGestureManager *_gestureManager;
}

+ (BOOL)isRaiseGestureEnabled;
+ (BOOL)isRaiseGestureSupported;
@property(retain, nonatomic) CMGestureManager *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(nonatomic) BOOL proximityState; // @synthesize proximityState=_proximityState;
@property(nonatomic) int gestureState; // @synthesize gestureState=_gestureState;
- (void)proximityStateDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isRecognized) BOOL recognized;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end

