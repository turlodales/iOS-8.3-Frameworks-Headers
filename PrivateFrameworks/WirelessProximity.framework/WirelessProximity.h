//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCClientDelegate.h"

@class NSString, XPCClient;

@interface WirelessProximity : NSObject <XPCClientDelegate>
{
    int _state;
    id <WirelessProximityDelegate> _delegate;
    XPCClient *_connection;
}

- (void)connectionDied;
- (void)messageArrived:(id)arg1;
- (void)updateState:(int)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
@property(retain, nonatomic) XPCClient *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <WirelessProximityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)connectionInterrupted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

