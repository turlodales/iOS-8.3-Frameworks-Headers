//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject
{
    SKUIURLConnectionRequest *_request;
}

- (id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2;
- (id)initWithDonation:(id)arg1 configuration:(id)arg2;
- (void)purchaseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;

@end

