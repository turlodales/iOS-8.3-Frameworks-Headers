//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HAPAccessoryServerBrowser : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HAPKeyStore> _keyStore;
}

- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
@property(retain, nonatomic) id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;

@end
