//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ATFoundation/ATSocket.h>

#import "NSNetServiceDelegate.h"
#import "NSStreamDelegate.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSObject<OS_tcp_connection>, NSString;

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate>
{
    BOOL _connected;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    NSObject<OS_tcp_connection> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_source> *_source;
    char _readBuffer[65536];
    NSString *_interfaceName;
}

@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (BOOL)_connect;
- (BOOL)open;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (void)closeDescriptor;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

