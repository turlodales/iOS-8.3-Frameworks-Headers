//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSOperationQueue;

@interface VPCoreMotionDelegate : NSObject
{
    CMMotionManager *motionManager;
    NSOperationQueue *operationQueue;
    CDStruct_bf7dff04 quaternionBuffer[64];
    double timestampBuffer[64];
    int quaternionBufferIndex;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } ringMutex;
    CDStruct_bf7dff04 lastReadQuaternion;
    VPCoreMotionDelegate *weakSelf;
    int accelRingIndex;
    float accelRingX[256];
    float accelRingY[256];
    float accelRingZ[256];
    double accelRingTime[256];
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *gyroFile;
}

- (CDStruct_bf7dff04)getQuaternionByTimestamp:(double)arg1;
- (void)processGyroData:(id)arg1 withError:(id)arg2;
- (void)didUpdateAcceleration:(CDStruct_869f9c67)arg1 time:(double)arg2;
- (long)getVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (void)start;
- (void)stop;
- (id)init;
- (void)dealloc;

@end

