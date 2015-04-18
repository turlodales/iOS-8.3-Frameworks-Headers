//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@class NSArray, SLRequestMultiPartInputStream;

@interface SLRequestBodyInputStream : NSInputStream
{
    NSArray *_inputStreams;
    SLRequestMultiPartInputStream *_currentStream;
    unsigned int _dataLength;
    unsigned int _dataOffset;
    unsigned int _currentIndex;
    unsigned int _currentOffset;
    unsigned int _currentLength;
    BOOL _openEventSent;
    unsigned int _streamStatus;
    struct __CFRunLoopSource *_rls;
    CDUnknownFunctionPointerType _clientCallback;
    CDStruct_304912e7 _clientContext;
    SLRequestBodyInputStream *_selfReferenceDuringStreamEventTrigger;
    id <NSStreamDelegate> _delegate;
}

@property(readonly) unsigned int totalBytes;
- (unsigned int)bytesRead;
- (id)streamError;
- (void)open;
- (void).cxx_destruct;
- (void)close;
@property(nonatomic) __weak id <NSStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)_streamEventTrigger;
- (id)nextStream;
- (void)_scheduleCallback;
- (id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_304912e7 *)arg3;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end

