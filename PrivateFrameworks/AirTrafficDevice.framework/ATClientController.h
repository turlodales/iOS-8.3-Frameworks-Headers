//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ATClientController : NSObject
{
    NSDictionary *_clientMap;
    struct __CFDictionary *_queueMap;
}

+ (id)controllerForDataclasses:(id)arg1;
+ (id)sharedInstance;
- (id)allClients;
- (void)waitToDrain;
- (void)resetQueues;
- (BOOL)_loadClientsForDataclasses:(id)arg1;
- (id)_queueForClient:(id)arg1;
- (id)clientForDataclass:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end

