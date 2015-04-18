//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_source>, NSOperationQueue, NSString, NSXPCListener;

@interface CKDCloudDatabaseServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;
    NSMutableArray *_connectedClients;
    NSObject<OS_dispatch_source> *_sighandlerSource;
    NSOperationQueue *_clientTeardownQueue;
}

+ (id)sharedServer;
@property(retain, nonatomic) NSOperationQueue *clientTeardownQueue; // @synthesize clientTeardownQueue=_clientTeardownQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sighandlerSource; // @synthesize sighandlerSource=_sighandlerSource;
@property(retain, nonatomic) NSMutableArray *connectedClients; // @synthesize connectedClients=_connectedClients;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (id)allClients;
- (void)statusReport;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void).cxx_destruct;
- (void)resume;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

