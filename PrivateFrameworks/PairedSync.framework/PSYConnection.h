//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, PSYOptions;

@interface PSYConnection : NSObject
{
    BOOL _valid;
    id <PSYConnectionDelegate> _delegate;
    PSYOptions *_options;
    NSXPCConnection *_connection;
}

- (void)startSync;
- (void)_resumeConnectionIfPossible;
- (id)remoteConnection;
- (void)_handleConnectionInvalidation;
- (void)_handleConnectionInterruption;
- (void)startSyncWithOptions:(id)arg1;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property(retain, nonatomic) PSYOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) __weak id <PSYConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

