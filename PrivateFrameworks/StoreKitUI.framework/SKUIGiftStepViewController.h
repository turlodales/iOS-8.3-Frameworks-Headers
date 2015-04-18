//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSOperationQueue, SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation;

@interface SKUIGiftStepViewController : UIViewController
{
    SKUIGift *_gift;
    SKUIGiftConfiguration *_giftConfiguration;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
}

- (void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)finishGiftingWithResult:(BOOL)arg1;
- (void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;
@property(readonly, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;

@end
