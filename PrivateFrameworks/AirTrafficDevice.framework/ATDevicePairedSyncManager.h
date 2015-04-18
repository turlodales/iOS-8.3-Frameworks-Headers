//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATIDSServiceListener.h"
#import "ATMessageLinkObserver.h"
#import "ATSessionObserver.h"
#import "PSYProgressObserverDelegate.h"

@class ATDeviceService, ATIDSService, NSObject<OS_dispatch_queue>, NSString, PSYProgressObserver;

@interface ATDevicePairedSyncManager : NSObject <PSYProgressObserverDelegate, ATMessageLinkObserver, ATIDSServiceListener, ATSessionObserver>
{
    PSYProgressObserver *_syncProgressObserver;
    ATDeviceService *_deviceService;
    NSObject<OS_dispatch_queue> *_queue;
    ATIDSService *_idsService;
    BOOL _initialSyncPhaseCompleted;
}

- (id)initWithIDSService:(id)arg1;
@property BOOL initialSyncPhaseCompleted; // @synthesize initialSyncPhaseCompleted=_initialSyncPhaseCompleted;
- (void)handleDeviceUnPairedNotification;
- (void)handleDevicePairedNotification;
- (BOOL)hasRestriction;
- (void)idsServiceDevicesDidChange:(id)arg1;
- (void)progressObserver:(id)arg1 didFinishActivity:(id)arg2 withError:(id)arg3;
- (void)progressObserverDidChangeProgress:(id)arg1;
- (void)progressObserverDidChangeState:(id)arg1;
- (void).cxx_destruct;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

