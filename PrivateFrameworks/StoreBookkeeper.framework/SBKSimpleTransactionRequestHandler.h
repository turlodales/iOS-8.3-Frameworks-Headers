//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreBookkeeper/SBKRequestHandler.h>

@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler
{
    BOOL _canceled;
    SBKTransactionController *_transactionController;
}

- (id)initWithBagContext:(id)arg1;
- (void)scheduleTransaction:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SBKTransactionController *transactionController; // @synthesize transactionController=_transactionController;
- (void)timeout;
- (void)cancelWithError:(id)arg1;
@property(readonly, nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
- (void).cxx_destruct;
- (void)cancel;

@end

