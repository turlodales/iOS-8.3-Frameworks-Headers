//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface VKRasterMapTileServerLoadBalancer : NSObject
{
    NSArray *_tileServers;
    unsigned int _superTileSize;
    NSArray *_snapshotServers;
}

- (void)renderTileRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderSnapshotRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTileServers:(id)arg1 snapshotServers:(id)arg2;
- (id)description;
- (void)dealloc;

@end

