//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;
    int resolveType;
    NSObject<OS_dispatch_queue> *resolveQueue;
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    BOOL startedResolving;
}

- (void)finalize;
@property(readonly) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue;
- (void)cleanup;
- (id)init;
- (void)dealloc;
@property BOOL startedResolving; // @synthesize startedResolving;
@property(readonly) NSObject<OS_dispatch_queue> *cacheAccessQueue; // @synthesize cacheAccessQueue;
@property(readonly) NSObject<OS_dispatch_queue> *resolveQueue; // @synthesize resolveQueue;
@property(retain, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;
@property(nonatomic) int resolveType; // @synthesize resolveType;

@end

