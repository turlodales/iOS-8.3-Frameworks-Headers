//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, SKUIClientContext, SKUIITunesPassConfiguration, UIImage;

@interface SKUIRedeemConfiguration : NSObject
{
    int _category;
    SKUIClientContext *_clientContext;
    UIImage *_inputImage;
    SKUIITunesPassConfiguration *_itunesPassConfiguration;
    UIImage *_landingImage;
    NSOperationQueue *_operationQueue;
    UIImage *_successImage;
}

- (void)_didLoadWithResponseDictionary:(id)arg1;
- (id)_redeemPreflightRequestBodyData;
- (void)_loadDefaultImages;
- (void)_setInputImage:(id)arg1;
- (void)_setSuccessImage:(id)arg1;
- (void)_setLandingImage:(id)arg1;
- (void)_loadConfigurationWithURLBagDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIImage *successImage; // @synthesize successImage=_successImage;
@property(readonly, nonatomic) UIImage *landingImage; // @synthesize landingImage=_landingImage;
@property(readonly, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration; // @synthesize ITunesPassConfiguration=_itunesPassConfiguration;
- (id)initWithOperationQueue:(id)arg1 category:(int)arg2 clientContext:(id)arg3;
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) int category; // @synthesize category=_category;
@property(readonly, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;

@end

