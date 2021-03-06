//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_queue>, SKUIClientContext;

@interface SKUISyncWishlistOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _resultBlock;
}

- (BOOL)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(char *)arg3 error:(id *)arg4;
@property(copy) CDUnknownBlockType resultBlock;
- (BOOL)_loadRemoteItemsForWishlist:(id)arg1 didChange:(char *)arg2 error:(id *)arg3;
- (void)_sendLocalChangesForWishlist:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)main;
- (id)init;

@end

