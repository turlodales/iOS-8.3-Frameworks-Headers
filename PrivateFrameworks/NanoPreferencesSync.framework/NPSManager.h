//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface NPSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_xpcConnection;
}

- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 containerPath:(id)arg3;
- (void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3;
- (void)synchronizeManagedConfigurationKind:(id)arg1 feature:(id)arg2;
- (void)unsafe_invalidate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2;
- (id)connection;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;

@end

