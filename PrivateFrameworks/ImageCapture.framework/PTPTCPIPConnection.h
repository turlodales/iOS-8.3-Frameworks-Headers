//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSObject<OS_dispatch_semaphore>, NSTimer, PTPTCPIPTransport;

@interface PTPTCPIPConnection : NSObject
{
    PTPTCPIPTransport *_transport;
    NSTimer *_inactivityTimer;
    NSTimer *_receiveTimer;
    NSTimer *_transmitTimer;
    struct __CFReadStream *_inStream;
    struct __CFWriteStream *_outStream;
    NSObject<OS_dispatch_semaphore> *_receiveBufferSemaphore;
    NSMutableData *_recieveBuffer;
    unsigned int _bytesReceived;
    NSObject<OS_dispatch_semaphore> *_transmitBufferSemaphore;
    NSMutableData *_transmitBuffer;
    unsigned int _bytesSent;
}

- (BOOL)writeData:(id)arg1;
- (void)inactivityTimerCallBack:(id)arg1;
- (void)handleEndEncountered;
- (void)handleHasBytesAvailable;
- (id)initWithSocketToHost:(id)arg1 port:(unsigned long)arg2 transport:(id)arg3;
- (id)initWithNativeSocket:(int)arg1 transport:(id)arg2;
- (void)handleErrorOccurred:(CDStruct_1ef3fb1f)arg1;
- (void)handleCanAcceptBytes;
- (BOOL)open;
- (void)close;
- (void)dealloc;

@end

