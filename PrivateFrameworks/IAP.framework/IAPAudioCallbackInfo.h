//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject
{
    CDUnknownFunctionPointerType _deviceStateChangedCallback;
    void *_deviceStateChangedContext;
    CDUnknownFunctionPointerType _volumeChangedCallback;
    void *_volumeChangedContext;
    CDUnknownFunctionPointerType _pauseOnHeadphoneDisconnectChangedCallback;
    void *_pauseOnHeadphoneDisconnectChangedContext;
    CDUnknownFunctionPointerType _volumeControlSupportChangedCallback;
    void *_volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    struct __CFRunLoop *_dnCenterRunLoop;
    NSLock *_lock;
}

+ (id)sharedInstance;
- (void)clearVolumeControlSupportChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearVolumeChangedCallback;
- (void)setupVolumeChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearDeviceStateChangedCallback;
- (void)setupDeviceStateChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)_volumeControlSupportChanged:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_deviceStateChanged:(id)arg1;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)arg1;
- (id)init;
- (void)dealloc;

@end

