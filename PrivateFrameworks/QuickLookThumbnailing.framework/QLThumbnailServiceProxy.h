//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<QLThumbnailsInterface>, NSXPCConnection;

@interface QLThumbnailServiceProxy : NSObject
{
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
}

+ (id)sharedInstance;
- (void)askThumbnailAdditionIndex:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;

@end

