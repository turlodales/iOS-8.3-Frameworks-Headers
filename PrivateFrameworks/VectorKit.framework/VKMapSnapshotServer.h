//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface VKMapSnapshotServer : NSObject
{
    BOOL _softwareRendering;
    NSObject<OS_dispatch_queue> *_homeQueue;
}

- (id)initWithSoftwareRendering:(BOOL)arg1 homeQueue:(id)arg2;
- (void)_renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

