//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSData, NSFileHandle, NSInputStream, NSMutableArray, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray *_allObjects;
    NSData *_curData;
    unsigned int _curDataPos;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    struct z_stream_s _zlibStream;
    BOOL _haveFlushedZlib;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _shouldCompress;
    BOOL _hasInitedCompression;
    BOOL _haveFinishedCompression;
    BOOL _haveFinishedStreaming;
    unsigned int _bufferSize;
    id <CKDProtobufMessageSigningDelegate> _signingDelegate;
    NSFileHandle *_humanLogFileHandle;
    NSFileHandle *_binaryLogFileHandle;
}

@property(nonatomic) BOOL hasInitedCompression; // @synthesize hasInitedCompression=_hasInitedCompression;
@property(nonatomic) BOOL shouldCompress; // @synthesize shouldCompress=_shouldCompress;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (BOOL)_finishStreaming:(id)arg1;
@property BOOL haveFinishedStreaming; // @synthesize haveFinishedStreaming=_haveFinishedStreaming;
- (int)_writeDataToStream:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1 shouldSign:(BOOL)arg2;
- (id)_prepareMescalSignature:(id)arg1;
@property(retain, nonatomic) NSFileHandle *binaryLogFileHandle; // @synthesize binaryLogFileHandle=_binaryLogFileHandle;
@property(retain, nonatomic) NSFileHandle *humanLogFileHandle; // @synthesize humanLogFileHandle=_humanLogFileHandle;
- (id)_dataForMessage:(id)arg1;
@property(nonatomic) __weak id <CKDProtobufMessageSigningDelegate> signingDelegate; // @synthesize signingDelegate=_signingDelegate;
- (int)_streamNextObject:(id)arg1;
- (id)_compressBodyData:(id)arg1 shouldFlush:(BOOL)arg2;
@property(nonatomic) BOOL haveFinishedCompression; // @synthesize haveFinishedCompression=_haveFinishedCompression;
@property(nonatomic) unsigned int bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)_tearDownOutputStream;
- (id)initWithCompression:(BOOL)arg1;
- (void)setStreamedObjects:(id)arg1;
- (void)tearDown;
- (id)open;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

