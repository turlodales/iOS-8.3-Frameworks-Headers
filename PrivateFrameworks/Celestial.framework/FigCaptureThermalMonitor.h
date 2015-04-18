//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface FigCaptureThermalMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    CDUnknownBlockType _torchHandler;
    float _maxTorchLevel;
}

+ (void)initialize;
- (void)_thermalNotification:(int)arg1;
@property(readonly, nonatomic) float maxTorchLevel; // @synthesize maxTorchLevel=_maxTorchLevel;
- (id)initWithThermalHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end

