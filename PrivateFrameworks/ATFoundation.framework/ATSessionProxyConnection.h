//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATSessionObserver.h"
#import "ATSessionProxy.h"

@class ATSession, NSString, NSXPCConnection;

@interface ATSessionProxyConnection : NSObject <ATSessionProxy, ATSessionObserver>
{
    ATSession *_session;
    NSXPCConnection *_connection;
}

- (void)session:(id)arg1 didFinishSessionTask:(id)arg2;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (id)initWithSession:(id)arg1 connection:(id)arg2;
- (void).cxx_destruct;
- (void)connect;
- (void)start;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

