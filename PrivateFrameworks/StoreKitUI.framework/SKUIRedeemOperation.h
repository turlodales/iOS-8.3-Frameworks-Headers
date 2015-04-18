//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString, SKUIClientContext;

@interface SKUIRedeemOperation : NSOperation
{
    BOOL _cameraRecognized;
    NSString *_code;
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _resultBlock;
}

@property(nonatomic) BOOL cameraRecognized; // @synthesize cameraRecognized=_cameraRecognized;
- (id)_itemsForItemIdentifiers:(id)arg1;
- (void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2;
- (id)_performRequestWithProperties:(id)arg1 error:(id *)arg2;
- (id)_requestPropertiesForThankYouWithURL:(id)arg1;
- (id)_redeemForSuccessDictionary:(id)arg1;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (id)initWithCode:(id)arg1;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)main;

@end

