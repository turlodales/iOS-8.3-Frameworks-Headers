//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSStreamDelegate.h"

@class NSData, NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface MFComposeActivityContinuationOperation : NSOperation <NSStreamDelegate>
{
    BOOL _finished;
    BOOL _executing;
    NSObject<OS_dispatch_queue> *_streamHandlerQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSData *_draftData;
    unsigned int _draftDataByteIndex;
    unsigned int _draftBytesReceived;
    unsigned int _draftExpectedSize;
    unsigned int _transmissionType;
    BOOL _doneWithInputStream;
    BOOL _doneWithOutputStream;
    id <MFComposeActivityContinuationOperationDelegate> _delegate;
}

+ (id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
+ (id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2;
@property(readonly, nonatomic) unsigned int bytesReceived; // @synthesize bytesReceived=_draftBytesReceived;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
@property(nonatomic) id <MFComposeActivityContinuationOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(retain, nonatomic) NSData *draftData; // @synthesize draftData=_draftData;
@property(nonatomic) unsigned int transmissionType; // @synthesize transmissionType=_transmissionType;
@property(readonly, nonatomic) unsigned int bytesExpected; // @synthesize bytesExpected=_draftExpectedSize;
- (void)_commonContinuationStreamTeardownWithStream:(id *)arg1;
- (void)_finishReceivingContinuationDataAndCloseStream;
- (void)_checkInContinuationStream:(id)arg1;
- (void)_failedToTransferContinuationPayload;
- (void)_didFinishTransferringContinuationPayload;
- (void)_handleErrorCode:(unsigned int)arg1 logString:(id)arg2;
- (void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)_sendingDataStream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)_receivingDataStream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)_commonContinuationStreamInitializationWithStream:(id)arg1;
- (void)_setFinished:(BOOL)arg1;
- (void)_complete;
- (void)_startContinuationStreams;
- (void)_setExecuting:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

