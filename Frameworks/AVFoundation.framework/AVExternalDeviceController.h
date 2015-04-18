//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVExternalDeviceControllerInternal, NSArray;

@interface AVExternalDeviceController : NSObject
{
    AVExternalDeviceControllerInternal *_externalDeviceController;
}

@property(nonatomic) int discoveryMode;
@property(nonatomic) __weak id <AVExternalDeviceControllerDelegate> delegate;
- (id)init;
- (void)dealloc;
- (BOOL)isExternalDeviceCurrent:(id)arg1;
- (BOOL)setCurrentExternalDevice:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *availableExternalDevices;
- (BOOL)setCurrentExternalDevice:(id)arg1 withPassword:(id)arg2;

@end

