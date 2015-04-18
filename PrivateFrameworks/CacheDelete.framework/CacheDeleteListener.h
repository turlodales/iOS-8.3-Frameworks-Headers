//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableSet, NSString, NSXPCListener, Protocol;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>
{
    id _xObj;
    NSMutableSet *_requiredEntitlements;
    Protocol *_protocol;
    NSXPCListener *_listener;
}

+ (id)daemonListenerWithExportedObject:(id)arg1;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSMutableSet *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(retain, nonatomic) id xObj; // @synthesize xObj=_xObj;
- (void)addRequiredEntitlement:(id)arg1;
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void).cxx_destruct;
- (void)resume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

