//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURL, SKUIClientContext, SSVLoadURLOperation;

@interface SKUIGiftValidator : NSObject
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    int _validationCount;
    SSVLoadURLOperation *_validationOperation;
    NSURL *_validationURL;
}

- (void)validateDonation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(int)arg3 block:(CDUnknownBlockType)arg4;
- (void)_validateWithBodyDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)validateGift:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithValidationURL:(id)arg1 clientContext:(id)arg2;
@property(readonly, nonatomic, getter=isValidating) BOOL validating;
- (void)cancelValidation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;

@end

