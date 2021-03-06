//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class CKDClientContext, CKDClientProxy, CKDOperation, NSDate, NSObject<OS_dispatch_group>, NSOperationQueue, NSString;

@interface CKDPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    BOOL _isFinished;
    BOOL _isExecuting;
    NSDate *_startDate;
    CKDOperation *_realOperation;
    NSOperationQueue *_targetOperationQueue;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(readonly, nonatomic) NSOperationQueue *targetOperationQueue; // @synthesize targetOperationQueue=_targetOperationQueue;
@property(readonly, nonatomic) CKDOperation *realOperation; // @synthesize realOperation=_realOperation;
- (id)ckShortDescription;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
- (id)CKPropertiesDescription;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;
@property(readonly, nonatomic) NSString *sectionID;
- (BOOL)isConcurrent;
@property(readonly, nonatomic) NSString *operationID;
@property(readonly, nonatomic) __weak CKDClientProxy *proxy;
- (void).cxx_destruct;
- (void)main;
- (void)start;
@property(readonly, nonatomic) CKDClientContext *context;
- (id)description;
- (void)cancel;

@end

