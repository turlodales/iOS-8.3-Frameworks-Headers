//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCCameraConnectionProtocol.h"

@class CCCameraConnection;

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol>
{
    CCCameraConnection *_parent;
}

@property(nonatomic) __weak CCCameraConnection *parent; // @synthesize parent=_parent;
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_fetchCurrentOrientationAndMirroring:(CDUnknownBlockType)arg1;
- (oneway void)xpc_setFocusPoint:(id)arg1;
- (oneway void)xpc_setPreviewEndpoint:(id)arg1;
- (oneway void)xpc_endVideo;
- (oneway void)xpc_beginVideo;
- (oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)takePhotoWithCountdown:(unsigned int)arg1;
- (void).cxx_destruct;

@end

