//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VisualAlert/AXNotificationHandler.h>

@interface AXLocalNotificationHandler : AXNotificationHandler
{
    id _opaqueObserver;
}

- (void)_stopObservingWithObject:(id)arg1;
- (void)_startObservingWithObject:(id)arg1;
@property(retain, nonatomic, setter=_setOpaqueObserver:) id _opaqueObserver; // @synthesize _opaqueObserver;
- (void)_stopObserving;
- (void)_startObserving;
- (id)_notificationTypeDescription;

@end

